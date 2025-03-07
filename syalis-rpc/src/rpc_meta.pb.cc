// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rpc_meta.proto

#include "rpc_meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace goya {
namespace rpc {
class RpcMetaDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RpcMeta>
      _instance;
} _RpcMeta_default_instance_;
}  // namespace rpc
}  // namespace goya
namespace protobuf_rpc_5fmeta_2eproto {
static void InitDefaultsRpcMeta() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::goya::rpc::_RpcMeta_default_instance_;
    new (ptr) ::goya::rpc::RpcMeta();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::goya::rpc::RpcMeta::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_RpcMeta =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsRpcMeta}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_RpcMeta.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::goya::rpc::RpcMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::goya::rpc::RpcMeta, service_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::goya::rpc::RpcMeta, method_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::goya::rpc::RpcMeta, data_size_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::goya::rpc::RpcMeta)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::goya::rpc::_RpcMeta_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "rpc_meta.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016rpc_meta.proto\022\010goya.rpc\"C\n\007RpcMeta\022\022\n"
      "\nservice_id\030\001 \001(\t\022\021\n\tmethod_id\030\002 \001(\t\022\021\n\t"
      "data_size\030\003 \001(\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "rpc_meta.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_rpc_5fmeta_2eproto
namespace goya {
namespace rpc {

// ===================================================================

void RpcMeta::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcMeta::kServiceIdFieldNumber;
const int RpcMeta::kMethodIdFieldNumber;
const int RpcMeta::kDataSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcMeta::RpcMeta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_rpc_5fmeta_2eproto::scc_info_RpcMeta.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:goya.rpc.RpcMeta)
}
RpcMeta::RpcMeta(const RpcMeta& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  service_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.service_id().size() > 0) {
    service_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_id_);
  }
  method_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.method_id().size() > 0) {
    method_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_id_);
  }
  data_size_ = from.data_size_;
  // @@protoc_insertion_point(copy_constructor:goya.rpc.RpcMeta)
}

void RpcMeta::SharedCtor() {
  service_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_size_ = 0;
}

RpcMeta::~RpcMeta() {
  // @@protoc_insertion_point(destructor:goya.rpc.RpcMeta)
  SharedDtor();
}

void RpcMeta::SharedDtor() {
  service_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RpcMeta::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* RpcMeta::descriptor() {
  ::protobuf_rpc_5fmeta_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_5fmeta_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RpcMeta& RpcMeta::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_rpc_5fmeta_2eproto::scc_info_RpcMeta.base);
  return *internal_default_instance();
}


void RpcMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:goya.rpc.RpcMeta)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  service_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  data_size_ = 0;
  _internal_metadata_.Clear();
}

bool RpcMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:goya.rpc.RpcMeta)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string service_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->service_id().data(), static_cast<int>(this->service_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "goya.rpc.RpcMeta.service_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string method_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->method_id().data(), static_cast<int>(this->method_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "goya.rpc.RpcMeta.method_id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 data_size = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &data_size_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:goya.rpc.RpcMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:goya.rpc.RpcMeta)
  return false;
#undef DO_
}

void RpcMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:goya.rpc.RpcMeta)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service_id = 1;
  if (this->service_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_id().data(), static_cast<int>(this->service_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "goya.rpc.RpcMeta.service_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_id(), output);
  }

  // string method_id = 2;
  if (this->method_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method_id().data(), static_cast<int>(this->method_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "goya.rpc.RpcMeta.method_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->method_id(), output);
  }

  // int32 data_size = 3;
  if (this->data_size() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->data_size(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:goya.rpc.RpcMeta)
}

::google::protobuf::uint8* RpcMeta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:goya.rpc.RpcMeta)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service_id = 1;
  if (this->service_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_id().data(), static_cast<int>(this->service_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "goya.rpc.RpcMeta.service_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_id(), target);
  }

  // string method_id = 2;
  if (this->method_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->method_id().data(), static_cast<int>(this->method_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "goya.rpc.RpcMeta.method_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->method_id(), target);
  }

  // int32 data_size = 3;
  if (this->data_size() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->data_size(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:goya.rpc.RpcMeta)
  return target;
}

size_t RpcMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:goya.rpc.RpcMeta)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string service_id = 1;
  if (this->service_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->service_id());
  }

  // string method_id = 2;
  if (this->method_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->method_id());
  }

  // int32 data_size = 3;
  if (this->data_size() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->data_size());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void RpcMeta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:goya.rpc.RpcMeta)
  GOOGLE_DCHECK_NE(&from, this);
  const RpcMeta* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcMeta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:goya.rpc.RpcMeta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:goya.rpc.RpcMeta)
    MergeFrom(*source);
  }
}

void RpcMeta::MergeFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:goya.rpc.RpcMeta)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.service_id().size() > 0) {

    service_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_id_);
  }
  if (from.method_id().size() > 0) {

    method_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_id_);
  }
  if (from.data_size() != 0) {
    set_data_size(from.data_size());
  }
}

void RpcMeta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:goya.rpc.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcMeta::CopyFrom(const RpcMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:goya.rpc.RpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcMeta::IsInitialized() const {
  return true;
}

void RpcMeta::Swap(RpcMeta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcMeta::InternalSwap(RpcMeta* other) {
  using std::swap;
  service_id_.Swap(&other->service_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  method_id_.Swap(&other->method_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(data_size_, other->data_size_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata RpcMeta::GetMetadata() const {
  protobuf_rpc_5fmeta_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_rpc_5fmeta_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace rpc
}  // namespace goya
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::goya::rpc::RpcMeta* Arena::CreateMaybeMessage< ::goya::rpc::RpcMeta >(Arena* arena) {
  return Arena::CreateInternal< ::goya::rpc::RpcMeta >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
