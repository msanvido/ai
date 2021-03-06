// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_import.proto

#ifndef PROTOBUF_google_2fprotobuf_2funittest_5fimport_2eproto__INCLUDED
#define PROTOBUF_google_2fprotobuf_2funittest_5fimport_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

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

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/unittest_import_public.pb.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_unittest_import {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
void protobuf_InitDefaults_google_2fprotobuf_2funittest_5fimport_2eproto();
void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto();

class ImportMessage;

enum ImportEnum {
  IMPORT_FOO = 7,
  IMPORT_BAR = 8,
  IMPORT_BAZ = 9
};
bool ImportEnum_IsValid(int value);
const ImportEnum ImportEnum_MIN = IMPORT_FOO;
const ImportEnum ImportEnum_MAX = IMPORT_BAZ;
const int ImportEnum_ARRAYSIZE = ImportEnum_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImportEnum_descriptor();
inline const ::std::string& ImportEnum_Name(ImportEnum value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImportEnum_descriptor(), value);
}
inline bool ImportEnum_Parse(
    const ::std::string& name, ImportEnum* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImportEnum>(
    ImportEnum_descriptor(), name, value);
}
enum ImportEnumForMap {
  UNKNOWN = 0,
  FOO = 1,
  BAR = 2
};
bool ImportEnumForMap_IsValid(int value);
const ImportEnumForMap ImportEnumForMap_MIN = UNKNOWN;
const ImportEnumForMap ImportEnumForMap_MAX = BAR;
const int ImportEnumForMap_ARRAYSIZE = ImportEnumForMap_MAX + 1;

const ::google::protobuf::EnumDescriptor* ImportEnumForMap_descriptor();
inline const ::std::string& ImportEnumForMap_Name(ImportEnumForMap value) {
  return ::google::protobuf::internal::NameOfEnum(
    ImportEnumForMap_descriptor(), value);
}
inline bool ImportEnumForMap_Parse(
    const ::std::string& name, ImportEnumForMap* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ImportEnumForMap>(
    ImportEnumForMap_descriptor(), name, value);
}
// ===================================================================

class ImportMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest_import.ImportMessage) */ {
 public:
  ImportMessage();
  virtual ~ImportMessage();

  ImportMessage(const ImportMessage& from);

  inline ImportMessage& operator=(const ImportMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  inline ::google::protobuf::Arena* GetArena() const { return GetArenaNoVirtual(); }
  inline void* GetMaybeArenaPointer() const {
    return MaybeArenaPtr();
  }
  static const ::google::protobuf::Descriptor* descriptor();
  static const ImportMessage& default_instance();

  static const ImportMessage* internal_default_instance();

  void UnsafeArenaSwap(ImportMessage* other);
  void Swap(ImportMessage* other);

  // implements Message ----------------------------------------------

  inline ImportMessage* New() const { return New(NULL); }

  ImportMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ImportMessage& from);
  void MergeFrom(const ImportMessage& from);
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
  void InternalSwap(ImportMessage* other);
  void UnsafeMergeFrom(const ImportMessage& from);
  protected:
  explicit ImportMessage(::google::protobuf::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::google::protobuf::Arena* arena);
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

  // optional int32 d = 1;
  bool has_d() const;
  void clear_d();
  static const int kDFieldNumber = 1;
  ::google::protobuf::int32 d() const;
  void set_d(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:protobuf_unittest_import.ImportMessage)
 private:
  inline void set_has_d();
  inline void clear_has_d();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  friend class ::google::protobuf::Arena;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int32 d_;
  friend void  protobuf_InitDefaults_google_2fprotobuf_2funittest_5fimport_2eproto_impl();
  friend void  protobuf_AddDesc_google_2fprotobuf_2funittest_5fimport_2eproto_impl();
  friend void protobuf_AssignDesc_google_2fprotobuf_2funittest_5fimport_2eproto();
  friend void protobuf_ShutdownFile_google_2fprotobuf_2funittest_5fimport_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ImportMessage> ImportMessage_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ImportMessage

// optional int32 d = 1;
inline bool ImportMessage::has_d() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ImportMessage::set_has_d() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ImportMessage::clear_has_d() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ImportMessage::clear_d() {
  d_ = 0;
  clear_has_d();
}
inline ::google::protobuf::int32 ImportMessage::d() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest_import.ImportMessage.d)
  return d_;
}
inline void ImportMessage::set_d(::google::protobuf::int32 value) {
  set_has_d();
  d_ = value;
  // @@protoc_insertion_point(field_set:protobuf_unittest_import.ImportMessage.d)
}

inline const ImportMessage* ImportMessage::internal_default_instance() {
  return &ImportMessage_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_unittest_import

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protobuf_unittest_import::ImportEnum> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest_import::ImportEnum>() {
  return ::protobuf_unittest_import::ImportEnum_descriptor();
}
template <> struct is_proto_enum< ::protobuf_unittest_import::ImportEnumForMap> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest_import::ImportEnumForMap>() {
  return ::protobuf_unittest_import::ImportEnumForMap_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_google_2fprotobuf_2funittest_5fimport_2eproto__INCLUDED
