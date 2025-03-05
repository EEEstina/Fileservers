#ifndef _RPC_WRAPPER_H_
#define _RPC_WRAPPER_H_

#include <string>
#include <map>
#include <unistd.h>
#include "proto/masterserver.pb.h"
#include "syalis-rpc/src/rpc_channel.h"
#include "syalis-rpc/src/rpc_controller.h"

namespace syalis {
namespace fs {

//typedef void(MasterServer_Stub::*Callback)(::google::protobuf::RpcController* controller,
//  const CreateFileRequest*, CreateFileResponse*, ::google::protobuf::Closure* done);

typedef std::map<std::string, MasterServer_Stub*> ServerMapTypeDef;

class RpcWrapper {
public:
  bool GetStub(std::string server_addr, MasterServer_Stub*& stub) {
    ServerMapTypeDef::iterator iter = server_map_.find(server_addr);
    if (iter != server_map_.end()) {
      stub = iter->second;
      return true;
    } 
    
    //syalis::rpc::RpcChannelOptions channel_options;
    syalis::rpc::RpcChannel* channel = new syalis::rpc::RpcChannel(server_addr);
    stub = new MasterServer_Stub(channel);
    server_map_[server_addr] = stub;

    return true;
  }

  template<typename Request, typename Response, typename Callback>
  bool SendRequest(MasterServer_Stub* stub, 
    //Callback callback,
    void (MasterServer_Stub::*func)(google::protobuf::RpcController*, const Request*, Response*, Callback*),
    const Request* request, 
    Response* response, 
    int timeout, 
    int retry_times) {
    syalis::rpc::RpcController controller;
    //controller.SetTimeout(timeout);
    (stub->*func)(&controller, request, response, nullptr);
    for (int retry = 0; retry < retry_times; ++retry) {
      if (controller.Failed()) {
        printf("Send failed, retry ...\n");
        usleep(100000);
      } else {
        printf("Send success ...\n");
        return true;
      }
      controller.Reset();
    }

    return false;
  }

private:
  //syalis::rpc::RpcClient rpc_client_;
  //syalis::rpc::RpcClientOptions client_options_;
  ServerMapTypeDef server_map_;
};

}
}

#endif

