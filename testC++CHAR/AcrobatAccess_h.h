

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __AcrobatAccess_h_h__
#define __AcrobatAccess_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IAccID_FWD_DEFINED__
#define __IAccID_FWD_DEFINED__
typedef interface IAccID IAccID;

#endif 	/* __IAccID_FWD_DEFINED__ */


#ifndef __ISelectText_FWD_DEFINED__
#define __ISelectText_FWD_DEFINED__
typedef interface ISelectText ISelectText;

#endif 	/* __ISelectText_FWD_DEFINED__ */


#ifndef __IPDDomNode_FWD_DEFINED__
#define __IPDDomNode_FWD_DEFINED__
typedef interface IPDDomNode IPDDomNode;

#endif 	/* __IPDDomNode_FWD_DEFINED__ */


#ifndef __IPDDomNodeExt_FWD_DEFINED__
#define __IPDDomNodeExt_FWD_DEFINED__
typedef interface IPDDomNodeExt IPDDomNodeExt;

#endif 	/* __IPDDomNodeExt_FWD_DEFINED__ */


#ifndef __IPDDomElement_FWD_DEFINED__
#define __IPDDomElement_FWD_DEFINED__
typedef interface IPDDomElement IPDDomElement;

#endif 	/* __IPDDomElement_FWD_DEFINED__ */


#ifndef __IPDDomWord_FWD_DEFINED__
#define __IPDDomWord_FWD_DEFINED__
typedef interface IPDDomWord IPDDomWord;

#endif 	/* __IPDDomWord_FWD_DEFINED__ */


#ifndef __IPDDomDocument_FWD_DEFINED__
#define __IPDDomDocument_FWD_DEFINED__
typedef interface IPDDomDocument IPDDomDocument;

#endif 	/* __IPDDomDocument_FWD_DEFINED__ */


#ifndef __IGetPDDomNode_FWD_DEFINED__
#define __IGetPDDomNode_FWD_DEFINED__
typedef interface IGetPDDomNode IGetPDDomNode;

#endif 	/* __IGetPDDomNode_FWD_DEFINED__ */


#ifndef __IPDDomGroupInfo_FWD_DEFINED__
#define __IPDDomGroupInfo_FWD_DEFINED__
typedef interface IPDDomGroupInfo IPDDomGroupInfo;

#endif 	/* __IPDDomGroupInfo_FWD_DEFINED__ */


#ifndef __IPDDomGlobalOptions_FWD_DEFINED__
#define __IPDDomGlobalOptions_FWD_DEFINED__
typedef interface IPDDomGlobalOptions IPDDomGlobalOptions;

#endif 	/* __IPDDomGlobalOptions_FWD_DEFINED__ */


#ifndef __IPDDomDocPagination_FWD_DEFINED__
#define __IPDDomDocPagination_FWD_DEFINED__
typedef interface IPDDomDocPagination IPDDomDocPagination;

#endif 	/* __IPDDomDocPagination_FWD_DEFINED__ */


#ifndef __Accessible_FWD_DEFINED__
#define __Accessible_FWD_DEFINED__

#ifdef __cplusplus
typedef class Accessible Accessible;
#else
typedef struct Accessible Accessible;
#endif /* __cplusplus */

#endif 	/* __Accessible_FWD_DEFINED__ */


#ifndef __PDDom_FWD_DEFINED__
#define __PDDom_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDDom PDDom;
#else
typedef struct PDDom PDDom;
#endif /* __cplusplus */

#endif 	/* __PDDom_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "oleacc.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IAccID_INTERFACE_DEFINED__
#define __IAccID_INTERFACE_DEFINED__

