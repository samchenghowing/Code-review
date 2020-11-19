

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for AcrobatAccess.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "AcrobatAccess_h.h"

#define TYPE_FORMAT_STRING_SIZE   1309                              
#define PROC_FORMAT_STRING_SIZE   1849                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _AcrobatAccess_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } AcrobatAccess_MIDL_TYPE_FORMAT_STRING;

typedef struct _AcrobatAccess_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } AcrobatAccess_MIDL_PROC_FORMAT_STRING;

typedef struct _AcrobatAccess_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } AcrobatAccess_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const AcrobatAccess_MIDL_TYPE_FORMAT_STRING AcrobatAccess__MIDL_TypeFormatString;
extern const AcrobatAccess_MIDL_PROC_FORMAT_STRING AcrobatAccess__MIDL_ProcFormatString;
extern const AcrobatAccess_MIDL_EXPR_FORMAT_STRING AcrobatAccess__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccID_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccID_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO ISelectText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO ISelectText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomNodeExt_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomNodeExt_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomElement_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomElement_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomWord_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomWord_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomDocument_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IGetPDDomNode_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IGetPDDomNode_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomGroupInfo_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomGroupInfo_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomGlobalOptions_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomGlobalOptions_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IPDDomDocPagination_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPDDomDocPagination_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const AcrobatAccess_MIDL_PROC_FORMAT_STRING AcrobatAccess__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure GetState */


	/* Procedure get_accID */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x24 ),	/* 36 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pState */


	/* Parameter pID */

/* 24 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectText */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x3 ),	/* 3 */
/* 44 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 46 */	NdrFcShort( 0x20 ),	/* 32 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 52 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startID */

/* 60 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startCharIndex */

/* 66 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stopID */

/* 72 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stopCharIndex */

/* 78 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 80 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 82 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 84 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 86 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 88 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetParent */

/* 90 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 92 */	NdrFcLong( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x7 ),	/* 7 */
/* 98 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */
/* 102 */	NdrFcShort( 0x8 ),	/* 8 */
/* 104 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 106 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDispParent */

/* 114 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 116 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 118 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 120 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 122 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 124 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetType */

/* 126 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 128 */	NdrFcLong( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 136 */	NdrFcShort( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0x24 ),	/* 36 */
/* 140 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 142 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */
/* 146 */	NdrFcShort( 0x0 ),	/* 0 */
/* 148 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pNodeType */

/* 150 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 152 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 154 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 156 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 158 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 160 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChildCount */

/* 162 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	NdrFcShort( 0x9 ),	/* 9 */
/* 170 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */
/* 174 */	NdrFcShort( 0x24 ),	/* 36 */
/* 176 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 178 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pCountChildren */

/* 186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 188 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetChild */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0xa ),	/* 10 */
/* 206 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 208 */	NdrFcShort( 0x8 ),	/* 8 */
/* 210 */	NdrFcShort( 0x8 ),	/* 8 */
/* 212 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 214 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 222 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDispChild */

/* 228 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 234 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 236 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 238 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetName */

/* 240 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 242 */	NdrFcLong( 0x0 ),	/* 0 */
/* 246 */	NdrFcShort( 0xb ),	/* 11 */
/* 248 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 250 */	NdrFcShort( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x8 ),	/* 8 */
/* 254 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 256 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 258 */	NdrFcShort( 0x1 ),	/* 1 */
/* 260 */	NdrFcShort( 0x0 ),	/* 0 */
/* 262 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszName */

/* 264 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 266 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 268 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 272 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetValue */

/* 276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcShort( 0xc ),	/* 12 */
/* 284 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 288 */	NdrFcShort( 0x8 ),	/* 8 */
/* 290 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 292 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 294 */	NdrFcShort( 0x1 ),	/* 1 */
/* 296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszName */

/* 300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 304 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure IsSame */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0xd ),	/* 13 */
/* 320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 328 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter node */

/* 336 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter isSame */

/* 342 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 348 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextContent */

/* 354 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 356 */	NdrFcLong( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0xe ),	/* 14 */
/* 362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 368 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 370 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 372 */	NdrFcShort( 0x1 ),	/* 1 */
/* 374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 376 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszText */

/* 378 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 380 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 382 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 384 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 386 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetLocation */

/* 390 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0xf ),	/* 15 */
/* 398 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 400 */	NdrFcShort( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x78 ),	/* 120 */
/* 404 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 406 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 410 */	NdrFcShort( 0x0 ),	/* 0 */
/* 412 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pxLeft */

/* 414 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 416 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 418 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyTop */

/* 420 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 422 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 424 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcxWidth */

/* 426 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 428 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 430 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcyHeight */

/* 432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 434 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 440 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFontInfo */

/* 444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 450 */	NdrFcShort( 0x10 ),	/* 16 */
/* 452 */	NdrFcShort( 0x24 ),	/* x86 Stack size/offset = 36 */
/* 454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0xb0 ),	/* 176 */
/* 458 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x8,		/* 8 */
/* 460 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 462 */	NdrFcShort( 0x1 ),	/* 1 */
/* 464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fontStatus */

/* 468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pszName */

/* 474 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 478 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter fontSize */

/* 480 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 482 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 484 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter fontFlags */

/* 486 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 488 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 490 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter red */

/* 492 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 494 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 496 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter green */

/* 498 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 500 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 502 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Parameter blue */

/* 504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 506 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 508 */	0xa,		/* FC_FLOAT */
			0x0,		/* 0 */

	/* Return value */

/* 510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 512 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFromID */

/* 516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 522 */	NdrFcShort( 0x11 ),	/* 17 */
/* 524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 530 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 532 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x1 ),	/* 1 */
/* 538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter id */

/* 540 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 544 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter ppDispNode */

/* 546 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 550 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIAccessible */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x12 ),	/* 18 */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	NdrFcShort( 0x0 ),	/* 0 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 574 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppDispIAccessible */

/* 582 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 586 */	NdrFcShort( 0x60 ),	/* Type Offset=96 */

	/* Return value */

