#ifndef RTCP_API_H
#define RTCP_API_H

/* Data types includes. */
#include "rtcp_data_types.h"

RtcpResult_t Rtcp_Init( RtcpContext_t * pCtx );

RtcpResult_t Rtcp_Serialize( RtcpContext_t * pCtx,
                           const RtcpPacket_t * pRtcpPacket,
                           uint8_t * pBuffer,
                           size_t * pLength );

RtcpResult_t Rtcp_DeSerialize( RtcpContext_t * pCtx,
                             uint8_t * pSerializedPacket,
                             size_t serializedPacketLength,
                             RtcpPacket_t * pRtcpPacket );

#endif /* RTCP_API_H */