/* interface IAccID */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IAccID;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("81f9b44f-ba3a-4f5d-9b51-090c74a9b3a4")
    IAccID : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_accID( 
            /* [retval][out] */ long *pID) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IAccIDVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IAccID * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IAccID * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IAccID * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_accID )( 
            IAccID * This,
            /* [retval][out] */ long *pID);
        
        END_INTERFACE
    } IAccIDVtbl;

    interface IAccID
    {
        CONST_VTBL struct IAccIDVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IAccID_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IAccID_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IAccID_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IAccID_get_accID(This,pID)	\
    ( (This)->lpVtbl -> get_accID(This,pID) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IAccID_INTERFACE_DEFINED__ */


#ifndef __ISelectText_INTERFACE_DEFINED__
#define __ISelectText_INTERFACE_DEFINED__

/* interface ISelectText */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_ISelectText;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B4848E37-7C66-40a6-9F66-D3A9BC8F4636")
    ISelectText : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE selectText( 
            /* [in] */ long startID,
            /* [in] */ long startCharIndex,
            /* [in] */ long stopID,
            /* [in] */ long stopCharIndex) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISelectTextVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISelectText * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISelectText * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISelectText * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *selectText )( 
            ISelectText * This,
            /* [in] */ long startID,
            /* [in] */ long startCharIndex,
            /* [in] */ long stopID,
            /* [in] */ long stopCharIndex);
        
        END_INTERFACE
    } ISelectTextVtbl;

    interface ISelectText
    {
        CONST_VTBL struct ISelectTextVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISelectText_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISelectText_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISelectText_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISelectText_selectText(This,startID,startCharIndex,stopID,stopCharIndex)	\
    ( (This)->lpVtbl -> selectText(This,startID,startCharIndex,stopID,stopCharIndex) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISelectText_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AcrobatAccess_0000_0002 */
/* [local] */ 

typedef /* [public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0002_0001
    {
        CPDDomNode_Document	= 1,
        CPDDomNode_Page	= 2,
        CPDDomNode_StructElement	= 3,
        CPDDomNode_Text	= 4,
        CPDDomNode_Word	= 5,
        CPDDomNode_Char	= 6,
        CPDDomNode_Graphic	= 7,
        CPDDomNode_Link	= 8,
        CPDDomNode_PushButtonField	= 9,
        CPDDomNode_TextEditField	= 10,
        CPDDomNode_StaticTextField	= 11,
        CPDDomNode_ListboxField	= 12,
        CPDDomNode_ComboboxField	= 13,
        CPDDomNode_CheckboxField	= 14,
        CPDDomNode_RadioButtonField	= 15,
        CPDDomNode_SignatureField	= 16,
        CPDDomNode_OtherField	= 17,
        CPDDomNode_Comment	= 18,
        CPDDomNode_TextComment	= 19,
        CPDDomNode_Other	= 20,
        CPDDomNode_LineSeg	= 21,
        CPDDomNode_WordSeg	= 22,
        CPDDomNode_BarCode	= 23
    } 	CPDDomNodeType;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0002_0002
    {
        PDDOM_FONTATTR_ITALIC	= 0x1,
        PDDOM_FONTATTR_SMALLCAP	= 0x2,
        PDDOM_FONTATTR_ALLCAP	= 0x4,
        PDDOM_FONTATTR_SCRIPT	= 0x8,
        PDDOM_FONTATTR_BOLD	= 0x10,
        PDDOM_FONTATTR_LIGHT	= 0x20
    } 	PDDOM_FontStyle;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0002_0003
    {
        FontInfo_Unchecked	= 1,
        FontInfo_NoInfo	= 2,
        FontInfo_MixedInfo	= 3,
        FontInfo_Valid	= 4
    } 	FontInfoState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0002_0004
    {
        DocState_OK	= 0,
        DocState_Protected	= 1,
        DocState_Empty	= 2,
        DocState_Unavailable	= 3
    } 	DocState;

typedef /* [public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0002_0005
    {
        Relationship_Descendant	= 0,
        Relationship_Ancestor	= 1,
        Relationship_Before	= 2,
        Relationship_After	= 3,
        Relationship_Equal	= 4,
        Relationship_None	= 5
    } 	NodeRelationship;



extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0002_v0_0_s_ifspec;

#ifndef __IPDDomNode_INTERFACE_DEFINED__
#define __IPDDomNode_INTERFACE_DEFINED__

/* interface IPDDomNode */
/* [unique][uuid][dual][object][helpstring] */ 


EXTERN_C const IID IID_IPDDomNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5007373a-20d7-458f-9ffb-abc900e3a831")
    IPDDomNode : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetParent( 
            /* [retval][out] */ IPDDomNode **ppDispParent) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetType( 
            /* [retval][out] */ long *pNodeType) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChildCount( 
            /* [retval][out] */ long *pCountChildren) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetChild( 
            /* [in] */ long index,
            /* [retval][out] */ IPDDomNode **ppDispChild) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetName( 
            /* [retval][out] */ BSTR *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetValue( 
            /* [retval][out] */ BSTR *pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsSame( 
            /* [in] */ IPDDomNode *node,
            /* [retval][out] */ BOOL *isSame) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextContent( 
            /* [retval][out] */ BSTR *pszText) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetLocation( 
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFontInfo( 
            /* [out] */ long *fontStatus,
            /* [out] */ BSTR *pszName,
            /* [out] */ float *fontSize,
            /* [out] */ long *fontFlags,
            /* [out] */ float *red,
            /* [out] */ float *green,
            /* [out] */ float *blue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFromID( 
            /* [in] */ BSTR id,
            /* [retval][out] */ IPDDomNode **ppDispNode) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIAccessible( 
            /* [retval][out] */ IAccessible **ppDispIAccessible) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScrollTo( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextInLines( 
            /* [in] */ BOOL visibleOnly,
            /* [retval][out] */ IPDDomNode **ppDisp) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomNode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDDomNode * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDDomNode * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDDomNode * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDDomNode * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPDDomNode * This,
            /* [retval][out] */ IPDDomNode **ppDispParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IPDDomNode * This,
            /* [retval][out] */ long *pNodeType);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildCount )( 
            IPDDomNode * This,
            /* [retval][out] */ long *pCountChildren);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IPDDomNode * This,
            /* [in] */ long index,
            /* [retval][out] */ IPDDomNode **ppDispChild);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IPDDomNode * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IPDDomNode * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *IsSame )( 
            IPDDomNode * This,
            /* [in] */ IPDDomNode *node,
            /* [retval][out] */ BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextContent )( 
            IPDDomNode * This,
            /* [retval][out] */ BSTR *pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IPDDomNode * This,
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetFontInfo )( 
            IPDDomNode * This,
            /* [out] */ long *fontStatus,
            /* [out] */ BSTR *pszName,
            /* [out] */ float *fontSize,
            /* [out] */ long *fontFlags,
            /* [out] */ float *red,
            /* [out] */ float *green,
            /* [out] */ float *blue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFromID )( 
            IPDDomNode * This,
            /* [in] */ BSTR id,
            /* [retval][out] */ IPDDomNode **ppDispNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            IPDDomNode * This,
            /* [retval][out] */ IAccessible **ppDispIAccessible);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollTo )( 
            IPDDomNode * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextInLines )( 
            IPDDomNode * This,
            /* [in] */ BOOL visibleOnly,
            /* [retval][out] */ IPDDomNode **ppDisp);
        
        END_INTERFACE
    } IPDDomNodeVtbl;

    interface IPDDomNode
    {
        CONST_VTBL struct IPDDomNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomNode_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDDomNode_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDDomNode_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDDomNode_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDDomNode_GetParent(This,ppDispParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppDispParent) ) 

#define IPDDomNode_GetType(This,pNodeType)	\
    ( (This)->lpVtbl -> GetType(This,pNodeType) ) 

#define IPDDomNode_GetChildCount(This,pCountChildren)	\
    ( (This)->lpVtbl -> GetChildCount(This,pCountChildren) ) 

#define IPDDomNode_GetChild(This,index,ppDispChild)	\
    ( (This)->lpVtbl -> GetChild(This,index,ppDispChild) ) 

#define IPDDomNode_GetName(This,pszName)	\
    ( (This)->lpVtbl -> GetName(This,pszName) ) 

#define IPDDomNode_GetValue(This,pszName)	\
    ( (This)->lpVtbl -> GetValue(This,pszName) ) 

#define IPDDomNode_IsSame(This,node,isSame)	\
    ( (This)->lpVtbl -> IsSame(This,node,isSame) ) 

#define IPDDomNode_GetTextContent(This,pszText)	\
    ( (This)->lpVtbl -> GetTextContent(This,pszText) ) 

#define IPDDomNode_GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight)	\
    ( (This)->lpVtbl -> GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight) ) 

