/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: storage.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "storage.pb-c.h"
void   storage__init
                     (Storage         *message)
{
  static Storage init_value = STORAGE__INIT;
  *message = init_value;
}
size_t storage__get_packed_size
                     (const Storage *message)
{
  assert(message->base.descriptor == &storage__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t storage__pack
                     (const Storage *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &storage__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t storage__pack_to_buffer
                     (const Storage *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &storage__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
Storage *
       storage__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (Storage *)
     protobuf_c_message_unpack (&storage__descriptor,
                                allocator, len, data);
}
void   storage__free_unpacked
                     (Storage *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &storage__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor storage__field_descriptors[10] =
{
  {
    "version",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(Storage, version),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "node",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(Storage, node),
    &hdnode_type__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mnemonic",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storage, mnemonic),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "passphrase_protection",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Storage, has_passphrase_protection),
    offsetof(Storage, passphrase_protection),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pin_failed_attempts",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(Storage, has_pin_failed_attempts),
    offsetof(Storage, pin_failed_attempts),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pin",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storage, pin),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "language",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storage, language),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "label",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(Storage, label),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "imported",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(Storage, has_imported),
    offsetof(Storage, imported),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "homescreen",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(Storage, has_homescreen),
    offsetof(Storage, homescreen),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned storage__field_indices_by_name[] = {
  9,   /* field[9] = homescreen */
  8,   /* field[8] = imported */
  7,   /* field[7] = label */
  6,   /* field[6] = language */
  2,   /* field[2] = mnemonic */
  1,   /* field[1] = node */
  3,   /* field[3] = passphrase_protection */
  5,   /* field[5] = pin */
  4,   /* field[4] = pin_failed_attempts */
  0,   /* field[0] = version */
};
static const ProtobufCIntRange storage__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor storage__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "Storage",
  "Storage",
  "Storage",
  "",
  sizeof(Storage),
  10,
  storage__field_descriptors,
  storage__field_indices_by_name,
  1,  storage__number_ranges,
  (ProtobufCMessageInit) storage__init,
  NULL,NULL,NULL    /* reserved[123] */
};