/* 588 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ScrollTo */

/* 594 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 600 */	NdrFcShort( 0x13 ),	/* 19 */
/* 602 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x8 ),	/* 8 */
/* 608 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 610 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 612 */	NdrFcShort( 0x0 ),	/* 0 */
/* 614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 616 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 618 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 620 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 622 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextInLines */

/* 624 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 626 */	NdrFcLong( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x14 ),	/* 20 */
/* 632 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 634 */	NdrFcShort( 0x8 ),	/* 8 */
/* 636 */	NdrFcShort( 0x8 ),	/* 8 */
/* 638 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 640 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter visibleOnly */

/* 648 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 650 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 652 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppDisp */

/* 654 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 656 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 658 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 660 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 662 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 664 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Navigate */

/* 666 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	NdrFcShort( 0x4 ),	/* 4 */
/* 674 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 676 */	NdrFcShort( 0x8 ),	/* 8 */
/* 678 */	NdrFcShort( 0x8 ),	/* 8 */
/* 680 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 682 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 684 */	NdrFcShort( 0x0 ),	/* 0 */
/* 686 */	NdrFcShort( 0x0 ),	/* 0 */
/* 688 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter navDir */

/* 690 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 692 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppEnd */

/* 696 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 698 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 700 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 702 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 704 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 706 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetFocus */

/* 708 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcShort( 0x5 ),	/* 5 */
/* 716 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 720 */	NdrFcShort( 0x8 ),	/* 8 */
/* 722 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 724 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 726 */	NdrFcShort( 0x0 ),	/* 0 */
/* 728 */	NdrFcShort( 0x0 ),	/* 0 */
/* 730 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 734 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetIndex */

/* 738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 744 */	NdrFcShort( 0x6 ),	/* 6 */
/* 746 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 752 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 754 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 756 */	NdrFcShort( 0x0 ),	/* 0 */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pIndex */

/* 762 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 768 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetPageNum */

/* 774 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 776 */	NdrFcLong( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x7 ),	/* 7 */
/* 782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x40 ),	/* 64 */
/* 788 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 790 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x0 ),	/* 0 */
/* 796 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter firstPage */

/* 798 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 800 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 802 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lastPage */

/* 804 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 808 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DoDefaultAction */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 824 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 832 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */

/* 840 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ScrollToEx */

/* 846 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 848 */	NdrFcLong( 0x0 ),	/* 0 */
/* 852 */	NdrFcShort( 0x9 ),	/* 9 */
/* 854 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 856 */	NdrFcShort( 0x10 ),	/* 16 */
/* 858 */	NdrFcShort( 0x8 ),	/* 8 */
/* 860 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 862 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 864 */	NdrFcShort( 0x0 ),	/* 0 */
/* 866 */	NdrFcShort( 0x0 ),	/* 0 */
/* 868 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter favorLeft */

/* 870 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 872 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 874 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter favorTop */

/* 876 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 878 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Relationship */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0xa ),	/* 10 */
/* 896 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 902 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 904 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 906 */	NdrFcShort( 0x0 ),	/* 0 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter node */

/* 912 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	NdrFcShort( 0xa ),	/* Type Offset=10 */

	/* Parameter pRel */

/* 918 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTagName */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0x15 ),	/* 21 */
/* 938 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 940 */	NdrFcShort( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 946 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 948 */	NdrFcShort( 0x1 ),	/* 1 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszTagName */

/* 954 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 956 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 958 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 960 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 962 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetStdName */

/* 966 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 968 */	NdrFcLong( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x16 ),	/* 22 */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	NdrFcShort( 0x0 ),	/* 0 */
/* 978 */	NdrFcShort( 0x8 ),	/* 8 */
/* 980 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 982 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 984 */	NdrFcShort( 0x1 ),	/* 1 */
/* 986 */	NdrFcShort( 0x0 ),	/* 0 */
/* 988 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszStdName */

/* 990 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 992 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 994 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 998 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetID */

/* 1002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x17 ),	/* 23 */
/* 1010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1016 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1018 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1020 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszId */

/* 1026 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1030 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetAttribute */

/* 1038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1044 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1046 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1048 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1052 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 1054 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1056 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1058 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pszAttr */

/* 1062 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1066 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pszOwner */

/* 1068 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1072 */	NdrFcShort( 0x56 ),	/* Type Offset=86 */

	/* Parameter pszAttrVal */

/* 1074 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1076 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1078 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1080 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1082 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LastWordOfLine */

/* 1086 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1088 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1092 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1094 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1096 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1100 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1102 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1104 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isLast */

/* 1110 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1114 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1116 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1118 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1120 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetFocusNode */

/* 1122 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1124 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1128 */	NdrFcShort( 0x19 ),	/* 25 */
/* 1130 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1136 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1138 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter node */

/* 1146 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1148 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1150 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1154 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure NextFocusNode */

/* 1158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0x1a ),	/* 26 */
/* 1166 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1168 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1172 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1174 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1180 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter forward */

/* 1182 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1184 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter node */

/* 1188 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1190 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1192 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1194 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1196 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetDocInfo */

/* 1200 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1202 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1206 */	NdrFcShort( 0x1b ),	/* 27 */
/* 1208 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1210 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1214 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 1216 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1218 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1222 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter fileName */

/* 1224 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1226 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1228 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Parameter nPages */

/* 1230 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1232 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1234 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter firstVisiblePage */

/* 1236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1238 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lastVisiblePage */

/* 1242 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1244 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter status */

/* 1248 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1250 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1252 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lang */

/* 1254 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1260 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1262 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1264 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SelectText */

/* 1266 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1268 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1272 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1274 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1276 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1278 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1280 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1282 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1284 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startID */

/* 1290 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1292 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1294 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Parameter startCharIndex */

/* 1296 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1298 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter stopID */

/* 1302 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1304 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1306 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Parameter stopCharIndex */

/* 1308 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1316 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTextSelection */

/* 1320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1326 */	NdrFcShort( 0x1d ),	/* 29 */
/* 1328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1332 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1334 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1336 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1338 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pSelection */

/* 1344 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1348 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSelectionBounds */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x1e ),	/* 30 */
/* 1364 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1366 */	NdrFcShort( 0x1c ),	/* 28 */
/* 1368 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1370 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1372 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pStart */