#define IPDDomNode_GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue)	\
    ( (This)->lpVtbl -> GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue) ) 

#define IPDDomNode_GetFromID(This,id,ppDispNode)	\
    ( (This)->lpVtbl -> GetFromID(This,id,ppDispNode) ) 

#define IPDDomNode_GetIAccessible(This,ppDispIAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppDispIAccessible) ) 

#define IPDDomNode_ScrollTo(This)	\
    ( (This)->lpVtbl -> ScrollTo(This) ) 

#define IPDDomNode_GetTextInLines(This,visibleOnly,ppDisp)	\
    ( (This)->lpVtbl -> GetTextInLines(This,visibleOnly,ppDisp) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomNode_INTERFACE_DEFINED__ */


#ifndef __IPDDomNodeExt_INTERFACE_DEFINED__
#define __IPDDomNodeExt_INTERFACE_DEFINED__

/* interface IPDDomNodeExt */
/* [unique][uuid][dual][object][helpstring] */ 


EXTERN_C const IID IID_IPDDomNodeExt;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4A894040-247E-4aff-BB08-3489E9905235")
    IPDDomNodeExt : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetState( 
            /* [retval][out] */ long *pState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Navigate( 
            /* [in] */ long navDir,
            /* [retval][out] */ IPDDomNode **ppEnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetIndex( 
            /* [retval][out] */ long *pIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPageNum( 
            /* [out] */ long *firstPage,
            /* [out] */ long *lastPage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DoDefaultAction( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ScrollToEx( 
            BOOL favorLeft,
            BOOL favorTop) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Relationship( 
            /* [in] */ IPDDomNode *node,
            /* [out] */ long *pRel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomNodeExtVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomNodeExt * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomNodeExt * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomNodeExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetState )( 
            IPDDomNodeExt * This,
            /* [retval][out] */ long *pState);
        
        HRESULT ( STDMETHODCALLTYPE *Navigate )( 
            IPDDomNodeExt * This,
            /* [in] */ long navDir,
            /* [retval][out] */ IPDDomNode **ppEnd);
        
        HRESULT ( STDMETHODCALLTYPE *SetFocus )( 
            IPDDomNodeExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIndex )( 
            IPDDomNodeExt * This,
            /* [retval][out] */ long *pIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetPageNum )( 
            IPDDomNodeExt * This,
            /* [out] */ long *firstPage,
            /* [out] */ long *lastPage);
        
        HRESULT ( STDMETHODCALLTYPE *DoDefaultAction )( 
            IPDDomNodeExt * This);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollToEx )( 
            IPDDomNodeExt * This,
            BOOL favorLeft,
            BOOL favorTop);
        
        HRESULT ( STDMETHODCALLTYPE *Relationship )( 
            IPDDomNodeExt * This,
            /* [in] */ IPDDomNode *node,
            /* [out] */ long *pRel);
        
        END_INTERFACE
    } IPDDomNodeExtVtbl;

    interface IPDDomNodeExt
    {
        CONST_VTBL struct IPDDomNodeExtVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomNodeExt_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomNodeExt_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomNodeExt_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomNodeExt_GetState(This,pState)	\
    ( (This)->lpVtbl -> GetState(This,pState) ) 

#define IPDDomNodeExt_Navigate(This,navDir,ppEnd)	\
    ( (This)->lpVtbl -> Navigate(This,navDir,ppEnd) ) 

#define IPDDomNodeExt_SetFocus(This)	\
    ( (This)->lpVtbl -> SetFocus(This) ) 

#define IPDDomNodeExt_GetIndex(This,pIndex)	\
    ( (This)->lpVtbl -> GetIndex(This,pIndex) ) 

#define IPDDomNodeExt_GetPageNum(This,firstPage,lastPage)	\
    ( (This)->lpVtbl -> GetPageNum(This,firstPage,lastPage) ) 

#define IPDDomNodeExt_DoDefaultAction(This)	\
    ( (This)->lpVtbl -> DoDefaultAction(This) ) 

#define IPDDomNodeExt_ScrollToEx(This,favorLeft,favorTop)	\
    ( (This)->lpVtbl -> ScrollToEx(This,favorLeft,favorTop) ) 

#define IPDDomNodeExt_Relationship(This,node,pRel)	\
    ( (This)->lpVtbl -> Relationship(This,node,pRel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomNodeExt_INTERFACE_DEFINED__ */


#ifndef __IPDDomElement_INTERFACE_DEFINED__
#define __IPDDomElement_INTERFACE_DEFINED__

/* interface IPDDomElement */
/* [unique][uuid][dual][object][helpstring] */ 


EXTERN_C const IID IID_IPDDomElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("198f17ae-b921-4308-9543-288d426a5c2b")
    IPDDomElement : public IPDDomNode
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetTagName( 
            /* [retval][out] */ BSTR *pszTagName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetStdName( 
            /* [retval][out] */ BSTR *pszStdName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetID( 
            /* [retval][out] */ BSTR *pszId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetAttribute( 
            /* [in] */ BSTR pszAttr,
            /* [in] */ BSTR pszOwner,
            /* [retval][out] */ BSTR *pszAttrVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomElement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDDomElement * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDDomElement * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDDomElement * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDDomElement * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPDDomElement * This,
            /* [retval][out] */ IPDDomNode **ppDispParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IPDDomElement * This,
            /* [retval][out] */ long *pNodeType);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildCount )( 
            IPDDomElement * This,
            /* [retval][out] */ long *pCountChildren);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IPDDomElement * This,
            /* [in] */ long index,
            /* [retval][out] */ IPDDomNode **ppDispChild);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *IsSame )( 
            IPDDomElement * This,
            /* [in] */ IPDDomNode *node,
            /* [retval][out] */ BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextContent )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IPDDomElement * This,
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetFontInfo )( 
            IPDDomElement * This,
            /* [out] */ long *fontStatus,
            /* [out] */ BSTR *pszName,
            /* [out] */ float *fontSize,
            /* [out] */ long *fontFlags,
            /* [out] */ float *red,
            /* [out] */ float *green,
            /* [out] */ float *blue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFromID )( 
            IPDDomElement * This,
            /* [in] */ BSTR id,
            /* [retval][out] */ IPDDomNode **ppDispNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            IPDDomElement * This,
            /* [retval][out] */ IAccessible **ppDispIAccessible);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollTo )( 
            IPDDomElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextInLines )( 
            IPDDomElement * This,
            /* [in] */ BOOL visibleOnly,
            /* [retval][out] */ IPDDomNode **ppDisp);
        
        HRESULT ( STDMETHODCALLTYPE *GetTagName )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszTagName);
        
        HRESULT ( STDMETHODCALLTYPE *GetStdName )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszStdName);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            IPDDomElement * This,
            /* [retval][out] */ BSTR *pszId);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )( 
            IPDDomElement * This,
            /* [in] */ BSTR pszAttr,
            /* [in] */ BSTR pszOwner,
            /* [retval][out] */ BSTR *pszAttrVal);
        
        END_INTERFACE
    } IPDDomElementVtbl;

    interface IPDDomElement
    {
        CONST_VTBL struct IPDDomElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomElement_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDDomElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDDomElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDDomElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDDomElement_GetParent(This,ppDispParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppDispParent) ) 

