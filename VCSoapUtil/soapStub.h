/* soapStub.h
   Generated by gSOAP 2.8.66 for move.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include <vector>
#define SOAP_NAMESPACE_OF_VC1	"http://tempuri.org/"

#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20866
# error "GSOAP VERSION 20866 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class _VC1__DoOuterRCAVMvin;	/* move.h:148 */
class _VC1__DoOuterRCAVMvinResponse;	/* move.h:151 */
class _VC1__DoOuterRCAVMvou;	/* move.h:154 */
class _VC1__DoOuterRCAVMvouResponse;	/* move.h:157 */
struct __VCWeb__DoOuterRCAVMvin;	/* move.h:466 */
struct __VCWeb2__DoOuterRCAVMvin;	/* move.h:554 */
struct __VCWeb3__DoOuterRCAVMvou;	/* move.h:642 */
struct __VCWeb4__DoOuterRCAVMvou;	/* move.h:730 */

/* move.h:148 */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvin
#define SOAP_TYPE__VC1__DoOuterRCAVMvin (8)
/* complex XSD type 'VC1:DoOuterRCAVMvin': */
class SOAP_CMAC _VC1__DoOuterRCAVMvin {
      public:
        /// Optional element 'VC1:xmlInput' of XSD type 'xsd:string'
        std::string *xmlInput;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__VC1__DoOuterRCAVMvin
        virtual long soap_type(void) const { return SOAP_TYPE__VC1__DoOuterRCAVMvin; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _VC1__DoOuterRCAVMvin, default initialized and not managed by a soap context
        virtual _VC1__DoOuterRCAVMvin *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_VC1__DoOuterRCAVMvin); }
      public:
        /// Constructor with initializations
        _VC1__DoOuterRCAVMvin() : xmlInput(), soap() { }
        virtual ~_VC1__DoOuterRCAVMvin() { }
        /// Friend allocator used by soap_new__VC1__DoOuterRCAVMvin(struct soap*, int)
        friend SOAP_FMAC1 _VC1__DoOuterRCAVMvin * SOAP_FMAC2 soap_instantiate__VC1__DoOuterRCAVMvin(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:151 */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvinResponse
#define SOAP_TYPE__VC1__DoOuterRCAVMvinResponse (9)
/* complex XSD type 'VC1:DoOuterRCAVMvinResponse': */
class SOAP_CMAC _VC1__DoOuterRCAVMvinResponse {
      public:
        /// Optional element 'VC1:DoOuterRCAVMvinResult' of XSD type 'xsd:string'
        std::string *DoOuterRCAVMvinResult;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__VC1__DoOuterRCAVMvinResponse
        virtual long soap_type(void) const { return SOAP_TYPE__VC1__DoOuterRCAVMvinResponse; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _VC1__DoOuterRCAVMvinResponse, default initialized and not managed by a soap context
        virtual _VC1__DoOuterRCAVMvinResponse *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_VC1__DoOuterRCAVMvinResponse); }
      public:
        /// Constructor with initializations
        _VC1__DoOuterRCAVMvinResponse() : DoOuterRCAVMvinResult(), soap() { }
        virtual ~_VC1__DoOuterRCAVMvinResponse() { }
        /// Friend allocator used by soap_new__VC1__DoOuterRCAVMvinResponse(struct soap*, int)
        friend SOAP_FMAC1 _VC1__DoOuterRCAVMvinResponse * SOAP_FMAC2 soap_instantiate__VC1__DoOuterRCAVMvinResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:154 */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvou
#define SOAP_TYPE__VC1__DoOuterRCAVMvou (10)
/* complex XSD type 'VC1:DoOuterRCAVMvou': */
class SOAP_CMAC _VC1__DoOuterRCAVMvou {
      public:
        /// Optional element 'VC1:xmlInput' of XSD type 'xsd:string'
        std::string *xmlInput;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__VC1__DoOuterRCAVMvou
        virtual long soap_type(void) const { return SOAP_TYPE__VC1__DoOuterRCAVMvou; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _VC1__DoOuterRCAVMvou, default initialized and not managed by a soap context
        virtual _VC1__DoOuterRCAVMvou *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_VC1__DoOuterRCAVMvou); }
      public:
        /// Constructor with initializations
        _VC1__DoOuterRCAVMvou() : xmlInput(), soap() { }
        virtual ~_VC1__DoOuterRCAVMvou() { }
        /// Friend allocator used by soap_new__VC1__DoOuterRCAVMvou(struct soap*, int)
        friend SOAP_FMAC1 _VC1__DoOuterRCAVMvou * SOAP_FMAC2 soap_instantiate__VC1__DoOuterRCAVMvou(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:157 */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvouResponse
#define SOAP_TYPE__VC1__DoOuterRCAVMvouResponse (11)
/* complex XSD type 'VC1:DoOuterRCAVMvouResponse': */
class SOAP_CMAC _VC1__DoOuterRCAVMvouResponse {
      public:
        /// Optional element 'VC1:DoOuterRCAVMvouResult' of XSD type 'xsd:string'
        std::string *DoOuterRCAVMvouResult;
        /// Context that manages this object
        struct soap *soap;
      public:
        /// Return unique type id SOAP_TYPE__VC1__DoOuterRCAVMvouResponse
        virtual long soap_type(void) const { return SOAP_TYPE__VC1__DoOuterRCAVMvouResponse; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type _VC1__DoOuterRCAVMvouResponse, default initialized and not managed by a soap context
        virtual _VC1__DoOuterRCAVMvouResponse *soap_alloc(void) const { return SOAP_NEW_UNMANAGED(_VC1__DoOuterRCAVMvouResponse); }
      public:
        /// Constructor with initializations
        _VC1__DoOuterRCAVMvouResponse() : DoOuterRCAVMvouResult(), soap() { }
        virtual ~_VC1__DoOuterRCAVMvouResponse() { }
        /// Friend allocator used by soap_new__VC1__DoOuterRCAVMvouResponse(struct soap*, int)
        friend SOAP_FMAC1 _VC1__DoOuterRCAVMvouResponse * SOAP_FMAC2 soap_instantiate__VC1__DoOuterRCAVMvouResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:466 */
#ifndef SOAP_TYPE___VCWeb__DoOuterRCAVMvin
#define SOAP_TYPE___VCWeb__DoOuterRCAVMvin (18)
/* Wrapper: */
struct SOAP_CMAC __VCWeb__DoOuterRCAVMvin {
      public:
        /** Optional element 'VC1:DoOuterRCAVMvin' of XSD type 'VC1:DoOuterRCAVMvin' */
        _VC1__DoOuterRCAVMvin *VC1__DoOuterRCAVMvin;
      public:
        /** Return unique type id SOAP_TYPE___VCWeb__DoOuterRCAVMvin */
        long soap_type() const { return SOAP_TYPE___VCWeb__DoOuterRCAVMvin; }
        /** Constructor with member initializations */
        __VCWeb__DoOuterRCAVMvin() : VC1__DoOuterRCAVMvin() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __VCWeb__DoOuterRCAVMvin * SOAP_FMAC2 soap_instantiate___VCWeb__DoOuterRCAVMvin(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:554 */
#ifndef SOAP_TYPE___VCWeb2__DoOuterRCAVMvin
#define SOAP_TYPE___VCWeb2__DoOuterRCAVMvin (20)
/* Wrapper: */
struct SOAP_CMAC __VCWeb2__DoOuterRCAVMvin {
      public:
        /** Optional element 'VC1:DoOuterRCAVMvin' of XSD type 'VC1:DoOuterRCAVMvin' */
        _VC1__DoOuterRCAVMvin *VC1__DoOuterRCAVMvin;
      public:
        /** Return unique type id SOAP_TYPE___VCWeb2__DoOuterRCAVMvin */
        long soap_type() const { return SOAP_TYPE___VCWeb2__DoOuterRCAVMvin; }
        /** Constructor with member initializations */
        __VCWeb2__DoOuterRCAVMvin() : VC1__DoOuterRCAVMvin() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __VCWeb2__DoOuterRCAVMvin * SOAP_FMAC2 soap_instantiate___VCWeb2__DoOuterRCAVMvin(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:642 */
#ifndef SOAP_TYPE___VCWeb3__DoOuterRCAVMvou
#define SOAP_TYPE___VCWeb3__DoOuterRCAVMvou (24)
/* Wrapper: */
struct SOAP_CMAC __VCWeb3__DoOuterRCAVMvou {
      public:
        /** Optional element 'VC1:DoOuterRCAVMvou' of XSD type 'VC1:DoOuterRCAVMvou' */
        _VC1__DoOuterRCAVMvou *VC1__DoOuterRCAVMvou;
      public:
        /** Return unique type id SOAP_TYPE___VCWeb3__DoOuterRCAVMvou */
        long soap_type() const { return SOAP_TYPE___VCWeb3__DoOuterRCAVMvou; }
        /** Constructor with member initializations */
        __VCWeb3__DoOuterRCAVMvou() : VC1__DoOuterRCAVMvou() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __VCWeb3__DoOuterRCAVMvou * SOAP_FMAC2 soap_instantiate___VCWeb3__DoOuterRCAVMvou(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:730 */
#ifndef SOAP_TYPE___VCWeb4__DoOuterRCAVMvou
#define SOAP_TYPE___VCWeb4__DoOuterRCAVMvou (26)
/* Wrapper: */
struct SOAP_CMAC __VCWeb4__DoOuterRCAVMvou {
      public:
        /** Optional element 'VC1:DoOuterRCAVMvou' of XSD type 'VC1:DoOuterRCAVMvou' */
        _VC1__DoOuterRCAVMvou *VC1__DoOuterRCAVMvou;
      public:
        /** Return unique type id SOAP_TYPE___VCWeb4__DoOuterRCAVMvou */
        long soap_type() const { return SOAP_TYPE___VCWeb4__DoOuterRCAVMvou; }
        /** Constructor with member initializations */
        __VCWeb4__DoOuterRCAVMvou() : VC1__DoOuterRCAVMvou() { }
        /** Friend allocator */
        friend SOAP_FMAC1 __VCWeb4__DoOuterRCAVMvou * SOAP_FMAC2 soap_instantiate___VCWeb4__DoOuterRCAVMvou(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* move.h:851 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (27)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* move.h:851 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (28)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* move.h:851 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (30)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* move.h:851 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (33)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* move.h:851 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (34)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* std::string has binding name 'std__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (12)
#endif

/* _VC1__DoOuterRCAVMvouResponse has binding name '_VC1__DoOuterRCAVMvouResponse' for type '' */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvouResponse
#define SOAP_TYPE__VC1__DoOuterRCAVMvouResponse (11)
#endif

/* _VC1__DoOuterRCAVMvou has binding name '_VC1__DoOuterRCAVMvou' for type '' */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvou
#define SOAP_TYPE__VC1__DoOuterRCAVMvou (10)
#endif

/* _VC1__DoOuterRCAVMvinResponse has binding name '_VC1__DoOuterRCAVMvinResponse' for type '' */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvinResponse
#define SOAP_TYPE__VC1__DoOuterRCAVMvinResponse (9)
#endif

/* _VC1__DoOuterRCAVMvin has binding name '_VC1__DoOuterRCAVMvin' for type '' */
#ifndef SOAP_TYPE__VC1__DoOuterRCAVMvin
#define SOAP_TYPE__VC1__DoOuterRCAVMvin (8)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (34)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (33)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (30)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (28)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (27)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (36)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (35)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (29)
#endif

/* _VC1__DoOuterRCAVMvou * has binding name 'PointerTo_VC1__DoOuterRCAVMvou' for type '' */
#ifndef SOAP_TYPE_PointerTo_VC1__DoOuterRCAVMvou
#define SOAP_TYPE_PointerTo_VC1__DoOuterRCAVMvou (21)
#endif

/* _VC1__DoOuterRCAVMvin * has binding name 'PointerTo_VC1__DoOuterRCAVMvin' for type '' */
#ifndef SOAP_TYPE_PointerTo_VC1__DoOuterRCAVMvin
#define SOAP_TYPE_PointerTo_VC1__DoOuterRCAVMvin (15)
#endif

/* std::string * has binding name 'PointerTostd__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_PointerTostd__string
#define SOAP_TYPE_PointerTostd__string (13)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
