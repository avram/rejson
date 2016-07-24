#ifndef __OBJECT_TYPE_H__
#define __OBJECT_TYPE_H__

#include "redismodule.h"
#include "object.h"

/* Custom Redis data type API. */
void *ObjectTypeRdbLoad(RedisModuleIO *rdb);
void ObjectTypeRdbSave(RedisModuleIO *rdb, void *value);
void ObjectTypeDigest(RedisModuleDigest *digest, void *value);
void ObjectTypeFree(void *value);

/* Replies with a RESP representation of the node. */
void ObjectTypeToRespReply(RedisModuleCtx *ctx, Node *node);

#endif