#define IPDDomElement_GetType(This,pNodeType)	\
    ( (This)->lpVtbl -> GetType(This,pNodeType) ) 

#define IPDDomElement_GetChildCount(This,pCountChildren)	\
    ( (This)->lpVtbl -> GetChildCount(This,pCountChildren) ) 

#define IPDDomElement_GetChild(This,index,ppDispChild)	\
    ( (This)->lpVtbl -> GetChild(This,index,ppDispChild) ) 

#define IPDDomElement_GetName(This,pszName)	\
    ( (This)->lpVtbl -> GetName(This,pszName) ) 

#define IPDDomElement_GetValue(This,pszName)	\
    ( (This)->lpVtbl -> GetValue(This,pszName) ) 

#define IPDDomElement_IsSame(This,node,isSame)	\
    ( (This)->lpVtbl -> IsSame(This,node,isSame) ) 

#define IPDDomElement_GetTextContent(This,pszText)	\
    ( (This)->lpVtbl -> GetTextContent(This,pszText) ) 

#define IPDDomElement_GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight)	\
    ( (This)->lpVtbl -> GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight) ) 

#define IPDDomElement_GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue)	\
    ( (This)->lpVtbl -> GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue) ) 

#define IPDDomElement_GetFromID(This,id,ppDispNode)	\
    ( (This)->lpVtbl -> GetFromID(This,id,ppDispNode) ) 

#define IPDDomElement_GetIAccessible(This,ppDispIAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppDispIAccessible) ) 

#define IPDDomElement_ScrollTo(This)	\
    ( (This)->lpVtbl -> ScrollTo(This) ) 

#define IPDDomElement_GetTextInLines(This,visibleOnly,ppDisp)	\
    ( (This)->lpVtbl -> GetTextInLines(This,visibleOnly,ppDisp) ) 


#define IPDDomElement_GetTagName(This,pszTagName)	\
    ( (This)->lpVtbl -> GetTagName(This,pszTagName) ) 

#define IPDDomElement_GetStdName(This,pszStdName)	\
    ( (This)->lpVtbl -> GetStdName(This,pszStdName) ) 

#define IPDDomElement_GetID(This,pszId)	\
    ( (This)->lpVtbl -> GetID(This,pszId) ) 

#define IPDDomElement_GetAttribute(This,pszAttr,pszOwner,pszAttrVal)	\
    ( (This)->lpVtbl -> GetAttribute(This,pszAttr,pszOwner,pszAttrVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomElement_INTERFACE_DEFINED__ */


#ifndef __IPDDomWord_INTERFACE_DEFINED__
#define __IPDDomWord_INTERFACE_DEFINED__

/* interface IPDDomWord */
/* [unique][uuid][dual][object][helpstring] */ 


EXTERN_C const IID IID_IPDDomWord;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("03c2aea5-befa-4c84-a187-c9245ac784f6")
    IPDDomWord : public IPDDomNode
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE LastWordOfLine( 
            /* [retval][out] */ BOOL *isLast) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomWordVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomWord * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomWord * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomWord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDDomWord * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDDomWord * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDDomWord * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDDomWord * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPDDomWord * This,
            /* [retval][out] */ IPDDomNode **ppDispParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IPDDomWord * This,
            /* [retval][out] */ long *pNodeType);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildCount )( 
            IPDDomWord * This,
            /* [retval][out] */ long *pCountChildren);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IPDDomWord * This,
            /* [in] */ long index,
            /* [retval][out] */ IPDDomNode **ppDispChild);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IPDDomWord * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IPDDomWord * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *IsSame )( 
            IPDDomWord * This,
            /* [in] */ IPDDomNode *node,
            /* [retval][out] */ BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextContent )( 
            IPDDomWord * This,
            /* [retval][out] */ BSTR *pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IPDDomWord * This,
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetFontInfo )( 
            IPDDomWord * This,
            /* [out] */ long *fontStatus,
            /* [out] */ BSTR *pszName,
            /* [out] */ float *fontSize,
            /* [out] */ long *fontFlags,
            /* [out] */ float *red,
            /* [out] */ float *green,
            /* [out] */ float *blue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFromID )( 
            IPDDomWord * This,
            /* [in] */ BSTR id,
            /* [retval][out] */ IPDDomNode **ppDispNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            IPDDomWord * This,
            /* [retval][out] */ IAccessible **ppDispIAccessible);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollTo )( 
            IPDDomWord * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextInLines )( 
            IPDDomWord * This,
            /* [in] */ BOOL visibleOnly,
            /* [retval][out] */ IPDDomNode **ppDisp);
        
        HRESULT ( STDMETHODCALLTYPE *LastWordOfLine )( 
            IPDDomWord * This,
            /* [retval][out] */ BOOL *isLast);
        
        END_INTERFACE
    } IPDDomWordVtbl;

    interface IPDDomWord
    {
        CONST_VTBL struct IPDDomWordVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomWord_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomWord_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomWord_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomWord_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDDomWord_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDDomWord_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDDomWord_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDDomWord_GetParent(This,ppDispParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppDispParent) ) 

