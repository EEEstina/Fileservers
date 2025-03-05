#ifndef _CHUNKSERVER_IMPL_H_
#define _CHUNKSERVER_IMPL_H_

#include "proto/chunkserver.pb.h"

namespace syalis {

namespace fs {

class ChunkServerImpl : public ChunkServer {
public:
  ChunkServerImpl() {}
  virtual ~ChunkServerImpl() {}
};

}
}

#endif