/* 1380 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1384 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Parameter startIndex */

/* 1386 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1390 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pStop */

/* 1392 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1396 */	NdrFcShort( 0x88 ),	/* Type Offset=136 */

	/* Parameter stopIndex */

/* 1398 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1400 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1402 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1404 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1406 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1408 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetCaret */

/* 1410 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1412 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1416 */	NdrFcShort( 0x1f ),	/* 31 */
/* 1418 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1420 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1422 */	NdrFcShort( 0x94 ),	/* 148 */
/* 1424 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x7,		/* 7 */
/* 1426 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1430 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pxLeft */

/* 1434 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1436 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pyTop */

/* 1440 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1442 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcxWidth */

/* 1446 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1448 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcyHeight */

/* 1452 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1454 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter node */

/* 1458 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1460 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1462 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Parameter index */

/* 1464 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1466 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1468 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1470 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1472 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetCaret */

/* 1476 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1478 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1482 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1484 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1486 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1488 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1490 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1492 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1494 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter node */

/* 1500 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 1502 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1504 */	NdrFcShort( 0x76 ),	/* Type Offset=118 */

	/* Parameter index */

/* 1506 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1508 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1510 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1512 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1514 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoToPage */

/* 1518 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1520 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1524 */	NdrFcShort( 0x21 ),	/* 33 */
/* 1526 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1530 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1532 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1534 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1538 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pageNum */

/* 1542 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1544 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1546 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1548 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1550 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1552 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_PDDomNode */

/* 1554 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1556 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1560 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1562 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1568 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1570 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1574 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1576 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter varID */

/* 1578 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1580 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1582 */	NdrFcShort( 0x500 ),	/* Type Offset=1280 */

	/* Parameter ppDispDoc */

/* 1584 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1586 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1588 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 1590 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1592 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetGroupPosition */

/* 1596 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1598 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1602 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1604 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1608 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1610 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1612 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1614 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1618 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter groupSize */

/* 1620 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1622 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter position */

/* 1626 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1628 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1632 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1634 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetOption */

/* 1638 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1640 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1644 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1646 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1648 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1650 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1652 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1654 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1656 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1658 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1660 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter optId */

/* 1662 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1664 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1666 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter value */

/* 1668 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1670 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1672 */	NdrFcShort( 0x512 ),	/* Type Offset=1298 */

	/* Return value */

/* 1674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1676 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetOption */

/* 1680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1686 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1688 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1690 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1694 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1696 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1700 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter optId */

/* 1704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1708 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter value */

/* 1710 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1714 */	NdrFcShort( 0x500 ),	/* Type Offset=1280 */

	/* Return value */

/* 1716 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1718 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInfo */

/* 1722 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1724 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1728 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1730 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x5c ),	/* 92 */
/* 1736 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1738 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1742 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1744 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter numPages */

/* 1746 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1748 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter firstVisiblePage */

/* 1752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter lastVisiblePage */

/* 1758 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1764 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1766 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1768 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure LabelForPageNum */

/* 1770 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1772 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1776 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1778 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1780 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1782 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1784 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1786 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1788 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1792 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pageNum */

/* 1794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1796 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pageLabel */

/* 1800 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1802 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1804 */	NdrFcShort( 0x44 ),	/* Type Offset=68 */

	/* Return value */

/* 1806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1808 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GoToPage */

/* 1812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1818 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1820 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1822 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1826 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1828 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pageNum */

/* 1836 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1838 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1840 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1842 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1844 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const AcrobatAccess_MIDL_TYPE_FORMAT_STRING AcrobatAccess__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/*  4 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/*  6 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  8 */	NdrFcShort( 0x2 ),	/* Offset= 2 (10) */
/* 10 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 12 */	NdrFcLong( 0x5007373a ),	/* 1342650170 */
/* 16 */	NdrFcShort( 0x20d7 ),	/* 8407 */
/* 18 */	NdrFcShort( 0x458f ),	/* 17807 */
/* 20 */	0x9f,		/* 159 */
			0xfb,		/* 251 */
/* 22 */	0xab,		/* 171 */
			0xc9,		/* 201 */
/* 24 */	0x0,		/* 0 */
			0xe3,		/* 227 */
/* 26 */	0xa8,		/* 168 */
			0x31,		/* 49 */
/* 28 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 30 */	NdrFcShort( 0x26 ),	/* Offset= 38 (68) */
/* 32 */	
			0x13, 0x0,	/* FC_OP */
/* 34 */	NdrFcShort( 0x18 ),	/* Offset= 24 (58) */
/* 36 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 38 */	NdrFcShort( 0x2 ),	/* 2 */
/* 40 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 42 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 44 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 46 */	0x0 , 
			0x0,		/* 0 */
/* 48 */	NdrFcLong( 0x0 ),	/* 0 */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 58 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (36) */
/* 64 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 66 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 68 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x4 ),	/* 4 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */
/* 76 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (32) */
/* 78 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 80 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 82 */	
			0x12, 0x0,	/* FC_UP */
/* 84 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (58) */
/* 86 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 88 */	NdrFcShort( 0x0 ),	/* 0 */
/* 90 */	NdrFcShort( 0x4 ),	/* 4 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (82) */
/* 96 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 98 */	NdrFcShort( 0x2 ),	/* Offset= 2 (100) */
/* 100 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 102 */	NdrFcLong( 0x618736e0 ),	/* 1636251360 */
/* 106 */	NdrFcShort( 0x3c3d ),	/* 15421 */
/* 108 */	NdrFcShort( 0x11cf ),	/* 4559 */
/* 110 */	0x81,		/* 129 */
			0xc,		/* 12 */
/* 112 */	0x0,		/* 0 */
			0xaa,		/* 170 */
/* 114 */	0x0,		/* 0 */
			0x38,		/* 56 */