#define IPDDomWord_GetType(This,pNodeType)	\
    ( (This)->lpVtbl -> GetType(This,pNodeType) ) 

#define IPDDomWord_GetChildCount(This,pCountChildren)	\
    ( (This)->lpVtbl -> GetChildCount(This,pCountChildren) ) 

#define IPDDomWord_GetChild(This,index,ppDispChild)	\
    ( (This)->lpVtbl -> GetChild(This,index,ppDispChild) ) 

#define IPDDomWord_GetName(This,pszName)	\
    ( (This)->lpVtbl -> GetName(This,pszName) ) 

#define IPDDomWord_GetValue(This,pszName)	\
    ( (This)->lpVtbl -> GetValue(This,pszName) ) 

#define IPDDomWord_IsSame(This,node,isSame)	\
    ( (This)->lpVtbl -> IsSame(This,node,isSame) ) 

#define IPDDomWord_GetTextContent(This,pszText)	\
    ( (This)->lpVtbl -> GetTextContent(This,pszText) ) 

#define IPDDomWord_GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight)	\
    ( (This)->lpVtbl -> GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight) ) 

#define IPDDomWord_GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue)	\
    ( (This)->lpVtbl -> GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue) ) 

#define IPDDomWord_GetFromID(This,id,ppDispNode)	\
    ( (This)->lpVtbl -> GetFromID(This,id,ppDispNode) ) 

#define IPDDomWord_GetIAccessible(This,ppDispIAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppDispIAccessible) ) 

#define IPDDomWord_ScrollTo(This)	\
    ( (This)->lpVtbl -> ScrollTo(This) ) 

#define IPDDomWord_GetTextInLines(This,visibleOnly,ppDisp)	\
    ( (This)->lpVtbl -> GetTextInLines(This,visibleOnly,ppDisp) ) 


