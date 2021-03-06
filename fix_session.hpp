//-------------------------------------------------------------------------------------------------
/*

Fix8 is released under the GNU LESSER GENERAL PUBLIC LICENSE Version 3.

Fix8 Open Source FIX Engine.
Copyright (C) 2010-16 David L. Dight <fix@fix8.org>

Fix8 is free software: you can  redistribute it and / or modify  it under the  terms of the
GNU Lesser General  Public License as  published  by the Free  Software Foundation,  either
version 3 of the License, or (at your option) any later version.

Fix8 is distributed in the hope  that it will be useful, but WITHOUT ANY WARRANTY;  without
even the  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.

You should  have received a copy of the GNU Lesser General Public  License along with Fix8.
If not, see <http://www.gnu.org/licenses/>.

*******************************************************************************************
*                Special note for Fix8 compiler generated source code                     *
*                                                                                         *
* Binary works  that are the results of compilation of code that is generated by the Fix8 *
* compiler  can be released  without releasing your  source code as  long as your  binary *
* links dynamically  against an  unmodified version of the Fix8 library.  You are however *
* required to leave the copyright text in the generated code.                             *
*                                                                                         *
*******************************************************************************************

BECAUSE THE PROGRAM IS  LICENSED FREE OF  CHARGE, THERE IS NO  WARRANTY FOR THE PROGRAM, TO
THE EXTENT  PERMITTED  BY  APPLICABLE  LAW.  EXCEPT WHEN  OTHERWISE  STATED IN  WRITING THE
COPYRIGHT HOLDERS AND/OR OTHER PARTIES  PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY
KIND,  EITHER EXPRESSED   OR   IMPLIED,  INCLUDING,  BUT   NOT  LIMITED   TO,  THE  IMPLIED
WARRANTIES  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS TO
THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU. SHOULD THE PROGRAM PROVE DEFECTIVE,
YOU ASSUME THE COST OF ALL NECESSARY SERVICING, REPAIR OR CORRECTION.

IN NO EVENT UNLESS REQUIRED  BY APPLICABLE LAW  OR AGREED TO IN  WRITING WILL ANY COPYRIGHT
HOLDER, OR  ANY OTHER PARTY  WHO MAY MODIFY  AND/OR REDISTRIBUTE  THE PROGRAM AS  PERMITTED
ABOVE,  BE  LIABLE  TO  YOU  FOR  DAMAGES,  INCLUDING  ANY  GENERAL, SPECIAL, INCIDENTAL OR
CONSEQUENTIAL DAMAGES ARISING OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT
NOT LIMITED TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR
THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS), EVEN IF SUCH
HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.

*/

//-------------------------------------------------------------------------------------------------
#include <fix8/f8config.h>
#if defined FIX8_MAGIC_NUM && FIX8_MAGIC_NUM > 16789508L
#error fix_session.hpp version 1.3.4 is out of date. Please regenerate with f8c.
#endif
//-------------------------------------------------------------------------------------------------
// fix_session.hpp
//-------------------------------------------------------------------------------------------------
#ifndef FIX8_6669785F73657373696F6E2E687070_
#define FIX8_6669785F73657373696F6E2E687070_

//-------------------------------------------------------------------------------------------------
// server session and router classes
//-------------------------------------------------------------------------------------------------
class fix_session_server;

class fix_router_server : public FIX8::FIXT1100::fix_Router
{
   fix_session_server& _session; 

public:
   fix_router_server(fix_session_server& session) : _session(session) {}
   virtual ~fix_router_server() {}

   // Override these methods to receive specific message callbacks.
   // bool operator() (const FIX8::FIXT1100::Heartbeat *msg) const;
   // bool operator() (const FIX8::FIXT1100::TestRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ResendRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::Reject *msg) const;
   // bool operator() (const FIX8::FIXT1100::SequenceReset *msg) const;
   // bool operator() (const FIX8::FIXT1100::Logout *msg) const;
   // bool operator() (const FIX8::FIXT1100::IOI *msg) const;
   // bool operator() (const FIX8::FIXT1100::Advertisement *msg) const;
   // bool operator() (const FIX8::FIXT1100::ExecutionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::Logon *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityList *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderMultileg *msg) const;
   // bool operator() (const FIX8::FIXT1100::MultilegOrderCancelReplace *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteRequestReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::RFQRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteStatusReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::Confirmation *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionMaintenanceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionMaintenanceReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::RequestForPositions *msg) const;
   // bool operator() (const FIX8::FIXT1100::RequestForPositionsAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportRequestAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationReportAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ConfirmationAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementInstructionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::AssignmentReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralAssignment *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::News *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralInquiry *msg) const;
   // bool operator() (const FIX8::FIXT1100::NetworkCounterpartySystemStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::NetworkCounterpartySystemStatusResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralInquiryAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ConfirmationRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionList *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AdjustedPositionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstructionAlert *msg) const;
   // bool operator() (const FIX8::FIXT1100::ExecutionAcknowledgement *msg) const;
   // bool operator() (const FIX8::FIXT1100::ContraryIntentionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinitionUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementObligationReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinitionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinition *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinitionUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageRequestAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassActionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::Email *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassActionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserNotification *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentReportACK *msg) const;
   // bool operator() (const FIX8::FIXT1100::PartyDetailsListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::PartyDetailsListReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderSingle *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderList *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelReplaceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstruction *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListExecute *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstructionAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::DontKnowTrade *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::Quote *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementInstructions *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataSnapshotFullRefresh *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataIncrementalRefresh *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataRequestReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteCancel *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MassQuoteAcknowledgement *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinitionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinition *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::MassQuote *msg) const;
   // bool operator() (const FIX8::FIXT1100::BusinessMessageReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::BidRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::BidResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStrikePrice *msg) const;
   // bool operator() (const FIX8::FIXT1100::RegistrationInstructions *msg) const;
   // bool operator() (const FIX8::FIXT1100::RegistrationInstructionsResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassCancelReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderCross *msg) const;
   // bool operator() (const FIX8::FIXT1100::CrossOrderCancelReplaceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::CrossOrderCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityTypeRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityTypes *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityList *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityListRequest *msg) const;
};