/* 116 */	0x9b,		/* 155 */
			0x71,		/* 113 */
/* 118 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 120 */	NdrFcLong( 0x3c2aea5 ),	/* 63090341 */
/* 124 */	NdrFcShort( 0xbefa ),	/* -16646 */
/* 126 */	NdrFcShort( 0x4c84 ),	/* 19588 */
/* 128 */	0xa1,		/* 161 */
			0x87,		/* 135 */
/* 130 */	0xc9,		/* 201 */
			0x24,		/* 36 */
/* 132 */	0x5a,		/* 90 */
			0xc7,		/* 199 */
/* 134 */	0x84,		/* 132 */
			0xf6,		/* 246 */
/* 136 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 138 */	NdrFcShort( 0xffec ),	/* Offset= -20 (118) */
/* 140 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 142 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x12, 0x0,	/* FC_UP */
/* 146 */	NdrFcShort( 0x45a ),	/* Offset= 1114 (1260) */
/* 148 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 150 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 152 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 154 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 156 */	0x0 , 
			0x0,		/* 0 */
/* 158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 162 */	NdrFcLong( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x2 ),	/* Offset= 2 (168) */
/* 168 */	NdrFcShort( 0x10 ),	/* 16 */
/* 170 */	NdrFcShort( 0x2f ),	/* 47 */
/* 172 */	NdrFcLong( 0x14 ),	/* 20 */
/* 176 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 178 */	NdrFcLong( 0x3 ),	/* 3 */
/* 182 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 184 */	NdrFcLong( 0x11 ),	/* 17 */
/* 188 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 190 */	NdrFcLong( 0x2 ),	/* 2 */
/* 194 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 196 */	NdrFcLong( 0x4 ),	/* 4 */
/* 200 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 202 */	NdrFcLong( 0x5 ),	/* 5 */
/* 206 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 208 */	NdrFcLong( 0xb ),	/* 11 */
/* 212 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 214 */	NdrFcLong( 0xa ),	/* 10 */
/* 218 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 220 */	NdrFcLong( 0x6 ),	/* 6 */
/* 224 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (456) */
/* 226 */	NdrFcLong( 0x7 ),	/* 7 */
/* 230 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 232 */	NdrFcLong( 0x8 ),	/* 8 */
/* 236 */	NdrFcShort( 0xff66 ),	/* Offset= -154 (82) */
/* 238 */	NdrFcLong( 0xd ),	/* 13 */
/* 242 */	NdrFcShort( 0xdc ),	/* Offset= 220 (462) */
/* 244 */	NdrFcLong( 0x9 ),	/* 9 */
/* 248 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (480) */
/* 250 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 254 */	NdrFcShort( 0xf4 ),	/* Offset= 244 (498) */
/* 256 */	NdrFcLong( 0x24 ),	/* 36 */
/* 260 */	NdrFcShort( 0x39e ),	/* Offset= 926 (1186) */
/* 262 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 266 */	NdrFcShort( 0x398 ),	/* Offset= 920 (1186) */
/* 268 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 272 */	NdrFcShort( 0x396 ),	/* Offset= 918 (1190) */
/* 274 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 278 */	NdrFcShort( 0x394 ),	/* Offset= 916 (1194) */
/* 280 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 284 */	NdrFcShort( 0x392 ),	/* Offset= 914 (1198) */
/* 286 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 290 */	NdrFcShort( 0x390 ),	/* Offset= 912 (1202) */
/* 292 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 296 */	NdrFcShort( 0x38e ),	/* Offset= 910 (1206) */
/* 298 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 302 */	NdrFcShort( 0x38c ),	/* Offset= 908 (1210) */
/* 304 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 308 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1194) */
/* 310 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 314 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1198) */
/* 316 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 320 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1214) */
/* 322 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 326 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1210) */
/* 328 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 332 */	NdrFcShort( 0x376 ),	/* Offset= 886 (1218) */
/* 334 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 338 */	NdrFcShort( 0x374 ),	/* Offset= 884 (1222) */
/* 340 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 344 */	NdrFcShort( 0x372 ),	/* Offset= 882 (1226) */
/* 346 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 350 */	NdrFcShort( 0x370 ),	/* Offset= 880 (1230) */
/* 352 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 356 */	NdrFcShort( 0x36e ),	/* Offset= 878 (1234) */
/* 358 */	NdrFcLong( 0x10 ),	/* 16 */
/* 362 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 364 */	NdrFcLong( 0x12 ),	/* 18 */
/* 368 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 370 */	NdrFcLong( 0x13 ),	/* 19 */
/* 374 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 376 */	NdrFcLong( 0x15 ),	/* 21 */
/* 380 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 382 */	NdrFcLong( 0x16 ),	/* 22 */
/* 386 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 388 */	NdrFcLong( 0x17 ),	/* 23 */
/* 392 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 394 */	NdrFcLong( 0xe ),	/* 14 */
/* 398 */	NdrFcShort( 0x34c ),	/* Offset= 844 (1242) */
/* 400 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 404 */	NdrFcShort( 0x350 ),	/* Offset= 848 (1252) */
/* 406 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 410 */	NdrFcShort( 0x34e ),	/* Offset= 846 (1256) */
/* 412 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 416 */	NdrFcShort( 0x30a ),	/* Offset= 778 (1194) */
/* 418 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 422 */	NdrFcShort( 0x308 ),	/* Offset= 776 (1198) */
/* 424 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 428 */	NdrFcShort( 0x306 ),	/* Offset= 774 (1202) */
/* 430 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 434 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (1198) */
/* 436 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 440 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1198) */
/* 442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 446 */	NdrFcShort( 0x0 ),	/* Offset= 0 (446) */
/* 448 */	NdrFcLong( 0x1 ),	/* 1 */
/* 452 */	NdrFcShort( 0x0 ),	/* Offset= 0 (452) */
/* 454 */	NdrFcShort( 0xffff ),	/* Offset= -1 (453) */
/* 456 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 458 */	NdrFcShort( 0x8 ),	/* 8 */
/* 460 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 462 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 464 */	NdrFcLong( 0x0 ),	/* 0 */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 474 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 476 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 478 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 480 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 482 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 486 */	NdrFcShort( 0x0 ),	/* 0 */
/* 488 */	NdrFcShort( 0x0 ),	/* 0 */
/* 490 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 492 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 494 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 496 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 498 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 500 */	NdrFcShort( 0x2 ),	/* Offset= 2 (502) */
/* 502 */	
			0x12, 0x0,	/* FC_UP */