#define IPDDomWord_LastWordOfLine(This,isLast)	\
    ( (This)->lpVtbl -> LastWordOfLine(This,isLast) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomWord_INTERFACE_DEFINED__ */


#ifndef __IPDDomDocument_INTERFACE_DEFINED__
#define __IPDDomDocument_INTERFACE_DEFINED__

/* interface IPDDomDocument */
/* [unique][uuid][dual][object][helpstring] */ 


EXTERN_C const IID IID_IPDDomDocument;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("00FFD6C4-1A94-44bc-AD3E-8AC18552E3E6")
    IPDDomDocument : public IPDDomElement
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetFocusNode( 
            /* [retval][out] */ IPDDomNode **node) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NextFocusNode( 
            /* [in] */ BOOL forward,
            /* [retval][out] */ IPDDomNode **node) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetDocInfo( 
            /* [out] */ BSTR *fileName,
            /* [out] */ long *nPages,
            /* [out] */ long *firstVisiblePage,
            /* [out] */ long *lastVisiblePage,
            /* [out] */ long *status,
            /* [out] */ BSTR *lang) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SelectText( 
            /* [in] */ IPDDomWord *startID,
            /* [in] */ long startCharIndex,
            /* [in] */ IPDDomWord *stopID,
            /* [in] */ long stopCharIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTextSelection( 
            /* [out] */ BSTR *pSelection) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSelectionBounds( 
            /* [out] */ IPDDomWord **pStart,
            /* [out] */ long *startIndex,
            /* [out] */ IPDDomWord **pStop,
            long *stopIndex) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetCaret( 
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight,
            /* [out] */ IPDDomNode **node,
            /* [out] */ long *index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetCaret( 
            /* [in] */ IPDDomWord *node,
            /* [in] */ long index) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GoToPage( 
            /* [in] */ long pageNum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomDocumentVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomDocument * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomDocument * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPDDomDocument * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPDDomDocument * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPDDomDocument * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPDDomDocument * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        HRESULT ( STDMETHODCALLTYPE *GetParent )( 
            IPDDomDocument * This,
            /* [retval][out] */ IPDDomNode **ppDispParent);
        
        HRESULT ( STDMETHODCALLTYPE *GetType )( 
            IPDDomDocument * This,
            /* [retval][out] */ long *pNodeType);
        
        HRESULT ( STDMETHODCALLTYPE *GetChildCount )( 
            IPDDomDocument * This,
            /* [retval][out] */ long *pCountChildren);
        
        HRESULT ( STDMETHODCALLTYPE *GetChild )( 
            IPDDomDocument * This,
            /* [in] */ long index,
            /* [retval][out] */ IPDDomNode **ppDispChild);
        
        HRESULT ( STDMETHODCALLTYPE *GetName )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetValue )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszName);
        
        HRESULT ( STDMETHODCALLTYPE *IsSame )( 
            IPDDomDocument * This,
            /* [in] */ IPDDomNode *node,
            /* [retval][out] */ BOOL *isSame);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextContent )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszText);
        
        HRESULT ( STDMETHODCALLTYPE *GetLocation )( 
            IPDDomDocument * This,
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight);
        
        HRESULT ( STDMETHODCALLTYPE *GetFontInfo )( 
            IPDDomDocument * This,
            /* [out] */ long *fontStatus,
            /* [out] */ BSTR *pszName,
            /* [out] */ float *fontSize,
            /* [out] */ long *fontFlags,
            /* [out] */ float *red,
            /* [out] */ float *green,
            /* [out] */ float *blue);
        
        HRESULT ( STDMETHODCALLTYPE *GetFromID )( 
            IPDDomDocument * This,
            /* [in] */ BSTR id,
            /* [retval][out] */ IPDDomNode **ppDispNode);
        
        HRESULT ( STDMETHODCALLTYPE *GetIAccessible )( 
            IPDDomDocument * This,
            /* [retval][out] */ IAccessible **ppDispIAccessible);
        
        HRESULT ( STDMETHODCALLTYPE *ScrollTo )( 
            IPDDomDocument * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextInLines )( 
            IPDDomDocument * This,
            /* [in] */ BOOL visibleOnly,
            /* [retval][out] */ IPDDomNode **ppDisp);
        
        HRESULT ( STDMETHODCALLTYPE *GetTagName )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszTagName);
        
        HRESULT ( STDMETHODCALLTYPE *GetStdName )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszStdName);
        
        HRESULT ( STDMETHODCALLTYPE *GetID )( 
            IPDDomDocument * This,
            /* [retval][out] */ BSTR *pszId);
        
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )( 
            IPDDomDocument * This,
            /* [in] */ BSTR pszAttr,
            /* [in] */ BSTR pszOwner,
            /* [retval][out] */ BSTR *pszAttrVal);
        
        HRESULT ( STDMETHODCALLTYPE *GetFocusNode )( 
            IPDDomDocument * This,
            /* [retval][out] */ IPDDomNode **node);
        
        HRESULT ( STDMETHODCALLTYPE *NextFocusNode )( 
            IPDDomDocument * This,
            /* [in] */ BOOL forward,
            /* [retval][out] */ IPDDomNode **node);
        
        HRESULT ( STDMETHODCALLTYPE *GetDocInfo )( 
            IPDDomDocument * This,
            /* [out] */ BSTR *fileName,
            /* [out] */ long *nPages,
            /* [out] */ long *firstVisiblePage,
            /* [out] */ long *lastVisiblePage,
            /* [out] */ long *status,
            /* [out] */ BSTR *lang);
        
        HRESULT ( STDMETHODCALLTYPE *SelectText )( 
            IPDDomDocument * This,
            /* [in] */ IPDDomWord *startID,
            /* [in] */ long startCharIndex,
            /* [in] */ IPDDomWord *stopID,
            /* [in] */ long stopCharIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetTextSelection )( 
            IPDDomDocument * This,
            /* [out] */ BSTR *pSelection);
        
        HRESULT ( STDMETHODCALLTYPE *GetSelectionBounds )( 
            IPDDomDocument * This,
            /* [out] */ IPDDomWord **pStart,
            /* [out] */ long *startIndex,
            /* [out] */ IPDDomWord **pStop,
            long *stopIndex);
        
        HRESULT ( STDMETHODCALLTYPE *GetCaret )( 
            IPDDomDocument * This,
            /* [out] */ long *pxLeft,
            /* [out] */ long *pyTop,
            /* [out] */ long *pcxWidth,
            /* [out] */ long *pcyHeight,
            /* [out] */ IPDDomNode **node,
            /* [out] */ long *index);
        
        HRESULT ( STDMETHODCALLTYPE *SetCaret )( 
            IPDDomDocument * This,
            /* [in] */ IPDDomWord *node,
            /* [in] */ long index);
        
        HRESULT ( STDMETHODCALLTYPE *GoToPage )( 
            IPDDomDocument * This,
            /* [in] */ long pageNum);
        
        END_INTERFACE
    } IPDDomDocumentVtbl;

    interface IPDDomDocument
    {
        CONST_VTBL struct IPDDomDocumentVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomDocument_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPDDomDocument_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPDDomDocument_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPDDomDocument_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPDDomDocument_GetParent(This,ppDispParent)	\
    ( (This)->lpVtbl -> GetParent(This,ppDispParent) ) 

#define IPDDomDocument_GetType(This,pNodeType)	\
    ( (This)->lpVtbl -> GetType(This,pNodeType) ) 

#define IPDDomDocument_GetChildCount(This,pCountChildren)	\
    ( (This)->lpVtbl -> GetChildCount(This,pCountChildren) ) 

#define IPDDomDocument_GetChild(This,index,ppDispChild)	\
    ( (This)->lpVtbl -> GetChild(This,index,ppDispChild) ) 

#define IPDDomDocument_GetName(This,pszName)	\
    ( (This)->lpVtbl -> GetName(This,pszName) ) 

#define IPDDomDocument_GetValue(This,pszName)	\
    ( (This)->lpVtbl -> GetValue(This,pszName) ) 

#define IPDDomDocument_IsSame(This,node,isSame)	\
    ( (This)->lpVtbl -> IsSame(This,node,isSame) ) 

#define IPDDomDocument_GetTextContent(This,pszText)	\
    ( (This)->lpVtbl -> GetTextContent(This,pszText) ) 

#define IPDDomDocument_GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight)	\
    ( (This)->lpVtbl -> GetLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight) ) 

#define IPDDomDocument_GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue)	\
    ( (This)->lpVtbl -> GetFontInfo(This,fontStatus,pszName,fontSize,fontFlags,red,green,blue) ) 

#define IPDDomDocument_GetFromID(This,id,ppDispNode)	\
    ( (This)->lpVtbl -> GetFromID(This,id,ppDispNode) ) 

#define IPDDomDocument_GetIAccessible(This,ppDispIAccessible)	\
    ( (This)->lpVtbl -> GetIAccessible(This,ppDispIAccessible) ) 

#define IPDDomDocument_ScrollTo(This)	\
    ( (This)->lpVtbl -> ScrollTo(This) ) 

#define IPDDomDocument_GetTextInLines(This,visibleOnly,ppDisp)	\
    ( (This)->lpVtbl -> GetTextInLines(This,visibleOnly,ppDisp) ) 