//-------------------------------------------------------------------------------------------------
class fix_session_server : public FIX8::Session
{
   fix_router_server _router; 

public:
	fix_session_server(const FIX8::F8MetaCntx& ctx, 
					  const FIX8::SessionID& sid,
		   			  FIX8::Persister *persist=0,
      				  FIX8::Logger *logger=0, 
		   			  FIX8::Logger *plogger=0) : 
	 FIX8::Session(ctx, sid, persist, logger, plogger), _router(*this) {} 

	fix_session_server(const FIX8::F8MetaCntx& ctx, 
					  const FIX8::sender_comp_id& sci,
		   			  FIX8::Persister *persist=0,
      				  FIX8::Logger *logger=0, 
		   			  FIX8::Logger *plogger=0) : 
	 FIX8::Session(ctx, sci, persist, logger, plogger), _router(*this) {} 

   // Override these methods if required but remember to call the base class method first.
   // bool handle_logon(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_logon(const unsigned heartbeat_interval, const f8String davi=f8String());
   // bool handle_logout(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_logout();
   // bool handle_heartbeat(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_heartbeat(const f8String& testReqID);
   // bool handle_resend_request(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_resend_request(const unsigned begin, const unsigned end=0);
   // bool handle_sequence_reset(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_sequence_reset(const unsigned newseqnum, const bool gapfillflag=false);
   // bool handle_test_request(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_test_request(const f8String& testReqID);
   // bool handle_reject(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_reject(const unsigned seqnum, const char *what);
   // bool handle_admin(const unsigned seqnum, const FIX8::Message *msg);
   // void modify_outbound(FIX8::Message *msg);
   // bool authenticate(SessionID& id, const FIX8::Message *msg);

   // Override these methods to intercept admin and application methods.
   // bool handle_admin(const unsigned seqnum, const FIX8::Message *msg);

   bool handle_application(const unsigned seqnum, const FIX8::Message *&msg)
   {
      return enforce(seqnum, msg) || msg->process(_router);
   }
   /* In your compilation unit, this should be implemented with something like the following:
   bool fix_session_server::handle_application(const unsigned seqnum, const FIX8::Message *&msg)
   {
      return enforce(seqnum, msg) || msg->process(_router);
   }
   */

   virtual ~fix_session_server(){}
};

class fix_session_client;

class fix_router_client : public FIX8::FIXT1100::fix_Router
{
   fix_session_client& _session; 

public:
   fix_router_client(fix_session_client& session) : _session(session) {}
   virtual ~fix_router_client() {}

