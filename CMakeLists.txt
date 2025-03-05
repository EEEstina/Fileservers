cmake_minimum_required(VERSION 3.9)
project(fileserver VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED OFF)
set(CMAKE_C_EXTENSIONS OFF)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_definitions("-ggdb3")
include_directories(src)
include_directories(${PROJECT_SOURCE_DIR}/libs/install/include)
link_directories(${PROJECT_SOURCE_DIR}/libs/install/lib)

add_library(fileserver "")
target_sources(fileserver
  PRIVATE
    "${PROJECT_SOURCE_DIR}/src/sdk/file_client.h"
    "${PROJECT_SOURCE_DIR}/src/sdk/file_client_impl.h"
    "${PROJECT_SOURCE_DIR}/src/sdk/file_client_impl.cc"
    "${PROJECT_SOURCE_DIR}/src/common/flags.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/masterserver.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/masterserver.pb.h"
    "${PROJECT_SOURCE_DIR}/src/proto/chunkserver.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/chunkserver.pb.h"
    "${PROJECT_SOURCE_DIR}/src/proto/file.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/file.pb.h"
)

message(STATUS "*****project binary: " ${PROJECT_BINARY_DIR})
message(STATUS "*****project source: " ${PROJECT_SOURCE_DIR})

file(GLOB protofiles ${PROJECT_SOURCE_DIR}/src/proto/*.proto) 
foreach(proto_file ${protofiles}) 
  string(REGEX REPLACE "[^/]proto" "" proto_file_name ${proto_file})
  list(APPEND PROTOSRCS "${proto_file_name}.pb.cc") 
  add_custom_command ( 
    OUTPUT "${proto_file_name}.pb.h" "${proto_file_name}.pb.cc"
    COMMAND protoc --proto_path=${PROJECT_SOURCE_DIR}/src/proto
	               --cpp_out=${PROJECT_SOURCE_DIR}/src/proto ${proto_file} 
    DEPENDS ${proto_file} ) 
endforeach(proto_file) 
message(STATUS "***proto sources: ***" ${PROTOSRCS})

# master server
add_executable(masterserver "")
target_sources(masterserver
  PRIVATE
    "${PROJECT_SOURCE_DIR}/src/master/master_main.cc"
    "${PROJECT_SOURCE_DIR}/src/master/masterserver_impl.cc"
    "${PROJECT_SOURCE_DIR}/src/master/masterserver_impl.h"
    "${PROJECT_SOURCE_DIR}/src/proto/masterserver.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/masterserver.pb.h"
    "${PROJECT_SOURCE_DIR}/src/proto/file.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/file.pb.h"
    "${PROJECT_SOURCE_DIR}/src/common/flags.cc"
) 
target_link_libraries(masterserver 
  leveldb 
  pthread 
  syalis-rpc 
  libprotobuf.a 
  libboost_signals.a 
  libboost_system.a
  ) 

# chunk server
add_executable(chunkserver "")
target_sources(chunkserver
  PRIVATE
    "${PROJECT_SOURCE_DIR}/src/chunkserver/chunkserver_main.cc"
    "${PROJECT_SOURCE_DIR}/src/chunkserver/chunkserver_impl.cc"
    "${PROJECT_SOURCE_DIR}/src/chunkserver/chunkserver_impl.h"
    "${PROJECT_SOURCE_DIR}/src/proto/chunkserver.pb.cc"
    "${PROJECT_SOURCE_DIR}/src/proto/chunkserver.pb.h"
)
target_link_libraries(chunkserver libprotobuf.a)

# fs_client
add_executable(fs_client "")
target_sources(fs_client
  PRIVATE 
    "${PROJECT_SOURCE_DIR}/src/client/fs_client.cc"
    "${PROJECT_SOURCE_DIR}/src/common/flags.cc"
)
target_link_libraries(fs_client 
  fileserver
  syalis-rpc 
  pthread 
  libprotobuf.a 
  libboost_signals.a 
  libboost_system.a
  )

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