#define IPDDomDocument_GetTagName(This,pszTagName)	\
    ( (This)->lpVtbl -> GetTagName(This,pszTagName) ) 

#define IPDDomDocument_GetStdName(This,pszStdName)	\
    ( (This)->lpVtbl -> GetStdName(This,pszStdName) ) 

#define IPDDomDocument_GetID(This,pszId)	\
    ( (This)->lpVtbl -> GetID(This,pszId) ) 

#define IPDDomDocument_GetAttribute(This,pszAttr,pszOwner,pszAttrVal)	\
    ( (This)->lpVtbl -> GetAttribute(This,pszAttr,pszOwner,pszAttrVal) ) 


#define IPDDomDocument_GetFocusNode(This,node)	\
    ( (This)->lpVtbl -> GetFocusNode(This,node) ) 

#define IPDDomDocument_NextFocusNode(This,forward,node)	\
    ( (This)->lpVtbl -> NextFocusNode(This,forward,node) ) 

#define IPDDomDocument_GetDocInfo(This,fileName,nPages,firstVisiblePage,lastVisiblePage,status,lang)	\
    ( (This)->lpVtbl -> GetDocInfo(This,fileName,nPages,firstVisiblePage,lastVisiblePage,status,lang) ) 

#define IPDDomDocument_SelectText(This,startID,startCharIndex,stopID,stopCharIndex)	\
    ( (This)->lpVtbl -> SelectText(This,startID,startCharIndex,stopID,stopCharIndex) ) 

#define IPDDomDocument_GetTextSelection(This,pSelection)	\
    ( (This)->lpVtbl -> GetTextSelection(This,pSelection) ) 

#define IPDDomDocument_GetSelectionBounds(This,pStart,startIndex,pStop,stopIndex)	\
    ( (This)->lpVtbl -> GetSelectionBounds(This,pStart,startIndex,pStop,stopIndex) ) 

#define IPDDomDocument_GetCaret(This,pxLeft,pyTop,pcxWidth,pcyHeight,node,index)	\
    ( (This)->lpVtbl -> GetCaret(This,pxLeft,pyTop,pcxWidth,pcyHeight,node,index) ) 

#define IPDDomDocument_SetCaret(This,node,index)	\
    ( (This)->lpVtbl -> SetCaret(This,node,index) ) 

