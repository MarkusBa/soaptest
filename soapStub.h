/* soapStub.h
   Generated by gSOAP 2.8.21 from weather.h

Copyright(C) 2000-2014, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
GPL or Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef soapStub_H
#define soapStub_H
#include <vector>
#define SOAP_NAMESPACE_OF_ns1	"http://www.webserviceX.NET"
#include "stdsoap2.h"
#if GSOAP_VERSION != 20821
# error "GSOAP VERSION 20821 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE__ns1__GetWeather
#define SOAP_TYPE__ns1__GetWeather (8)
/* ns1:GetWeather */
class SOAP_CMAC _ns1__GetWeather
{
public:
	std::string *CityName;	/* optional element of type xsd:string */
	std::string *CountryName;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 8; } /* = unique type id SOAP_TYPE__ns1__GetWeather */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__GetWeather() { _ns1__GetWeather::soap_default(NULL); }
	virtual ~_ns1__GetWeather() { }
};
#endif

#ifndef SOAP_TYPE__ns1__GetWeatherResponse
#define SOAP_TYPE__ns1__GetWeatherResponse (9)
/* ns1:GetWeatherResponse */
class SOAP_CMAC _ns1__GetWeatherResponse
{
public:
	std::string *GetWeatherResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 9; } /* = unique type id SOAP_TYPE__ns1__GetWeatherResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__GetWeatherResponse() { _ns1__GetWeatherResponse::soap_default(NULL); }
	virtual ~_ns1__GetWeatherResponse() { }
};
#endif

#ifndef SOAP_TYPE__ns1__GetCitiesByCountry
#define SOAP_TYPE__ns1__GetCitiesByCountry (10)
/* ns1:GetCitiesByCountry */
class SOAP_CMAC _ns1__GetCitiesByCountry
{
public:
	std::string *CountryName;	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 10; } /* = unique type id SOAP_TYPE__ns1__GetCitiesByCountry */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__GetCitiesByCountry() { _ns1__GetCitiesByCountry::soap_default(NULL); }
	virtual ~_ns1__GetCitiesByCountry() { }
};
#endif

#ifndef SOAP_TYPE__ns1__GetCitiesByCountryResponse
#define SOAP_TYPE__ns1__GetCitiesByCountryResponse (11)
/* ns1:GetCitiesByCountryResponse */
class SOAP_CMAC _ns1__GetCitiesByCountryResponse
{
public:
	std::string *GetCitiesByCountryResult;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:string */
	struct soap *soap;	/* transient */
public:
	virtual int soap_type() const { return 11; } /* = unique type id SOAP_TYPE__ns1__GetCitiesByCountryResponse */
	virtual void soap_default(struct soap*);
	virtual void soap_serialize(struct soap*) const;
	virtual int soap_put(struct soap*, const char*, const char*) const;
	virtual int soap_out(struct soap*, const char*, int, const char*) const;
	virtual void *soap_get(struct soap*, const char*, const char*);
	virtual void *soap_in(struct soap*, const char*, const char*);
	         _ns1__GetCitiesByCountryResponse() { _ns1__GetCitiesByCountryResponse::soap_default(NULL); }
	virtual ~_ns1__GetCitiesByCountryResponse() { }
};
#endif

#ifndef SOAP_TYPE___ns1__GetWeather
#define SOAP_TYPE___ns1__GetWeather (18)
/* Operation wrapper: */
struct __ns1__GetWeather
{
public:
	_ns1__GetWeather *ns1__GetWeather;	/* optional element of type ns1:GetWeather */
public:
	int soap_type() const { return 18; } /* = unique type id SOAP_TYPE___ns1__GetWeather */
};
#endif

#ifndef SOAP_TYPE___ns1__GetCitiesByCountry
#define SOAP_TYPE___ns1__GetCitiesByCountry (22)
/* Operation wrapper: */
struct __ns1__GetCitiesByCountry
{
public:
	_ns1__GetCitiesByCountry *ns1__GetCitiesByCountry;	/* optional element of type ns1:GetCitiesByCountry */
public:
	int soap_type() const { return 22; } /* = unique type id SOAP_TYPE___ns1__GetCitiesByCountry */
};
#endif