/* 504 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1168) */
/* 506 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 508 */	NdrFcShort( 0x18 ),	/* 24 */
/* 510 */	NdrFcShort( 0xa ),	/* 10 */
/* 512 */	NdrFcLong( 0x8 ),	/* 8 */
/* 516 */	NdrFcShort( 0x64 ),	/* Offset= 100 (616) */
/* 518 */	NdrFcLong( 0xd ),	/* 13 */
/* 522 */	NdrFcShort( 0x9c ),	/* Offset= 156 (678) */
/* 524 */	NdrFcLong( 0x9 ),	/* 9 */
/* 528 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (736) */
/* 530 */	NdrFcLong( 0xc ),	/* 12 */
/* 534 */	NdrFcShort( 0x104 ),	/* Offset= 260 (794) */
/* 536 */	NdrFcLong( 0x24 ),	/* 36 */
/* 540 */	NdrFcShort( 0x174 ),	/* Offset= 372 (912) */
/* 542 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 546 */	NdrFcShort( 0x190 ),	/* Offset= 400 (946) */
/* 548 */	NdrFcLong( 0x10 ),	/* 16 */
/* 552 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (988) */
/* 554 */	NdrFcLong( 0x2 ),	/* 2 */
/* 558 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1030) */
/* 560 */	NdrFcLong( 0x3 ),	/* 3 */
/* 564 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1072) */
/* 566 */	NdrFcLong( 0x14 ),	/* 20 */
/* 570 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1114) */
/* 572 */	NdrFcShort( 0xffff ),	/* Offset= -1 (571) */
/* 574 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 576 */	NdrFcShort( 0x4 ),	/* 4 */
/* 578 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 584 */	0x0 , 
			0x0,		/* 0 */
/* 586 */	NdrFcLong( 0x0 ),	/* 0 */
/* 590 */	NdrFcLong( 0x0 ),	/* 0 */
/* 594 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 596 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 598 */	NdrFcShort( 0x4 ),	/* 4 */
/* 600 */	NdrFcShort( 0x0 ),	/* 0 */
/* 602 */	NdrFcShort( 0x1 ),	/* 1 */
/* 604 */	NdrFcShort( 0x0 ),	/* 0 */
/* 606 */	NdrFcShort( 0x0 ),	/* 0 */
/* 608 */	0x12, 0x0,	/* FC_UP */
/* 610 */	NdrFcShort( 0xfdd8 ),	/* Offset= -552 (58) */
/* 612 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 614 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 616 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 620 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 622 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 624 */	NdrFcShort( 0x4 ),	/* 4 */
/* 626 */	NdrFcShort( 0x4 ),	/* 4 */
/* 628 */	0x11, 0x0,	/* FC_RP */
/* 630 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (574) */
/* 632 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 634 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 636 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 638 */	NdrFcShort( 0x0 ),	/* 0 */
/* 640 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 642 */	NdrFcShort( 0x0 ),	/* 0 */
/* 644 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 646 */	0x0 , 
			0x0,		/* 0 */
/* 648 */	NdrFcLong( 0x0 ),	/* 0 */
/* 652 */	NdrFcLong( 0x0 ),	/* 0 */
/* 656 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 660 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 662 */	0x0 , 
			0x0,		/* 0 */
/* 664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 668 */	NdrFcLong( 0x0 ),	/* 0 */
/* 672 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 674 */	NdrFcShort( 0xff2c ),	/* Offset= -212 (462) */
/* 676 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 678 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 680 */	NdrFcShort( 0x8 ),	/* 8 */
/* 682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 684 */	NdrFcShort( 0x6 ),	/* Offset= 6 (690) */
/* 686 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 688 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 690 */	
			0x11, 0x0,	/* FC_RP */
/* 692 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (636) */
/* 694 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 698 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 704 */	0x0 , 
			0x0,		/* 0 */
/* 706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 714 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 720 */	0x0 , 
			0x0,		/* 0 */
/* 722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 732 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (480) */
/* 734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 736 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 738 */	NdrFcShort( 0x8 ),	/* 8 */
/* 740 */	NdrFcShort( 0x0 ),	/* 0 */
/* 742 */	NdrFcShort( 0x6 ),	/* Offset= 6 (748) */
/* 744 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 746 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 748 */	
			0x11, 0x0,	/* FC_RP */
/* 750 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (694) */
/* 752 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 754 */	NdrFcShort( 0x4 ),	/* 4 */
/* 756 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 760 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 762 */	0x0 , 
			0x0,		/* 0 */
/* 764 */	NdrFcLong( 0x0 ),	/* 0 */
/* 768 */	NdrFcLong( 0x0 ),	/* 0 */
/* 772 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 774 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 776 */	NdrFcShort( 0x4 ),	/* 4 */
/* 778 */	NdrFcShort( 0x0 ),	/* 0 */
/* 780 */	NdrFcShort( 0x1 ),	/* 1 */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 786 */	0x12, 0x0,	/* FC_UP */
/* 788 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1260) */
/* 790 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 792 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 794 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 800 */	NdrFcShort( 0x6 ),	/* Offset= 6 (806) */
/* 802 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 804 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 806 */	
			0x11, 0x0,	/* FC_RP */
/* 808 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (752) */
/* 810 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 812 */	NdrFcLong( 0x2f ),	/* 47 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 822 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 824 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 826 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 828 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 830 */	NdrFcShort( 0x1 ),	/* 1 */
/* 832 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 834 */	NdrFcShort( 0x4 ),	/* 4 */
/* 836 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 838 */	0x0 , 
			0x0,		/* 0 */
