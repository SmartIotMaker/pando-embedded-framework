/*******************************************************
 * File name: pando_net_http.h
 * Author:Chongguang Li
 * Versions:0.0.1
 * Description: the http api
 * History:
 *   1.Date:
 *     Author:
 *     Modification:
 *********************************************************/

#ifndef _PANDO_NET_HTTP_H_
#define _PANDO_NET_HTTP_H_

#include "pando_types.h"

//define the http results enum.
typedef enum _HTTP_RET
{
    HTTP_OK = 4001,
    
    HTTP_URL_ERR,
    
    HTTP_SSL_CTX_ERR,
    HTTP_SSL_NEW_ERR,
    HTTP_SSL_FD_ERR,
    HTTP_SSL_CONNECT_ERR,
    HTTP_SSL_SHUTDOWN_ERR,

    HTTP_HOST_ERR,
    HTTP_SOCKET_ERR,
    HTTP_CONNECT_ERR,

    HTTP_RECV_NO_DATA,
    HTTP_RECV_ERR,
    HTTP_RECV_HTTP_ERR
}HTTP_RET;

typedef void (* net_http_callback)(int8_t errno, char* response);

/******************************************************************************
 * FunctionName : net_http_post
 * Description  : the http post api.
 * Parameters   : url: the url.
 *                data: the post data.
 *                http_cb: the specify function called after post successfully.
 * Returns      : none
*******************************************************************************/
void net_http_post(const char* url, const char* data, net_http_callback http_cb);

/******************************************************************************
 * FunctionName : net_http_get
 * Description  : the http get api.
 * Parameters   : url: the url.
 *                http_cb: the specify function called after post successfully.
 * Returns      : none
*******************************************************************************/
void net_http_get(const char* url, net_http_callback http_cb);

#endif /* _PANDO_NET_HTTP_H_ */
