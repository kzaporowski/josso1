/* soapSSOIdentityManagerSOAPBindingProxy.h
   Generated by gSOAP 2.7.14 from josso-1.2.h
   Copyright(C) 2000-2009, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapSSOIdentityManagerSOAPBindingProxy_H
#define soapSSOIdentityManagerSOAPBindingProxy_H
#include "soapH.h"

class SOAP_CMAC SSOIdentityManagerSOAPBindingProxy : public soap
{ public:
	/// Endpoint URL of service 'SSOIdentityManagerSOAPBindingProxy' (change as needed)
	const char *soap_endpoint;
	/// Constructor
	SSOIdentityManagerSOAPBindingProxy();
	/// Constructor with copy of another engine state
	SSOIdentityManagerSOAPBindingProxy(const struct soap&);
	/// Constructor with engine input+output mode control
	SSOIdentityManagerSOAPBindingProxy(soap_mode iomode);
	/// Constructor with engine input and output mode control
	SSOIdentityManagerSOAPBindingProxy(soap_mode imode, soap_mode omode);
	/// Destructor frees deserialized data
	virtual	~SSOIdentityManagerSOAPBindingProxy();
	/// Initializer used by constructor
	virtual	void SSOIdentityManagerSOAPBindingProxy_init(soap_mode imode, soap_mode omode);
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Get SOAP Fault structure (NULL when absent)
	virtual	const SOAP_ENV__Fault *soap_fault();
	/// Get SOAP Fault string (NULL when absent)
	virtual	const char *soap_fault_string();
	/// Get SOAP Fault detail as string (NULL when absent)
	virtual	const char *soap_fault_detail();
	/// Force close connection (normally automatic, except for send_X ops)
	virtual	int soap_close_socket();
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif

	/// Web service operation 'findUserInSession' (returns error code or SOAP_OK)
	virtual	int findUserInSession(ns3__FindUserInSessionRequestType *ns3__FindUserInSessionRequest, ns3__FindUserInSessionResponseType *ns3__FindUserInSessionResponse);

	/// Web service operation 'findUserInSecurityDomain' (returns error code or SOAP_OK)
	virtual	int findUserInSecurityDomain(ns3__FindUserInSecurityDomainRequestType *ns3__FindUserInSecurityDomainRequest, ns3__FindUserInSecurityDomainResponseType *ns3__FindUserInSecurityDomainResponse);

	/// Web service operation 'findRolesBySSOSessionId' (returns error code or SOAP_OK)
	virtual	int findRolesBySSOSessionId(ns3__FindRolesBySSOSessionIdRequestType *ns3__FindRolesBySSOSessionIdRequest, ns3__FindRolesBySSOSessionIdResponseType *ns3__FindRolesBySSOSessionIdResponse);

	/// Web service operation 'userExists' (returns error code or SOAP_OK)
	virtual	int userExists(ns3__UserExistsRequestType *ns3__UserExistsRequest, ns3__UserExistsResponseType *ns3__UserExistsResponse);
};
#endif