#define IPDDomDocument_GoToPage(This,pageNum)	\
    ( (This)->lpVtbl -> GoToPage(This,pageNum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomDocument_INTERFACE_DEFINED__ */


#ifndef __IGetPDDomNode_INTERFACE_DEFINED__
#define __IGetPDDomNode_INTERFACE_DEFINED__

/* interface IGetPDDomNode */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IGetPDDomNode;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("f9f2fe81-f764-4bd0-afa5-5de841ddb625")
    IGetPDDomNode : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE get_PDDomNode( 
            /* [in] */ VARIANT varID,
            /* [retval][out] */ IPDDomNode **ppDispDoc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IGetPDDomNodeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IGetPDDomNode * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IGetPDDomNode * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IGetPDDomNode * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *get_PDDomNode )( 
            IGetPDDomNode * This,
            /* [in] */ VARIANT varID,
            /* [retval][out] */ IPDDomNode **ppDispDoc);
        
        END_INTERFACE
    } IGetPDDomNodeVtbl;

    interface IGetPDDomNode
    {
        CONST_VTBL struct IGetPDDomNodeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IGetPDDomNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IGetPDDomNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IGetPDDomNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IGetPDDomNode_get_PDDomNode(This,varID,ppDispDoc)	\
    ( (This)->lpVtbl -> get_PDDomNode(This,varID,ppDispDoc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IGetPDDomNode_INTERFACE_DEFINED__ */


#ifndef __IPDDomGroupInfo_INTERFACE_DEFINED__
#define __IPDDomGroupInfo_INTERFACE_DEFINED__

/* interface IPDDomGroupInfo */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPDDomGroupInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("35ADDC4B-B470-45f9-B29C-B6845949A4FE")
    IPDDomGroupInfo : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetGroupPosition( 
            /* [out] */ long *groupSize,
            /* [out] */ long *position) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomGroupInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomGroupInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomGroupInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomGroupInfo * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetGroupPosition )( 
            IPDDomGroupInfo * This,
            /* [out] */ long *groupSize,
            /* [out] */ long *position);
        
        END_INTERFACE
    } IPDDomGroupInfoVtbl;

    interface IPDDomGroupInfo
    {
        CONST_VTBL struct IPDDomGroupInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomGroupInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomGroupInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomGroupInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomGroupInfo_GetGroupPosition(This,groupSize,position)	\
    ( (This)->lpVtbl -> GetGroupPosition(This,groupSize,position) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomGroupInfo_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_AcrobatAccess_0000_0009 */
/* [local] */ 

typedef /* [public][public][public] */ 
enum __MIDL___MIDL_itf_AcrobatAccess_0000_0009_0001
    {
        IPDDOM_OPT_CLIPPEDLOCATION	= 1,
        IPDDOM_OPT_RELATIVELOCATION	= 2
    } 	IPDDomOptIds;



extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0009_v0_0_s_ifspec;

#ifndef __IPDDomGlobalOptions_INTERFACE_DEFINED__
#define __IPDDomGlobalOptions_INTERFACE_DEFINED__

/* interface IPDDomGlobalOptions */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPDDomGlobalOptions;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C37B1794-B61E-402b-9C7C-B073DE579AC1")
    IPDDomGlobalOptions : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetOption( 
            /* [in] */ IPDDomOptIds optId,
            /* [retval][out] */ VARIANT *value) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetOption( 
            /* [in] */ IPDDomOptIds optId,
            /* [in] */ VARIANT value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomGlobalOptionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomGlobalOptions * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomGlobalOptions * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomGlobalOptions * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetOption )( 
            IPDDomGlobalOptions * This,
            /* [in] */ IPDDomOptIds optId,
            /* [retval][out] */ VARIANT *value);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetOption )( 
            IPDDomGlobalOptions * This,
            /* [in] */ IPDDomOptIds optId,
            /* [in] */ VARIANT value);
        
        END_INTERFACE
    } IPDDomGlobalOptionsVtbl;

    interface IPDDomGlobalOptions
    {
        CONST_VTBL struct IPDDomGlobalOptionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomGlobalOptions_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomGlobalOptions_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomGlobalOptions_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomGlobalOptions_GetOption(This,optId,value)	\
    ( (This)->lpVtbl -> GetOption(This,optId,value) ) 

#define IPDDomGlobalOptions_SetOption(This,optId,value)	\
    ( (This)->lpVtbl -> SetOption(This,optId,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomGlobalOptions_INTERFACE_DEFINED__ */


#ifndef __IPDDomDocPagination_INTERFACE_DEFINED__
#define __IPDDomDocPagination_INTERFACE_DEFINED__

/* interface IPDDomDocPagination */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IPDDomDocPagination;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E6D1CB7-4DAE-4DE4-8ED9-15672A5F942F")
    IPDDomDocPagination : public IUnknown
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [out] */ long *numPages,
            /* [out] */ long *firstVisiblePage,
            /* [out] */ long *lastVisiblePage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE LabelForPageNum( 
            /* [in] */ long pageNum,
            /* [retval][out] */ BSTR *pageLabel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GoToPage( 
            /* [in] */ long pageNum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPDDomDocPaginationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPDDomDocPagination * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPDDomDocPagination * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPDDomDocPagination * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IPDDomDocPagination * This,
            /* [out] */ long *numPages,
            /* [out] */ long *firstVisiblePage,
            /* [out] */ long *lastVisiblePage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *LabelForPageNum )( 
            IPDDomDocPagination * This,
            /* [in] */ long pageNum,
            /* [retval][out] */ BSTR *pageLabel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GoToPage )( 
            IPDDomDocPagination * This,
            /* [in] */ long pageNum);
        
        END_INTERFACE
    } IPDDomDocPaginationVtbl;

    interface IPDDomDocPagination
    {
        CONST_VTBL struct IPDDomDocPaginationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPDDomDocPagination_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPDDomDocPagination_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPDDomDocPagination_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPDDomDocPagination_GetInfo(This,numPages,firstVisiblePage,lastVisiblePage)	\
    ( (This)->lpVtbl -> GetInfo(This,numPages,firstVisiblePage,lastVisiblePage) ) 

#define IPDDomDocPagination_LabelForPageNum(This,pageNum,pageLabel)	\
    ( (This)->lpVtbl -> LabelForPageNum(This,pageNum,pageLabel) ) 

#define IPDDomDocPagination_GoToPage(This,pageNum)	\
    ( (This)->lpVtbl -> GoToPage(This,pageNum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPDDomDocPagination_INTERFACE_DEFINED__ */



#ifndef __AcrobatAccessLib_LIBRARY_DEFINED__
#define __AcrobatAccessLib_LIBRARY_DEFINED__

/* library AcrobatAccessLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_AcrobatAccessLib;

EXTERN_C const CLSID CLSID_Accessible;

#ifdef __cplusplus

class DECLSPEC_UUID("C523F39F-9C83-11D3-9094-00104BD0D535")
Accessible;
#endif

EXTERN_C const CLSID CLSID_PDDom;

#ifdef __cplusplus

class DECLSPEC_UUID("ECAF4D9D-B473-4EC5-86F4-3DBB46F3F31A")
PDDom;
#endif
#endif /* __AcrobatAccessLib_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_AcrobatAccess_0000_0012 */
/* [local] */ 



static const GUID SID_AccID = 
{ 0x449d454b, 0x1f46, 0x497e, { 0xb2, 0xb6, 0x33, 0x57, 0xae, 0xd9, 0x91, 0x2b } };


static const GUID SID_GetPDDomNode = 
{ 0xc0a1d5e9, 0x1142, 0x4cf3, { 0xb6, 0x7, 0x82, 0xfc, 0x3b, 0x96, 0xa4, 0xdf } };


static const GUID SID_SelectText = 
{ 0x1ca75614, 0x5102, 0x49ec, { 0xb4, 0xc2, 0x70, 0x91, 0xa, 0xbb, 0x70, 0x78 } };


static const GUID SID_PDDomNode = 
{ 0x4eb77ec2, 0xd966, 0x4991, { 0xa7, 0x5f, 0xb6, 0x51, 0x9c, 0x94, 0x27, 0x87 } };


static const GUID SID_PDDomElement = 
{ 0xfee94e78, 0x901b, 0x4988, { 0xaf, 0x1e, 0x1e, 0xc, 0x3d, 0xef, 0xa0, 0xba } };


static const GUID SID_PDDomWord = 
{ 0x238168bc, 0x50c2, 0x4426, { 0x8b, 0xce, 0x5, 0x11, 0xff, 0xf6, 0x37, 0x2a } };


static const GUID SID_PDDomNodeExt = 
{ 0x4fd5a346, 0x9f45, 0x4126, { 0x99, 0x3a, 0x2a, 0x6e, 0x85, 0xbc, 0x9, 0x47 } };


static const GUID SID_PDDomDocument = 
{ 0x5ac8e54a, 0xdd13, 0x4630, { 0x84, 0x76, 0xf1, 0x69, 0xad, 0x93, 0x8b, 0x69 } };


static const GUID SID_GroupInfo = 
{ 0xde846b3b, 0x2bde, 0x41b9, { 0x9c, 0x6, 0x97, 0x1d, 0x23, 0x9f, 0xd, 0xe6 } };



extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AcrobatAccess_0000_0012_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree(     unsigned long *, VARIANT * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  VARIANT_UserSize64(     unsigned long *, unsigned long            , VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserMarshal64(  unsigned long *, unsigned char *, VARIANT * ); 
unsigned char * __RPC_USER  VARIANT_UserUnmarshal64(unsigned long *, unsigned char *, VARIANT * ); 
void                      __RPC_USER  VARIANT_UserFree64(     unsigned long *, VARIANT * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


