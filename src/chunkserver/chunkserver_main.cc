#include "chunkserver_impl.h"
#include "syalis-rpc /src/rpc_server.h"  // 假设你有一个 RPC 服务器类

#include <iostream>

int main(int argc, char* argv[]) {
    // 创建 ChunkServer 实例
    syalis::fs::ChunkServerImpl chunkserver_service;
    
    // 启动 RPC 服务器，监听请求
    RpcServer rpc_server;
    if (!rpc_server.Start("0.0.0.0", 50051)) {  // 监听 50051 端口
        std::cerr << "Failed to start RPC server on port 50051" << std::endl;
        return -1;
    }

    // 注册 ChunkServer 服务
    rpc_server.RegisterService(&chunkserver_service);

    // 运行服务器（阻塞）
    rpc_server.Run();

    return 0;
}
