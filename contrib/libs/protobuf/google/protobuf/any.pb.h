// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/any.proto

#ifndef PROTOBUF_google_2fprotobuf_2fany_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2fany_2eproto__INCLUDED


#include <contrib/libs/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <contrib/libs/protobuf/arena.h>
#include <contrib/libs/protobuf/arenastring.h>
#include <contrib/libs/protobuf/generated_message_util.h>
#include <contrib/libs/protobuf/metadata.h>
#include <contrib/libs/protobuf/message.h>
#include <contrib/libs/protobuf/repeated_field.h>
#include <contrib/libs/protobuf/extension_set.h>
#include <contrib/libs/protobuf/unknown_field_set.h>
#include <contrib/libs/protobuf/any.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

// Internal implementation detail -- do not call these.
void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
void LIBPROTOBUF_EXPORT protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2fany_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto();

class Any;

// ===================================================================

class LIBPROTOBUF_EXPORT Any : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.protobuf.Any) */ {
 public:
  Any();
  virtual ~Any();

  Any(const Any& from);

  inline Any& operator=(const Any& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Any& default_instance();

  static const Any* internal_default_instance();

  // implements Any -----------------------------------------------

  void PackFrom(const ::google::protobuf::Message& message);
  void PackFrom(const ::google::protobuf::Message& message,
                const TProtoStringType& type_url_prefix);
  bool UnpackTo(::google::protobuf::Message* message) const;
  template<typename T> bool Is() const {
    return _any_metadata_.Is<T>();
  }

  void Swap(Any* other);

  // implements Message ----------------------------------------------

  inline Any* New() const { return New(NULL); }

  Any* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Any& from);
  void MergeFrom(const Any& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Any* other);
  void UnsafeMergeFrom(const Any& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string type_url = 1;
  void clear_type_url();
  static const int kTypeUrlFieldNumber = 1;
  const TProtoStringType& type_url() const;
  void set_type_url(const TProtoStringType& value);
  void set_type_url(const char* value);
  void set_type_url(const char* value, size_t size);
  TProtoStringType* mutable_type_url();
  TProtoStringType* release_type_url();
  void set_allocated_type_url(TProtoStringType* type_url);

  // optional bytes value = 2;
  void clear_value();
  static const int kValueFieldNumber = 2;
  const TProtoStringType& value() const;
  void set_value(const TProtoStringType& value);
  void set_value(const char* value);
  void set_value(const void* value, size_t size);
  TProtoStringType* mutable_value();
  TProtoStringType* release_value();
  void set_allocated_value(TProtoStringType* value);

  // @@protoc_insertion_point(class_scope:google.protobuf.Any)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr type_url_;
  ::google::protobuf::internal::ArenaStringPtr value_;
  mutable int _cached_size_;
  ::google::protobuf::internal::AnyMetadata _any_metadata_;
  friend void LIBPROTOBUF_EXPORT protobuf_InitDefaults_google_2fprotobuf_2fany_2eproto_impl();
  friend void LIBPROTOBUF_EXPORT protobuf_AddDesc_google_2fprotobuf_2fany_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fprotobuf_2fany_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2fany_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Any> Any_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Any

// optional string type_url = 1;
inline void Any::clear_type_url() {
  type_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const TProtoStringType& Any::type_url() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.type_url)
  return type_url_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Any::set_type_url(const TProtoStringType& value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.type_url)
}
inline void Any::set_type_url(const char* value) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), TProtoStringType(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.type_url)
}
inline void Any::set_type_url(const char* value, size_t size) {
  
  type_url_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      TProtoStringType(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.type_url)
}
inline TProtoStringType* Any::mutable_type_url() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.type_url)
  return type_url_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline TProtoStringType* Any::release_type_url() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.type_url)
  
  return type_url_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Any::set_allocated_type_url(TProtoStringType* type_url) {
  if (type_url != NULL) {
    
  } else {
    
  }
  type_url_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), type_url);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.type_url)
}

// optional bytes value = 2;
inline void Any::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const TProtoStringType& Any::value() const {
  // @@protoc_insertion_point(field_get:google.protobuf.Any.value)
  return value_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Any::set_value(const TProtoStringType& value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:google.protobuf.Any.value)
}
inline void Any::set_value(const char* value) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), TProtoStringType(value));
  // @@protoc_insertion_point(field_set_char:google.protobuf.Any.value)
}
inline void Any::set_value(const void* value, size_t size) {
  
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      TProtoStringType(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:google.protobuf.Any.value)
}
inline TProtoStringType* Any::mutable_value() {
  
  // @@protoc_insertion_point(field_mutable:google.protobuf.Any.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline TProtoStringType* Any::release_value() {
  // @@protoc_insertion_point(field_release:google.protobuf.Any.value)
  
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Any::set_allocated_value(TProtoStringType* value) {
  if (value != NULL) {
    
  } else {
    
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:google.protobuf.Any.value)
}

inline const Any* Any::internal_default_instance() {
  return &Any_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2fany_2eproto__INCLUDED
