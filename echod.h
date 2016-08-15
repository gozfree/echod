/*****************************************************************************
 * Copyright (C) 2014-2015
 * file:    echod.h
 * author:  gozfree <gozfree@163.com>
 * created: 2015-07-22 01:11
 * updated: 2015-07-22 01:11
 *****************************************************************************/
#ifndef _ECHO_H_
#define _ECHO_H_

#include <liblightlib.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef struct echod {
    int listen_fd;
    struct gevent_base *evbase;
    dict *dict_uuid2fd;
    dict *dict_fd2rpc;
    struct workq *wq;

} echod_t;

#ifdef __cplusplus
}
#endif
#endif