/* 840 */	NdrFcLong( 0x0 ),	/* 0 */
/* 844 */	NdrFcLong( 0x0 ),	/* 0 */
/* 848 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 850 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 852 */	NdrFcShort( 0x10 ),	/* 16 */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0xa ),	/* Offset= 10 (866) */
/* 858 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 860 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 862 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (810) */
/* 864 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 866 */	
			0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 868 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (828) */
/* 870 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 872 */	NdrFcShort( 0x4 ),	/* 4 */
/* 874 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 878 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 880 */	0x0 , 
			0x0,		/* 0 */
/* 882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 886 */	NdrFcLong( 0x0 ),	/* 0 */
/* 890 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 892 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 894 */	NdrFcShort( 0x4 ),	/* 4 */
/* 896 */	NdrFcShort( 0x0 ),	/* 0 */
/* 898 */	NdrFcShort( 0x1 ),	/* 1 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	0x12, 0x0,	/* FC_UP */
/* 906 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (850) */
/* 908 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 910 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 912 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 914 */	NdrFcShort( 0x8 ),	/* 8 */
/* 916 */	NdrFcShort( 0x0 ),	/* 0 */
/* 918 */	NdrFcShort( 0x6 ),	/* Offset= 6 (924) */
/* 920 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 922 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 924 */	
			0x11, 0x0,	/* FC_RP */
/* 926 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (870) */
/* 928 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 930 */	NdrFcShort( 0x8 ),	/* 8 */
/* 932 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 934 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 936 */	NdrFcShort( 0x10 ),	/* 16 */
/* 938 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 940 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 942 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (928) */
			0x5b,		/* FC_END */
/* 946 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 948 */	NdrFcShort( 0x18 ),	/* 24 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0xa ),	/* Offset= 10 (962) */
/* 954 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 956 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 958 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (934) */
/* 960 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 962 */	
			0x11, 0x0,	/* FC_RP */
/* 964 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (636) */
/* 966 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 968 */	NdrFcShort( 0x1 ),	/* 1 */
/* 970 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 974 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 976 */	0x0 , 
			0x0,		/* 0 */
/* 978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 982 */	NdrFcLong( 0x0 ),	/* 0 */
/* 986 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 988 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 990 */	NdrFcShort( 0x8 ),	/* 8 */
/* 992 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 994 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 996 */	NdrFcShort( 0x4 ),	/* 4 */
/* 998 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1000 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1002 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (966) */
/* 1004 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1006 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1008 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1010 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1012 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1016 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1018 */	0x0 , 
			0x0,		/* 0 */
/* 1020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1024 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1028 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1030 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1036 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1038 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1040 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1042 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1044 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1008) */
/* 1046 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1048 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1050 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1052 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1054 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1058 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1060 */	0x0 , 
			0x0,		/* 0 */
/* 1062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1066 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1070 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1072 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1074 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1076 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1078 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1080 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1082 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1084 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1086 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1050) */
/* 1088 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1090 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1092 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1094 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1096 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1100 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1102 */	0x0 , 
			0x0,		/* 0 */
/* 1104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1108 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1112 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1114 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1116 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1118 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1120 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1122 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1124 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1126 */	0x12, 0x20,	/* FC_UP [maybenull_sizeis] */
/* 1128 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1092) */
/* 1130 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1132 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1134 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1136 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1138 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1140 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1142 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1146 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1148 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1150 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1152 */	0x0 , 
			0x0,		/* 0 */
/* 1154 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1158 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1162 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1164 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1134) */
/* 1166 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1168 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1170 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1172 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1142) */
/* 1174 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1174) */
/* 1176 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1178 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1180 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1182 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (506) */
/* 1184 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1186 */	
			0x12, 0x0,	/* FC_UP */
/* 1188 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (850) */
/* 1190 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1192 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1194 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1196 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1198 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1200 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1202 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1204 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1206 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1208 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1210 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1212 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1214 */	
			0x12, 0x0,	/* FC_UP */
/* 1216 */	NdrFcShort( 0xfd08 ),	/* Offset= -760 (456) */
/* 1218 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1220 */	NdrFcShort( 0xfb8e ),	/* Offset= -1138 (82) */
/* 1222 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1224 */	NdrFcShort( 0xfd06 ),	/* Offset= -762 (462) */
/* 1226 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1228 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (480) */
/* 1230 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1232 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (498) */
/* 1234 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 1236 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1238) */
/* 1238 */	
			0x12, 0x0,	/* FC_UP */
/* 1240 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1260) */
/* 1242 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1244 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1246 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1248 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1250 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1252 */	
			0x12, 0x0,	/* FC_UP */
/* 1254 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1242) */
/* 1256 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 1258 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1260 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1262 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1266 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1266) */
/* 1268 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1270 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1272 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1274 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1276 */	NdrFcShort( 0xfb98 ),	/* Offset= -1128 (148) */
/* 1278 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1280 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1282 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1284 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1286 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1288 */	NdrFcShort( 0xfb88 ),	/* Offset= -1144 (144) */
/* 1290 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1292 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1298) */
/* 1294 */	
			0x13, 0x0,	/* FC_OP */
/* 1296 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1260) */
/* 1298 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1300 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1302 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1306 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1294) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccID, ver. 0.0,
   GUID={0x81f9b44f,0xba3a,0x4f5d,{0x9b,0x51,0x09,0x0c,0x74,0xa9,0xb3,0xa4}} */

#pragma code_seg(".orpc")
static const unsigned short IAccID_FormatStringOffsetTable[] =
    {
    0
    };

static const MIDL_STUBLESS_PROXY_INFO IAccID_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IAccID_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccID_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IAccID_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IAccIDProxyVtbl = 
{
    &IAccID_ProxyInfo,
    &IID_IAccID,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccID::get_accID */
};

