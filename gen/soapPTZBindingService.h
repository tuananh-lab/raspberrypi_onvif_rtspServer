/* soapPTZBindingService.h
   Generated by gSOAP 2.8.91 for gen/onvif.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#ifndef soapPTZBindingService_H
#define soapPTZBindingService_H
#include "soapH.h"

    class SOAP_CMAC PTZBindingService {
      public:
        /// Context to manage service IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this service and should be deleted by the destructor
        bool soap_own;
        /// Variables globally declared in gen/onvif.h, if any
        /// Construct a service with new managing context
        PTZBindingService();
        /// Copy constructor
        PTZBindingService(const PTZBindingService&);
        /// Construct service given a shared managing context
        PTZBindingService(struct soap*);
        /// Constructor taking input+output mode flags for the new managing context
        PTZBindingService(soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        PTZBindingService(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~PTZBindingService();
        /// Delete all deserialized data (with soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to defaults
        virtual void reset();
        /// Initializer used by constructors
        virtual void PTZBindingService_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual PTZBindingService *copy() SOAP_PURE_VIRTUAL_COPY;
        /// Copy assignment
        PTZBindingService& operator=(const PTZBindingService&);
        /// Close connection (normally automatic)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Return sender-related fault to sender
        virtual int soap_senderfault(const char *string, const char *detailXML);
        /// Return sender-related fault with SOAP 1.2 subcode to sender
        virtual int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Return receiver-related fault to sender
        virtual int soap_receiverfault(const char *string, const char *detailXML);
        /// Return receiver-related fault with SOAP 1.2 subcode to sender
        virtual int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct wsdd__AppSequenceType *wsdd__AppSequence, struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action, struct chan__ChannelInstanceType *chan__ChannelInstance);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
    #ifndef WITH_NOIO
        /// Run simple single-thread (iterative, non-SSL) service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int run(int port, int backlog = 1);
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// Run simple single-thread SSL service on port until a connection error occurs (returns SOAP_OK or error code), use this->bind_flag = SO_REUSEADDR to rebind for immediate rerun
        virtual int ssl_run(int port, int backlog = 1);
    #endif
        /// Bind service to port (returns master socket or SOAP_INVALID_SOCKET upon error)
        virtual SOAP_SOCKET bind(const char *host, int port, int backlog);
        /// Accept next request (returns socket or SOAP_INVALID_SOCKET upon error)
        virtual SOAP_SOCKET accept();
    #if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
        /// When SSL is used, after accept() should perform and accept SSL handshake
        virtual int ssl_accept();
    #endif
    #endif
        /// After accept() serve the pending request (returns SOAP_OK or error code)
        virtual int serve();
        /// Used by serve() to dispatch a pending request (returns SOAP_OK or error code)
        virtual int dispatch();
        virtual int dispatch(struct soap *soap);
        //
        // Service operations are listed below: you should define these
        // Note: compile with -DWITH_PURE_VIRTUAL to declare pure virtual methods
        //
        /// Web service operation 'GetServiceCapabilities' implementation, should return SOAP_OK or error code
        virtual int GetServiceCapabilities(_tptz__GetServiceCapabilities *tptz__GetServiceCapabilities, _tptz__GetServiceCapabilitiesResponse &tptz__GetServiceCapabilitiesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetConfigurations' implementation, should return SOAP_OK or error code
        virtual int GetConfigurations(_tptz__GetConfigurations *tptz__GetConfigurations, _tptz__GetConfigurationsResponse &tptz__GetConfigurationsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPresets' implementation, should return SOAP_OK or error code
        virtual int GetPresets(_tptz__GetPresets *tptz__GetPresets, _tptz__GetPresetsResponse &tptz__GetPresetsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetPreset' implementation, should return SOAP_OK or error code
        virtual int SetPreset(_tptz__SetPreset *tptz__SetPreset, _tptz__SetPresetResponse &tptz__SetPresetResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RemovePreset' implementation, should return SOAP_OK or error code
        virtual int RemovePreset(_tptz__RemovePreset *tptz__RemovePreset, _tptz__RemovePresetResponse &tptz__RemovePresetResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GotoPreset' implementation, should return SOAP_OK or error code
        virtual int GotoPreset(_tptz__GotoPreset *tptz__GotoPreset, _tptz__GotoPresetResponse &tptz__GotoPresetResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetStatus' implementation, should return SOAP_OK or error code
        virtual int GetStatus(_tptz__GetStatus *tptz__GetStatus, _tptz__GetStatusResponse &tptz__GetStatusResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetConfiguration' implementation, should return SOAP_OK or error code
        virtual int GetConfiguration(_tptz__GetConfiguration *tptz__GetConfiguration, _tptz__GetConfigurationResponse &tptz__GetConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNodes' implementation, should return SOAP_OK or error code
        virtual int GetNodes(_tptz__GetNodes *tptz__GetNodes, _tptz__GetNodesResponse &tptz__GetNodesResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetNode' implementation, should return SOAP_OK or error code
        virtual int GetNode(_tptz__GetNode *tptz__GetNode, _tptz__GetNodeResponse &tptz__GetNodeResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetConfiguration' implementation, should return SOAP_OK or error code
        virtual int SetConfiguration(_tptz__SetConfiguration *tptz__SetConfiguration, _tptz__SetConfigurationResponse &tptz__SetConfigurationResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetConfigurationOptions' implementation, should return SOAP_OK or error code
        virtual int GetConfigurationOptions(_tptz__GetConfigurationOptions *tptz__GetConfigurationOptions, _tptz__GetConfigurationOptionsResponse &tptz__GetConfigurationOptionsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GotoHomePosition' implementation, should return SOAP_OK or error code
        virtual int GotoHomePosition(_tptz__GotoHomePosition *tptz__GotoHomePosition, _tptz__GotoHomePositionResponse &tptz__GotoHomePositionResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SetHomePosition' implementation, should return SOAP_OK or error code
        virtual int SetHomePosition(_tptz__SetHomePosition *tptz__SetHomePosition, _tptz__SetHomePositionResponse &tptz__SetHomePositionResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'ContinuousMove' implementation, should return SOAP_OK or error code
        virtual int ContinuousMove(_tptz__ContinuousMove *tptz__ContinuousMove, _tptz__ContinuousMoveResponse &tptz__ContinuousMoveResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RelativeMove' implementation, should return SOAP_OK or error code
        virtual int RelativeMove(_tptz__RelativeMove *tptz__RelativeMove, _tptz__RelativeMoveResponse &tptz__RelativeMoveResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'SendAuxiliaryCommand' implementation, should return SOAP_OK or error code
        virtual int SendAuxiliaryCommand(_tptz__SendAuxiliaryCommand *tptz__SendAuxiliaryCommand, _tptz__SendAuxiliaryCommandResponse &tptz__SendAuxiliaryCommandResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'AbsoluteMove' implementation, should return SOAP_OK or error code
        virtual int AbsoluteMove(_tptz__AbsoluteMove *tptz__AbsoluteMove, _tptz__AbsoluteMoveResponse &tptz__AbsoluteMoveResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'Stop' implementation, should return SOAP_OK or error code
        virtual int Stop(_tptz__Stop *tptz__Stop, _tptz__StopResponse &tptz__StopResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPresetTours' implementation, should return SOAP_OK or error code
        virtual int GetPresetTours(_tptz__GetPresetTours *tptz__GetPresetTours, _tptz__GetPresetToursResponse &tptz__GetPresetToursResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPresetTour' implementation, should return SOAP_OK or error code
        virtual int GetPresetTour(_tptz__GetPresetTour *tptz__GetPresetTour, _tptz__GetPresetTourResponse &tptz__GetPresetTourResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetPresetTourOptions' implementation, should return SOAP_OK or error code
        virtual int GetPresetTourOptions(_tptz__GetPresetTourOptions *tptz__GetPresetTourOptions, _tptz__GetPresetTourOptionsResponse &tptz__GetPresetTourOptionsResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'CreatePresetTour' implementation, should return SOAP_OK or error code
        virtual int CreatePresetTour(_tptz__CreatePresetTour *tptz__CreatePresetTour, _tptz__CreatePresetTourResponse &tptz__CreatePresetTourResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'ModifyPresetTour' implementation, should return SOAP_OK or error code
        virtual int ModifyPresetTour(_tptz__ModifyPresetTour *tptz__ModifyPresetTour, _tptz__ModifyPresetTourResponse &tptz__ModifyPresetTourResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'OperatePresetTour' implementation, should return SOAP_OK or error code
        virtual int OperatePresetTour(_tptz__OperatePresetTour *tptz__OperatePresetTour, _tptz__OperatePresetTourResponse &tptz__OperatePresetTourResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'RemovePresetTour' implementation, should return SOAP_OK or error code
        virtual int RemovePresetTour(_tptz__RemovePresetTour *tptz__RemovePresetTour, _tptz__RemovePresetTourResponse &tptz__RemovePresetTourResponse) SOAP_PURE_VIRTUAL;
        //
        /// Web service operation 'GetCompatibleConfigurations' implementation, should return SOAP_OK or error code
        virtual int GetCompatibleConfigurations(_tptz__GetCompatibleConfigurations *tptz__GetCompatibleConfigurations, _tptz__GetCompatibleConfigurationsResponse &tptz__GetCompatibleConfigurationsResponse) SOAP_PURE_VIRTUAL;
    };
#endif