   // Override these methods to receive specific message callbacks.
   // bool operator() (const FIX8::FIXT1100::Heartbeat *msg) const;
   // bool operator() (const FIX8::FIXT1100::TestRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ResendRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::Reject *msg) const;
   // bool operator() (const FIX8::FIXT1100::SequenceReset *msg) const;
   // bool operator() (const FIX8::FIXT1100::Logout *msg) const;
   // bool operator() (const FIX8::FIXT1100::IOI *msg) const;
   // bool operator() (const FIX8::FIXT1100::Advertisement *msg) const;
   // bool operator() (const FIX8::FIXT1100::ExecutionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::Logon *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityList *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderMultileg *msg) const;
   // bool operator() (const FIX8::FIXT1100::MultilegOrderCancelReplace *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteRequestReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::RFQRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteStatusReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::Confirmation *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionMaintenanceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionMaintenanceReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::RequestForPositions *msg) const;
   // bool operator() (const FIX8::FIXT1100::RequestForPositionsAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::PositionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportRequestAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradeCaptureReportAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationReportAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ConfirmationAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementInstructionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::AssignmentReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralAssignment *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::News *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralInquiry *msg) const;
   // bool operator() (const FIX8::FIXT1100::NetworkCounterpartySystemStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::NetworkCounterpartySystemStatusResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::CollateralInquiryAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ConfirmationRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionList *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AdjustedPositionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstructionAlert *msg) const;
   // bool operator() (const FIX8::FIXT1100::ExecutionAcknowledgement *msg) const;
   // bool operator() (const FIX8::FIXT1100::ContraryIntentionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinitionUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementObligationReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionListUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinitionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinition *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDefinitionUpdateReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageRequestAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::ApplicationMessageReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassActionReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::Email *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassActionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::UserNotification *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::StreamAssignmentReportACK *msg) const;
   // bool operator() (const FIX8::FIXT1100::PartyDetailsListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::PartyDetailsListReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderSingle *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderList *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderCancelReplaceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstruction *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListExecute *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::AllocationInstructionAck *msg) const;
   // bool operator() (const FIX8::FIXT1100::DontKnowTrade *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::Quote *msg) const;
   // bool operator() (const FIX8::FIXT1100::SettlementInstructions *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataSnapshotFullRefresh *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataIncrementalRefresh *msg) const;
   // bool operator() (const FIX8::FIXT1100::MarketDataRequestReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteCancel *msg) const;
   // bool operator() (const FIX8::FIXT1100::QuoteStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::MassQuoteAcknowledgement *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinitionRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityDefinition *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionStatusRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::TradingSessionStatus *msg) const;
   // bool operator() (const FIX8::FIXT1100::MassQuote *msg) const;
   // bool operator() (const FIX8::FIXT1100::BusinessMessageReject *msg) const;
   // bool operator() (const FIX8::FIXT1100::BidRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::BidResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::ListStrikePrice *msg) const;
   // bool operator() (const FIX8::FIXT1100::RegistrationInstructions *msg) const;
   // bool operator() (const FIX8::FIXT1100::RegistrationInstructionsResponse *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::OrderMassCancelReport *msg) const;
   // bool operator() (const FIX8::FIXT1100::NewOrderCross *msg) const;
   // bool operator() (const FIX8::FIXT1100::CrossOrderCancelReplaceRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::CrossOrderCancelRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityTypeRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityTypes *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityListRequest *msg) const;
   // bool operator() (const FIX8::FIXT1100::SecurityList *msg) const;
   // bool operator() (const FIX8::FIXT1100::DerivativeSecurityListRequest *msg) const;
};

//-------------------------------------------------------------------------------------------------
class fix_session_client : public FIX8::Session
{
   fix_router_client _router; 

public:
   fix_session_client(const FIX8::F8MetaCntx& ctx, 
		   			  const FIX8::SessionID& sid, 
		   			  FIX8::Persister *persist=0,
      				  FIX8::Logger *logger=0, 
		   			  FIX8::Logger *plogger=0) : 
	Session(ctx, sid, persist, logger, plogger), _router(*this) {} 

   fix_session_client(const FIX8::F8MetaCntx& ctx, 
					  const FIX8::sender_comp_id& sci,
		   			  FIX8::Persister *persist=0,
      				  FIX8::Logger *logger=0, 
		   			  FIX8::Logger *plogger=0) : 
	Session(ctx, sci, persist, logger, plogger), _router(*this) {} 

   // Override these methods if required but remember to call the base class method first.
   // bool handle_logon(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_logon(const unsigned heartbeat_interval, const f8String davi=f8String());
   // bool handle_logout(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_logout();
   // bool handle_heartbeat(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_heartbeat(const f8String& testReqID);
   // bool handle_resend_request(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_resend_request(const unsigned begin, const unsigned end=0);
   // bool handle_sequence_reset(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_sequence_reset(const unsigned newseqnum, const bool gapfillflag=false);
   // bool handle_test_request(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_test_request(const f8String& testReqID);
   // bool handle_reject(const unsigned seqnum, const FIX8::Message *msg);
   // Message *generate_reject(const unsigned seqnum, const char *what);
   // bool handle_admin(const unsigned seqnum, const FIX8::Message *msg);
   // void modify_outbound(FIX8::Message *msg);
   // bool authenticate(SessionID& id, const FIX8::Message *msg);

   // Override these methods to intercept admin and application methods.
   // bool handle_admin(const unsigned seqnum, const FIX8::Message *msg);

   bool handle_application(const unsigned seqnum, const FIX8::Message *&msg)
   {
      return enforce(seqnum, msg) || msg->process(_router);
   }
   /* In your compilation unit, this should be implemented with something like the following:
   bool fix_session_client::handle_application(const unsigned seqnum, const FIX8::Message *&msg)
   {
      return enforce(seqnum, msg) || msg->process(_router);
   }
   */

   virtual ~fix_session_client() {}
};

#endif // FIX8_6669785F73657373696F6E2E687070_