const CInterfaceStubVtbl _IAccIDStubVtbl =
{
    &IID_IAccID,
    &IAccID_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: ISelectText, ver. 0.0,
   GUID={0xB4848E37,0x7C66,0x40a6,{0x9F,0x66,0xD3,0xA9,0xBC,0x8F,0x46,0x36}} */

#pragma code_seg(".orpc")
static const unsigned short ISelectText_FormatStringOffsetTable[] =
    {
    36
    };

static const MIDL_STUBLESS_PROXY_INFO ISelectText_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &ISelectText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO ISelectText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &ISelectText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _ISelectTextProxyVtbl = 
{
    &ISelectText_ProxyInfo,
    &IID_ISelectText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* ISelectText::selectText */
};

const CInterfaceStubVtbl _ISelectTextStubVtbl =
{
    &IID_ISelectText,
    &ISelectText_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_AcrobatAccess_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IPDDomNode, ver. 0.0,
   GUID={0x5007373a,0x20d7,0x458f,{0x9f,0xfb,0xab,0xc9,0x00,0xe3,0xa8,0x31}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomNode_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    90,
    126,
    162,
    198,
    240,
    276,
    312,
    354,
    390,
    444,
    516,
    558,
    594,
    624
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomNode_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(21) _IPDDomNodeProxyVtbl = 
{
    &IPDDomNode_ProxyInfo,
    &IID_IPDDomNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetParent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetType */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChildCount */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChild */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetName */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetValue */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::IsSame */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextContent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFontInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFromID */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetIAccessible */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::ScrollTo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextInLines */
};


static const PRPC_STUB_FUNCTION IPDDomNode_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPDDomNodeStubVtbl =
{
    &IID_IPDDomNode,
    &IPDDomNode_ServerInfo,
    21,
    &IPDDomNode_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPDDomNodeExt, ver. 0.0,
   GUID={0x4A894040,0x247E,0x4aff,{0xBB,0x08,0x34,0x89,0xE9,0x90,0x52,0x35}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomNodeExt_FormatStringOffsetTable[] =
    {
    0,
    666,
    708,
    738,
    774,
    816,
    846,
    888
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomNodeExt_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomNodeExt_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomNodeExt_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomNodeExt_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IPDDomNodeExtProxyVtbl = 
{
    &IPDDomNodeExt_ProxyInfo,
    &IID_IPDDomNodeExt,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::GetState */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::Navigate */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::SetFocus */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::GetIndex */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::GetPageNum */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::DoDefaultAction */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::ScrollToEx */ ,
    (void *) (INT_PTR) -1 /* IPDDomNodeExt::Relationship */
};

const CInterfaceStubVtbl _IPDDomNodeExtStubVtbl =
{
    &IID_IPDDomNodeExt,
    &IPDDomNodeExt_ServerInfo,
    11,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPDDomElement, ver. 0.0,
   GUID={0x198f17ae,0xb921,0x4308,{0x95,0x43,0x28,0x8d,0x42,0x6a,0x5c,0x2b}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomElement_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    90,
    126,
    162,
    198,
    240,
    276,
    312,
    354,
    390,
    444,
    516,
    558,
    594,
    624,
    930,
    966,
    1002,
    1038
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomElement_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomElement_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomElement_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomElement_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IPDDomElementProxyVtbl = 
{
    &IPDDomElement_ProxyInfo,
    &IID_IPDDomElement,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetParent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetType */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChildCount */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChild */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetName */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetValue */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::IsSame */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextContent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFontInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFromID */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetIAccessible */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::ScrollTo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextInLines */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetTagName */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetStdName */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetID */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetAttribute */
};


static const PRPC_STUB_FUNCTION IPDDomElement_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPDDomElementStubVtbl =
{
    &IID_IPDDomElement,
    &IPDDomElement_ServerInfo,
    25,
    &IPDDomElement_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPDDomWord, ver. 0.0,
   GUID={0x03c2aea5,0xbefa,0x4c84,{0xa1,0x87,0xc9,0x24,0x5a,0xc7,0x84,0xf6}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomWord_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    90,
    126,
    162,
    198,
    240,
    276,
    312,
    354,
    390,
    444,
    516,
    558,
    594,
    624,
    1086
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomWord_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomWord_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomWord_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomWord_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IPDDomWordProxyVtbl = 
{
    &IPDDomWord_ProxyInfo,
    &IID_IPDDomWord,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetParent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetType */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChildCount */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChild */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetName */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetValue */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::IsSame */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextContent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFontInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFromID */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetIAccessible */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::ScrollTo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextInLines */ ,
    (void *) (INT_PTR) -1 /* IPDDomWord::LastWordOfLine */
};


static const PRPC_STUB_FUNCTION IPDDomWord_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPDDomWordStubVtbl =
{
    &IID_IPDDomWord,
    &IPDDomWord_ServerInfo,
    22,
    &IPDDomWord_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IPDDomDocument, ver. 0.0,
   GUID={0x00FFD6C4,0x1A94,0x44bc,{0xAD,0x3E,0x8A,0xC1,0x85,0x52,0xE3,0xE6}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomDocument_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    90,
    126,
    162,
    198,
    240,
    276,
    312,
    354,
    390,
    444,
    516,
    558,
    594,
    624,
    930,
    966,
    1002,
    1038,
    1122,
    1158,
    1200,
    1266,
    1320,
    1356,
    1410,
    1476,
    1518
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomDocument_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(34) _IPDDomDocumentProxyVtbl = 
{
    &IPDDomDocument_ProxyInfo,
    &IID_IPDDomDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetParent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetType */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChildCount */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetChild */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetName */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetValue */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::IsSame */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextContent */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetLocation */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFontInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetFromID */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetIAccessible */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::ScrollTo */ ,
    (void *) (INT_PTR) -1 /* IPDDomNode::GetTextInLines */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetTagName */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetStdName */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetID */ ,
    (void *) (INT_PTR) -1 /* IPDDomElement::GetAttribute */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GetFocusNode */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::NextFocusNode */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GetDocInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::SelectText */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GetTextSelection */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GetSelectionBounds */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GetCaret */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::SetCaret */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocument::GoToPage */
};


static const PRPC_STUB_FUNCTION IPDDomDocument_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IPDDomDocumentStubVtbl =
{
    &IID_IPDDomDocument,
    &IPDDomDocument_ServerInfo,
    34,
    &IPDDomDocument_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IGetPDDomNode, ver. 0.0,
   GUID={0xf9f2fe81,0xf764,0x4bd0,{0xaf,0xa5,0x5d,0xe8,0x41,0xdd,0xb6,0x25}} */

#pragma code_seg(".orpc")
static const unsigned short IGetPDDomNode_FormatStringOffsetTable[] =
    {
    1554
    };

static const MIDL_STUBLESS_PROXY_INFO IGetPDDomNode_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IGetPDDomNode_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IGetPDDomNode_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IGetPDDomNode_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IGetPDDomNodeProxyVtbl = 
{
    &IGetPDDomNode_ProxyInfo,
    &IID_IGetPDDomNode,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IGetPDDomNode::get_PDDomNode */
};

const CInterfaceStubVtbl _IGetPDDomNodeStubVtbl =
{
    &IID_IGetPDDomNode,
    &IGetPDDomNode_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPDDomGroupInfo, ver. 0.0,
   GUID={0x35ADDC4B,0xB470,0x45f9,{0xB2,0x9C,0xB6,0x84,0x59,0x49,0xA4,0xFE}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomGroupInfo_FormatStringOffsetTable[] =
    {
    1596
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomGroupInfo_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomGroupInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomGroupInfo_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomGroupInfo_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IPDDomGroupInfoProxyVtbl = 
{
    &IPDDomGroupInfo_ProxyInfo,
    &IID_IPDDomGroupInfo,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPDDomGroupInfo::GetGroupPosition */
};

const CInterfaceStubVtbl _IPDDomGroupInfoStubVtbl =
{
    &IID_IPDDomGroupInfo,
    &IPDDomGroupInfo_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_AcrobatAccess_0000_0009, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IPDDomGlobalOptions, ver. 0.0,
   GUID={0xC37B1794,0xB61E,0x402b,{0x9C,0x7C,0xB0,0x73,0xDE,0x57,0x9A,0xC1}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomGlobalOptions_FormatStringOffsetTable[] =
    {
    1638,
    1680
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomGlobalOptions_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomGlobalOptions_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomGlobalOptions_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomGlobalOptions_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(5) _IPDDomGlobalOptionsProxyVtbl = 
{
    &IPDDomGlobalOptions_ProxyInfo,
    &IID_IPDDomGlobalOptions,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPDDomGlobalOptions::GetOption */ ,
    (void *) (INT_PTR) -1 /* IPDDomGlobalOptions::SetOption */
};

const CInterfaceStubVtbl _IPDDomGlobalOptionsStubVtbl =
{
    &IID_IPDDomGlobalOptions,
    &IPDDomGlobalOptions_ServerInfo,
    5,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPDDomDocPagination, ver. 0.0,
   GUID={0x8E6D1CB7,0x4DAE,0x4DE4,{0x8E,0xD9,0x15,0x67,0x2A,0x5F,0x94,0x2F}} */

#pragma code_seg(".orpc")
static const unsigned short IPDDomDocPagination_FormatStringOffsetTable[] =
    {
    1722,
    1770,
    1812
    };

static const MIDL_STUBLESS_PROXY_INFO IPDDomDocPagination_ProxyInfo =
    {
    &Object_StubDesc,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomDocPagination_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IPDDomDocPagination_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    AcrobatAccess__MIDL_ProcFormatString.Format,
    &IPDDomDocPagination_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IPDDomDocPaginationProxyVtbl = 
{
    &IPDDomDocPagination_ProxyInfo,
    &IID_IPDDomDocPagination,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPDDomDocPagination::GetInfo */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocPagination::LabelForPageNum */ ,
    (void *) (INT_PTR) -1 /* IPDDomDocPagination::GoToPage */
};

const CInterfaceStubVtbl _IPDDomDocPaginationStubVtbl =
{
    &IID_IPDDomDocPagination,
    &IPDDomDocPagination_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_AcrobatAccess_0000_0012, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    AcrobatAccess__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _AcrobatAccess_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_ISelectTextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomNodeExtProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomGroupInfoProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccIDProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IGetPDDomNodeProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomGlobalOptionsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomWordProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomElementProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomDocPaginationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPDDomDocumentProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _AcrobatAccess_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_ISelectTextStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomNodeExtStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomGroupInfoStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccIDStubVtbl,
    ( CInterfaceStubVtbl *) &_IGetPDDomNodeStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomGlobalOptionsStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomWordStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomElementStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomDocPaginationStubVtbl,
    ( CInterfaceStubVtbl *) &_IPDDomDocumentStubVtbl,
    0
};

PCInterfaceName const _AcrobatAccess_InterfaceNamesList[] = 
{
    "ISelectText",
    "IPDDomNode",
    "IPDDomNodeExt",
    "IPDDomGroupInfo",
    "IAccID",
    "IGetPDDomNode",
    "IPDDomGlobalOptions",
    "IPDDomWord",
    "IPDDomElement",
    "IPDDomDocPagination",
    "IPDDomDocument",
    0
};

const IID *  const _AcrobatAccess_BaseIIDList[] = 
{
    0,
    &IID_IDispatch,
    0,
    0,
    0,
    0,
    0,
    &IID_IDispatch,
    &IID_IDispatch,
    0,
    &IID_IDispatch,
    0
};


#define _AcrobatAccess_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _AcrobatAccess, pIID, n)

int __stdcall _AcrobatAccess_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _AcrobatAccess, 11, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _AcrobatAccess, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _AcrobatAccess, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _AcrobatAccess, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _AcrobatAccess, 11, *pIndex )
    
}

const ExtendedProxyFileInfo AcrobatAccess_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _AcrobatAccess_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _AcrobatAccess_StubVtblList,
    (const PCInterfaceName * ) & _AcrobatAccess_InterfaceNamesList,
    (const IID ** ) & _AcrobatAccess_BaseIIDList,
    & _AcrobatAccess_IID_Lookup, 
    11,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