#ifndef SOAP_TYPE___ns1__GetWeather_
#define SOAP_TYPE___ns1__GetWeather_ (24)
/* Operation wrapper: */
struct __ns1__GetWeather_
{
public:
	_ns1__GetWeather *ns1__GetWeather;	/* optional element of type ns1:GetWeather */
public:
	int soap_type() const { return 24; } /* = unique type id SOAP_TYPE___ns1__GetWeather_ */
};
#endif

#ifndef SOAP_TYPE___ns1__GetCitiesByCountry_
#define SOAP_TYPE___ns1__GetCitiesByCountry_ (26)
/* Operation wrapper: */
struct __ns1__GetCitiesByCountry_
{
public:
	_ns1__GetCitiesByCountry *ns1__GetCitiesByCountry;	/* optional element of type ns1:GetCitiesByCountry */
public:
	int soap_type() const { return 26; } /* = unique type id SOAP_TYPE___ns1__GetCitiesByCountry_ */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (27)
/* SOAP Header: */
struct SOAP_ENV__Header
{
public:
	int soap_type() const { return 27; } /* = unique type id SOAP_TYPE_SOAP_ENV__Header */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (28)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
public:
	int soap_type() const { return 28; } /* = unique type id SOAP_TYPE_SOAP_ENV__Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (30)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
public:
	int soap_type() const { return 30; } /* = unique type id SOAP_TYPE_SOAP_ENV__Detail */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (33)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
public:
	int soap_type() const { return 33; } /* = unique type id SOAP_TYPE_SOAP_ENV__Reason */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (34)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
public:
	int soap_type() const { return 34; } /* = unique type id SOAP_TYPE_SOAP_ENV__Fault */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Server-Side Operations                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetWeather(struct soap*, _ns1__GetWeather *ns1__GetWeather, _ns1__GetWeatherResponse &ns1__GetWeatherResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetCitiesByCountry(struct soap*, _ns1__GetCitiesByCountry *ns1__GetCitiesByCountry, _ns1__GetCitiesByCountryResponse &ns1__GetCitiesByCountryResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetWeather_(struct soap*, _ns1__GetWeather *ns1__GetWeather, _ns1__GetWeatherResponse &ns1__GetWeatherResponse);

SOAP_FMAC5 int SOAP_FMAC6 __ns1__GetCitiesByCountry_(struct soap*, _ns1__GetCitiesByCountry *ns1__GetCitiesByCountry, _ns1__GetCitiesByCountryResponse &ns1__GetCitiesByCountryResponse);

/******************************************************************************\
 *                                                                            *
 * Server-Side Skeletons to Invoke Service Operations                         *
 *                                                                            *
\******************************************************************************/

extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve(struct soap*);

extern "C" SOAP_FMAC5 int SOAP_FMAC6 soap_serve_request(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__GetWeather(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__GetCitiesByCountry(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__GetWeather_(struct soap*);

SOAP_FMAC5 int SOAP_FMAC6 soap_serve___ns1__GetCitiesByCountry_(struct soap*);

/******************************************************************************\
 *                                                                            *
 * Client-Side Call Stubs                                                     *
 *                                                                            *
\******************************************************************************/


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetWeather(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetWeather *ns1__GetWeather, _ns1__GetWeatherResponse &ns1__GetWeatherResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetCitiesByCountry(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetCitiesByCountry *ns1__GetCitiesByCountry, _ns1__GetCitiesByCountryResponse &ns1__GetCitiesByCountryResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetWeather_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetWeather *ns1__GetWeather, _ns1__GetWeatherResponse &ns1__GetWeatherResponse);

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__GetCitiesByCountry_(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns1__GetCitiesByCountry *ns1__GetCitiesByCountry, _ns1__GetCitiesByCountryResponse &ns1__GetCitiesByCountryResponse);

#endif

/* End of soapStub.h */