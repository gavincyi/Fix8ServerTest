//-------------------------------------------------------------------------------------------------
// *** f8c generated file: DO NOT EDIT! Created: 2016-05-05 07:07:03 ***
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
#error fix_classes.cpp version 1.3.4 is out of date. Please regenerate with f8c.
#endif
//-------------------------------------------------------------------------------------------------
// fix_classes.cpp
//-------------------------------------------------------------------------------------------------
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <iterator>
#include <algorithm>
#include <cerrno>
#include <string.h>
// f8 includes
#include <fix8/f8exception.hpp>
#include <fix8/hypersleep.hpp>
#include <fix8/mpmc.hpp>
#include <fix8/thread.hpp>
#include <fix8/f8types.hpp>
#include <fix8/f8utils.hpp>
#include <fix8/tickval.hpp>
#include <fix8/logger.hpp>
#include <fix8/traits.hpp>
#include <fix8/field.hpp>
#include <fix8/message.hpp>
#include "fix_types.hpp"
#include "fix_router.hpp"
#include "fix_classes.hpp"
//-------------------------------------------------------------------------------------------------
namespace FIX8 {
namespace FIXT1100 {

namespace {

//-------------------------------------------------------------------------------------------------

const char *cn[] // Component names
{
   "",
   "AffectedOrdGrp", // 1
   "AllocAckGrp", // 2
   "AllocGrp", // 3
   "AltPtysSubGrp", // 4
   "ApplIDReportGrp", // 5
   "ApplIDRequestAckGrp", // 6
   "ApplIDRequestGrp", // 7
   "ApplicationSequenceControl", // 8
   "AttrbGrp", // 9
   "BaseTradingRules", // 10
   "BidCompReqGrp", // 11
   "BidCompRspGrp", // 12
   "BidDescReqGrp", // 13
   "ClrInstGrp", // 14
   "CollInqQualGrp", // 15
   "CommissionData", // 16
   "CompIDReqGrp", // 17
   "CompIDStatGrp", // 18
   "ComplexEventDates", // 19
   "ComplexEventTimes", // 20
   "ComplexEvents", // 21
   "ContAmtGrp", // 22
   "ContextParties", // 23
   "ContextPtysSubGrp", // 24
   "ContraGrp", // 25
   "CpctyConfGrp", // 26
   "DerivativeEventsGrp", // 27
   "DerivativeInstrument", // 28
   "DerivativeInstrumentAttribute", // 29
   "DerivativeInstrumentParties", // 30
   "DerivativeInstrumentPartySubIDsGrp", // 31
   "DerivativeSecurityAltIDGrp", // 32
   "DerivativeSecurityDefinition", // 33
   "DerivativeSecurityXML", // 34
   "DiscretionInstructions", // 35
   "DisplayInstruction", // 36
   "DlvyInstGrp", // 37
   "EvntGrp", // 38
   "ExecAllocGrp", // 39
   "ExecCollGrp", // 40
   "ExecInstRules", // 41
   "ExpirationQty", // 42
   "FillsGrp", // 43
   "FinancingDetails", // 44
   "HopGrp", // 45
   "IOIQualGrp", // 46
   "InstrmtGrp", // 47
   "InstrmtLegExecGrp", // 48
   "InstrmtLegGrp", // 49
   "InstrmtLegIOIGrp", // 50
   "InstrmtLegSecListGrp", // 51
   "InstrmtMDReqGrp", // 52
   "InstrmtStrkPxGrp", // 53
   "Instrument", // 54
   "InstrumentExtension", // 55
   "InstrumentLeg", // 56
   "InstrumentParties", // 57
   "InstrumentPtysSubGrp", // 58
   "LegBenchmarkCurveData", // 59
   "LegOrdGrp", // 60
   "LegPreAllocGrp", // 61
   "LegQuotGrp", // 62
   "LegQuotStatGrp", // 63
   "LegSecAltIDGrp", // 64
   "LegStipulations", // 65
   "LinesOfTextGrp", // 66
   "ListOrdGrp", // 67
   "LotTypeRules", // 68
   "MDFullGrp", // 69
   "MDIncGrp", // 70
   "MDReqGrp", // 71
   "MDRjctGrp", // 72
   "MarketDataFeedTypes", // 73
   "MarketSegmentGrp", // 74
   "MatchRules", // 75
   "MaturityRules", // 76
   "MiscFeesGrp", // 77
   "MsgTypeGrp", // 78
   "NestedInstrumentAttribute", // 79
   "NestedParties", // 80
   "NestedParties2", // 81
   "NestedParties3", // 82
   "NestedParties4", // 83
   "NewsRefGrp", // 84
   "NotAffectedOrdersGrp", // 85
   "NstdPtys2SubGrp", // 86
   "NstdPtys3SubGrp", // 87
   "NstdPtys4SubGrp", // 88
   "NstdPtysSubGrp", // 89
   "OrdAllocGrp", // 90
   "OrdListStatGrp", // 91
   "OrdTypeRules", // 92
   "OrderQtyData", // 93
   "Parties", // 94
   "PartyAltIDs", // 95
   "PartyDetail", // 96
   "PartyListGrp", // 97
   "PartyListResponseTypeGrp", // 98
   "PartyRelationships", // 99
   "PegInstructions", // 100
   "PosUndInstrmtGrp", // 101
   "PositionAmountData", // 102
   "PositionQty", // 103
   "PreAllocGrp", // 104
   "PreAllocMlegGrp", // 105
   "PriceLimits", // 106
   "PtysSubGrp", // 107
   "QuotCxlEntriesGrp", // 108
   "QuotEntryAckGrp", // 109
   "QuotEntryGrp", // 110
   "QuotQualGrp", // 111
   "QuotReqGrp", // 112
   "QuotReqLegsGrp", // 113
   "QuotReqRjctGrp", // 114
   "QuotSetAckGrp", // 115
   "QuotSetGrp", // 116
   "RFQReqGrp", // 117
   "RateSource", // 118
   "RelSymDerivSecGrp", // 119
   "RelSymDerivSecUpdGrp", // 120
   "RelatedAltPtysSubGrp", // 121
   "RelatedContextParties", // 122
   "RelatedContextPtysSubGrp", // 123
   "RelatedPartyAltIDs", // 124
   "RelatedPartyDetail", // 125
   "RelatedPartyGrp", // 126
   "RelatedPtysSubGrp", // 127
   "RelationshipRiskInstrumentScope", // 128
   "RelationshipRiskLimits", // 129
   "RelationshipRiskSecAltIDGrp", // 130
   "RelationshipRiskWarningLevels", // 131
   "RequestedPartyRoleGrp", // 132
   "RgstDistInstGrp", // 133
   "RgstDtlsGrp", // 134
   "RiskInstrumentScope", // 135
   "RiskLimits", // 136
   "RiskSecAltIDGrp", // 137
   "RiskWarningLevels", // 138
   "RootParties", // 139
   "RootSubParties", // 140
   "RoutingGrp", // 141
   "SecAltIDGrp", // 142
   "SecListGrp", // 143
   "SecLstUpdRelSymGrp", // 144
   "SecLstUpdRelSymsLegGrp", // 145
   "SecSizesGrp", // 146
   "SecTypesGrp", // 147
   "SecondaryPriceLimits", // 148
   "SecurityTradingRules", // 149
   "SecurityXML", // 150
   "SettlDetails", // 151
   "SettlInstGrp", // 152
   "SettlInstructionsData", // 153
   "SettlObligationInstructions", // 154
   "SettlParties", // 155
   "SettlPtysSubGrp", // 156
   "SideCrossOrdCxlGrp", // 157
   "SideCrossOrdModGrp", // 158
   "SideTrdRegTS", // 159
   "SpreadOrBenchmarkCurveData", // 160
   "StatsIndGrp", // 161
   "Stipulations", // 162
   "StrategyParametersGrp", // 163
   "StrikeRules", // 164
   "StrmAsgnReqGrp", // 165
   "StrmAsgnReqInstrmtGrp", // 166
   "StrmAsgnRptGrp", // 167
   "StrmAsgnRptInstrmtGrp", // 168
   "TargetParties", // 169
   "TickRules", // 170
   "TimeInForceRules", // 171
   "TradeCapLegUnderlyingsGrp", // 172
   "TradeReportOrderDetail", // 173
   "TradingSessionRules", // 174
   "TradingSessionRulesGrp", // 175
   "TrdAllocGrp", // 176
   "TrdCapDtGrp", // 177
   "TrdCapRptAckSideGrp", // 178
   "TrdCapRptSideGrp", // 179
   "TrdCollGrp", // 180
   "TrdInstrmtLegGrp", // 181
   "TrdRegTimestamps", // 182
   "TrdRepIndicatorsGrp", // 183
   "TrdSessLstGrp", // 184
   "TrdgSesGrp", // 185
   "TriggeringInstruction", // 186
   "UndInstrmtCollGrp", // 187
   "UndInstrmtGrp", // 188
   "UndSecAltIDGrp", // 189
   "UnderlyingAmount", // 190
   "UnderlyingInstrument", // 191
   "UnderlyingLegInstrument", // 192
   "UnderlyingLegSecurityAltIDGrp", // 193
   "UnderlyingStipulations", // 194
   "UndlyInstrumentParties", // 195
   "UndlyInstrumentPtysSubGrp", // 196
   "UsernameGrp", // 197
   "YieldData", // 198
};

} // namespace

//-------------------------------------------------------------------------------------------------
const FIXT1100::fix_BaseMsgEntry::Pair msgpairs[] 
{
   { "0", { Type2Type<FIXT1100::Heartbeat>(), "Heartbeat" } },
   { "1", { Type2Type<FIXT1100::TestRequest>(), "TestRequest" } },
   { "2", { Type2Type<FIXT1100::ResendRequest>(), "ResendRequest" } },
   { "3", { Type2Type<FIXT1100::Reject>(), "Reject" } },
   { "4", { Type2Type<FIXT1100::SequenceReset>(), "SequenceReset" } },
   { "5", { Type2Type<FIXT1100::Logout>(), "Logout" } },
   { "6", { Type2Type<FIXT1100::IOI>(), "IOI" } },
   { "7", { Type2Type<FIXT1100::Advertisement>(), "Advertisement" } },
   { "8", { Type2Type<FIXT1100::ExecutionReport>(), "ExecutionReport" } },
   { "9", { Type2Type<FIXT1100::OrderCancelReject>(), "OrderCancelReject" } },
   { "A", { Type2Type<FIXT1100::Logon>(), "Logon" } },
   { "AA", { Type2Type<FIXT1100::DerivativeSecurityList>(), "DerivativeSecurityList" } },
   { "AB", { Type2Type<FIXT1100::NewOrderMultileg>(), "NewOrderMultileg" } },
   { "AC", { Type2Type<FIXT1100::MultilegOrderCancelReplace>(), "MultilegOrderCancelReplace" } },
   { "AD", { Type2Type<FIXT1100::TradeCaptureReportRequest>(), "TradeCaptureReportRequest" } },
   { "AE", { Type2Type<FIXT1100::TradeCaptureReport>(), "TradeCaptureReport" } },
   { "AF", { Type2Type<FIXT1100::OrderMassStatusRequest>(), "OrderMassStatusRequest" } },
   { "AG", { Type2Type<FIXT1100::QuoteRequestReject>(), "QuoteRequestReject" } },
   { "AH", { Type2Type<FIXT1100::RFQRequest>(), "RFQRequest" } },
   { "AI", { Type2Type<FIXT1100::QuoteStatusReport>(), "QuoteStatusReport" } },
   { "AJ", { Type2Type<FIXT1100::QuoteResponse>(), "QuoteResponse" } },
   { "AK", { Type2Type<FIXT1100::Confirmation>(), "Confirmation" } },
   { "AL", { Type2Type<FIXT1100::PositionMaintenanceRequest>(), "PositionMaintenanceRequest" } },
   { "AM", { Type2Type<FIXT1100::PositionMaintenanceReport>(), "PositionMaintenanceReport" } },
   { "AN", { Type2Type<FIXT1100::RequestForPositions>(), "RequestForPositions" } },
   { "AO", { Type2Type<FIXT1100::RequestForPositionsAck>(), "RequestForPositionsAck" } },
   { "AP", { Type2Type<FIXT1100::PositionReport>(), "PositionReport" } },
   { "AQ", { Type2Type<FIXT1100::TradeCaptureReportRequestAck>(), "TradeCaptureReportRequestAck" } },
   { "AR", { Type2Type<FIXT1100::TradeCaptureReportAck>(), "TradeCaptureReportAck" } },
   { "AS", { Type2Type<FIXT1100::AllocationReport>(), "AllocationReport" } },
   { "AT", { Type2Type<FIXT1100::AllocationReportAck>(), "AllocationReportAck" } },
   { "AU", { Type2Type<FIXT1100::ConfirmationAck>(), "ConfirmationAck" } },
   { "AV", { Type2Type<FIXT1100::SettlementInstructionRequest>(), "SettlementInstructionRequest" } },
   { "AW", { Type2Type<FIXT1100::AssignmentReport>(), "AssignmentReport" } },
   { "AX", { Type2Type<FIXT1100::CollateralRequest>(), "CollateralRequest" } },
   { "AY", { Type2Type<FIXT1100::CollateralAssignment>(), "CollateralAssignment" } },
   { "AZ", { Type2Type<FIXT1100::CollateralResponse>(), "CollateralResponse" } },
   { "B", { Type2Type<FIXT1100::News>(), "News" } },
   { "BA", { Type2Type<FIXT1100::CollateralReport>(), "CollateralReport" } },
   { "BB", { Type2Type<FIXT1100::CollateralInquiry>(), "CollateralInquiry" } },
   { "BC", { Type2Type<FIXT1100::NetworkCounterpartySystemStatusRequest>(), "NetworkCounterpartySystemStatusRequest" } },
   { "BD", { Type2Type<FIXT1100::NetworkCounterpartySystemStatusResponse>(), "NetworkCounterpartySystemStatusResponse" } },
   { "BE", { Type2Type<FIXT1100::UserRequest>(), "UserRequest" } },
   { "BF", { Type2Type<FIXT1100::UserResponse>(), "UserResponse" } },
   { "BG", { Type2Type<FIXT1100::CollateralInquiryAck>(), "CollateralInquiryAck" } },
   { "BH", { Type2Type<FIXT1100::ConfirmationRequest>(), "ConfirmationRequest" } },
   { "BI", { Type2Type<FIXT1100::TradingSessionListRequest>(), "TradingSessionListRequest" } },
   { "BJ", { Type2Type<FIXT1100::TradingSessionList>(), "TradingSessionList" } },
   { "BK", { Type2Type<FIXT1100::SecurityListUpdateReport>(), "SecurityListUpdateReport" } },
   { "BL", { Type2Type<FIXT1100::AdjustedPositionReport>(), "AdjustedPositionReport" } },
   { "BM", { Type2Type<FIXT1100::AllocationInstructionAlert>(), "AllocationInstructionAlert" } },
   { "BN", { Type2Type<FIXT1100::ExecutionAcknowledgement>(), "ExecutionAcknowledgement" } },
   { "BO", { Type2Type<FIXT1100::ContraryIntentionReport>(), "ContraryIntentionReport" } },
   { "BP", { Type2Type<FIXT1100::SecurityDefinitionUpdateReport>(), "SecurityDefinitionUpdateReport" } },
   { "BQ", { Type2Type<FIXT1100::SettlementObligationReport>(), "SettlementObligationReport" } },
   { "BR", { Type2Type<FIXT1100::DerivativeSecurityListUpdateReport>(), "DerivativeSecurityListUpdateReport" } },
   { "BS", { Type2Type<FIXT1100::TradingSessionListUpdateReport>(), "TradingSessionListUpdateReport" } },
   { "BT", { Type2Type<FIXT1100::MarketDefinitionRequest>(), "MarketDefinitionRequest" } },
   { "BU", { Type2Type<FIXT1100::MarketDefinition>(), "MarketDefinition" } },
   { "BV", { Type2Type<FIXT1100::MarketDefinitionUpdateReport>(), "MarketDefinitionUpdateReport" } },
   { "BW", { Type2Type<FIXT1100::ApplicationMessageRequest>(), "ApplicationMessageRequest" } },
   { "BX", { Type2Type<FIXT1100::ApplicationMessageRequestAck>(), "ApplicationMessageRequestAck" } },
   { "BY", { Type2Type<FIXT1100::ApplicationMessageReport>(), "ApplicationMessageReport" } },
   { "BZ", { Type2Type<FIXT1100::OrderMassActionReport>(), "OrderMassActionReport" } },
   { "C", { Type2Type<FIXT1100::Email>(), "Email" } },
   { "CA", { Type2Type<FIXT1100::OrderMassActionRequest>(), "OrderMassActionRequest" } },
   { "CB", { Type2Type<FIXT1100::UserNotification>(), "UserNotification" } },
   { "CC", { Type2Type<FIXT1100::StreamAssignmentRequest>(), "StreamAssignmentRequest" } },
   { "CD", { Type2Type<FIXT1100::StreamAssignmentReport>(), "StreamAssignmentReport" } },
   { "CE", { Type2Type<FIXT1100::StreamAssignmentReportACK>(), "StreamAssignmentReportACK" } },
   { "CF", { Type2Type<FIXT1100::PartyDetailsListRequest>(), "PartyDetailsListRequest" } },
   { "CG", { Type2Type<FIXT1100::PartyDetailsListReport>(), "PartyDetailsListReport" } },
   { "D", { Type2Type<FIXT1100::NewOrderSingle>(), "NewOrderSingle" } },
   { "E", { Type2Type<FIXT1100::NewOrderList>(), "NewOrderList" } },
   { "F", { Type2Type<FIXT1100::OrderCancelRequest>(), "OrderCancelRequest" } },
   { "G", { Type2Type<FIXT1100::OrderCancelReplaceRequest>(), "OrderCancelReplaceRequest" } },
   { "H", { Type2Type<FIXT1100::OrderStatusRequest>(), "OrderStatusRequest" } },
   { "J", { Type2Type<FIXT1100::AllocationInstruction>(), "AllocationInstruction" } },
   { "K", { Type2Type<FIXT1100::ListCancelRequest>(), "ListCancelRequest" } },
   { "L", { Type2Type<FIXT1100::ListExecute>(), "ListExecute" } },
   { "M", { Type2Type<FIXT1100::ListStatusRequest>(), "ListStatusRequest" } },
   { "N", { Type2Type<FIXT1100::ListStatus>(), "ListStatus" } },
   { "P", { Type2Type<FIXT1100::AllocationInstructionAck>(), "AllocationInstructionAck" } },
   { "Q", { Type2Type<FIXT1100::DontKnowTrade>(), "DontKnowTrade" } },
   { "R", { Type2Type<FIXT1100::QuoteRequest>(), "QuoteRequest" } },
   { "S", { Type2Type<FIXT1100::Quote>(), "Quote" } },
   { "T", { Type2Type<FIXT1100::SettlementInstructions>(), "SettlementInstructions" } },
   { "V", { Type2Type<FIXT1100::MarketDataRequest>(), "MarketDataRequest" } },
   { "W", { Type2Type<FIXT1100::MarketDataSnapshotFullRefresh>(), "MarketDataSnapshotFullRefresh" } },
   { "X", { Type2Type<FIXT1100::MarketDataIncrementalRefresh>(), "MarketDataIncrementalRefresh" } },
   { "Y", { Type2Type<FIXT1100::MarketDataRequestReject>(), "MarketDataRequestReject" } },
   { "Z", { Type2Type<FIXT1100::QuoteCancel>(), "QuoteCancel" } },
   { "a", { Type2Type<FIXT1100::QuoteStatusRequest>(), "QuoteStatusRequest" } },
   { "b", { Type2Type<FIXT1100::MassQuoteAcknowledgement>(), "MassQuoteAcknowledgement" } },
   { "c", { Type2Type<FIXT1100::SecurityDefinitionRequest>(), "SecurityDefinitionRequest" } },
   { "d", { Type2Type<FIXT1100::SecurityDefinition>(), "SecurityDefinition" } },
   { "e", { Type2Type<FIXT1100::SecurityStatusRequest>(), "SecurityStatusRequest" } },
   { "f", { Type2Type<FIXT1100::SecurityStatus>(), "SecurityStatus" } },
   { "g", { Type2Type<FIXT1100::TradingSessionStatusRequest>(), "TradingSessionStatusRequest" } },
   { "h", { Type2Type<FIXT1100::TradingSessionStatus>(), "TradingSessionStatus" } },
   { "header", { Type2Type<FIXT1100::header, bool>(), "header" } },
   { "i", { Type2Type<FIXT1100::MassQuote>(), "MassQuote" } },
   { "j", { Type2Type<FIXT1100::BusinessMessageReject>(), "BusinessMessageReject" } },
   { "k", { Type2Type<FIXT1100::BidRequest>(), "BidRequest" } },
   { "l", { Type2Type<FIXT1100::BidResponse>(), "BidResponse" } },
   { "m", { Type2Type<FIXT1100::ListStrikePrice>(), "ListStrikePrice" } },
   { "o", { Type2Type<FIXT1100::RegistrationInstructions>(), "RegistrationInstructions" } },
   { "p", { Type2Type<FIXT1100::RegistrationInstructionsResponse>(), "RegistrationInstructionsResponse" } },
   { "q", { Type2Type<FIXT1100::OrderMassCancelRequest>(), "OrderMassCancelRequest" } },
   { "r", { Type2Type<FIXT1100::OrderMassCancelReport>(), "OrderMassCancelReport" } },
   { "s", { Type2Type<FIXT1100::NewOrderCross>(), "NewOrderCross" } },
   { "t", { Type2Type<FIXT1100::CrossOrderCancelReplaceRequest>(), "CrossOrderCancelReplaceRequest" } },
   { "trailer", { Type2Type<FIXT1100::trailer, bool>(), "trailer" } },
   { "u", { Type2Type<FIXT1100::CrossOrderCancelRequest>(), "CrossOrderCancelRequest" } },
   { "v", { Type2Type<FIXT1100::SecurityTypeRequest>(), "SecurityTypeRequest" } },
   { "w", { Type2Type<FIXT1100::SecurityTypes>(), "SecurityTypes" } },
   { "x", { Type2Type<FIXT1100::SecurityListRequest>(), "SecurityListRequest" } },
   { "y", { Type2Type<FIXT1100::SecurityList>(), "SecurityList" } },
   { "z", { Type2Type<FIXT1100::DerivativeSecurityListRequest>(), "DerivativeSecurityListRequest" } }
}; // 119

extern const fix_BaseEntry::Pair fldpairs[];

/// Compiler generated metadata object, accessed through this function.
const F8MetaCntx& ctx() // avoid SIOF
{
   static const fix_BaseMsgEntry bme(msgpairs, 119);
   static const fix_BaseEntry be(fldpairs, 1562);
   static const F8MetaCntx _ctx(1100, bme, be, cn, "FIXT.1.1");
   return _ctx;
}

} // namespace FIXT1100

// Compiler generated metadata object accessible outside namespace through this function.
extern "C"
{
   const F8MetaCntx& FIXT1100_ctx() { return FIXT1100::ctx(); }
}

} // namespace FIX8

