// Request and Response Header consts.h
//
// OPCUA Binary Protocol Analyzer
//
// Author:   Kent Kvarfordt
// Contact:  kent.kvarfordt@inl.gov
//
// Copyright (c) 2022 Battelle Energy Alliance, LLC.  All rights reserved.

#ifndef OPCUA_BINARY_REQ_RES_HEADER_CONSTS_H
#define OPCUA_BINARY_REQ_RES_HEADER_CONSTS_H

// Request Header
#define REQ_HDR_NODE_ID_TYPE_IDX      34
#define REQ_HDR_NODE_ID_NAMESPACE_IDX 35
#define REQ_HDR_NODE_ID_NUMERIC_IDX   36
#define REQ_HDR_NODE_ID_STRING_IDX    37
#define REQ_HDR_NODE_ID_GUID_IDX      38
#define REQ_HDR_NODE_ID_OPAQUE_IDX    39 // String
#define REQ_HDR_TIMESTAMP_IDX         40 // Time
#define REQ_HDR_HANDLE_IDX            41 // Count
#define REQ_HDR_RET_DIAG_IDX          42
#define REQ_HDR_AUDIT_ENTRY_IDX       43
#define REQ_HDR_TIMEOUT_HINT_IDX      44
#define REQ_HDR_ADD_HDR_TYPE_ID_IDX   45
#define REQ_HDR_ADD_HDR_ENC_MASK_IDX  46

// Response Header
#define RES_HDR_TIMESTAMP_IDX               47
#define RES_HDR_HANDLE_IDX                  48
#define RES_HDR_STATUS_CODE_LINK_ID_SRC_IDX 49
#define RES_HDR_SERVICE_DIAG_ENCODING_IDX   50
#define RES_HDR_ADD_HDR_TYPE_ID_IDX         51
#define RES_HDR_ADD_HDR_ENC_MASK_IDX        52

#endif

