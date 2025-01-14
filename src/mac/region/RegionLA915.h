/*!
 * \file      RegionLA915.h
 *
 * \brief     Region definition for LA915
 *
 * \copyright Revised BSD License, see section \ref LICENSE.
 *
 * \code
 *                ______                              _
 *               / _____)             _              | |
 *              ( (____  _____ ____ _| |_ _____  ____| |__
 *               \____ \| ___ |    (_   _) ___ |/ ___)  _ \
 *               _____) ) ____| | | || |_| ____( (___| | | |
 *              (______/|_____)_|_|_| \__)_____)\____)_| |_|
 *              (C)2013-2017 Semtech
 *
 *               ___ _____ _   ___ _  _____ ___  ___  ___ ___
 *              / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 *              \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 *              |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 *              embedded.connectivity.solutions===============
 *
 * \endcode
 *
 * \author    Miguel Luis ( Semtech )
 *
 * \author    Gregory Cristian ( Semtech )
 *
 * \author    Daniel Jaeckle ( STACKFORCE )
 *
 * \author    Johannes Bruder ( STACKFORCE )
 *
 * \defgroup  REGIONLA915 Region LA915
 *            Implementation according to LoRaWAN Specification v1.0.2.
 * \{
 */
#ifndef __REGION_LA915_H__
#define __REGION_LA915_H__

#include "region/Region.h"

/*!
 * LoRaMac maximum number of channels
 */
#define LA915_MAX_NB_CHANNELS                       72

/*!
 * Minimal datarate that can be used by the node
 */
#define LA915_TX_MIN_DATARATE                       DR_0

/*!
 * Maximal datarate that can be used by the node
 */
#define LA915_TX_MAX_DATARATE                       DR_5

/*!
 * Minimal datarate that can be used by the node
 */
#define LA915_RX_MIN_DATARATE                       DR_8

/*!
 * Maximal datarate that can be used by the node
 */
#define LA915_RX_MAX_DATARATE                       DR_13

/*!
 * Default datarate used by the node
 */
#define LA915_DEFAULT_DATARATE                      DR_0

/*!
 * The minimum datarate which is used when the
 * dwell time is limited.
 */
#define LA915_DWELL_LIMIT_DATARATE                  DR_2

/*!
 * Minimal Rx1 receive datarate offset
 */
#define LA915_MIN_RX1_DR_OFFSET                     0

/*!
 * Maximal Rx1 receive datarate offset
 */
#define LA915_MAX_RX1_DR_OFFSET                     3

/*!
 * Default Rx1 receive datarate offset
 */
#define LA915_DEFAULT_RX1_DR_OFFSET                 0

/*!
 * Minimal Tx output power that can be used by the node
 */
#define LA915_MIN_TX_POWER                          TX_POWER_10

/*!
 * Maximal Tx output power that can be used by the node
 */
#define LA915_MAX_TX_POWER                          TX_POWER_0

/*!
 * Default Tx output power used by the node
 */
#define LA915_DEFAULT_TX_POWER                      TX_POWER_5

/*!
 * Default uplink dwell time configuration
 */
#define LA915_DEFAULT_UPLINK_DWELL_TIME             0

/*!
 * Default downlink dwell time configuration
 */
#define LA915_DEFAULT_DOWNLINK_DWELL_TIME           0

/*!
 * Default Max EIRP
 */
#define LA915_DEFAULT_MAX_EIRP                      30.0f

/*!
 * Default antenna gain
 */
#define LA915_DEFAULT_ANTENNA_GAIN                  2.15f

/*!
 * ADR Ack limit
 */
#define LA915_ADR_ACK_LIMIT                         64

/*!
 * ADR Ack delay
 */
#define LA915_ADR_ACK_DELAY                         32

/*!
 * Enabled or disabled the duty cycle
 */
#define LA915_DUTY_CYCLE_ENABLED                    0

/*!
 * Maximum RX window duration
 */
#define LA915_MAX_RX_WINDOW                         1000

/*!
 * Receive delay 1
 */
#define LA915_RECEIVE_DELAY1                        5000

/*!
 * Receive delay 2
 */
#define LA915_RECEIVE_DELAY2                        6000

/*!
 * Join accept delay 1
 */
#define LA915_JOIN_ACCEPT_DELAY1                    5000

/*!
 * Join accept delay 2
 */
#define LA915_JOIN_ACCEPT_DELAY2                    6000

/*!
 * Maximum frame counter gap
 */
#define LA915_MAX_FCNT_GAP                          16384

/*!
 * Ack timeout
 */
#define LA915_ACKTIMEOUT                            2000

/*!
 * Random ack timeout limits
 */
#define LA915_ACK_TIMEOUT_RND                       1000

/*!
 * Second reception window channel frequency definition.
 */
#define LA915_RX_WND_2_FREQ                         923300000

/*!
 * Second reception window channel datarate definition.
 */
#define LA915_RX_WND_2_DR                           DR_8

/*
 * CLASS B
 */
/*!
 * Beacon frequency
 */
#define LA915_BEACON_CHANNEL_FREQ                   923300000

/*!
 * Beacon frequency channel stepwidth
 */
#define LA915_BEACON_CHANNEL_STEPWIDTH              600000

/*!
 * Number of possible beacon channels
 */
#define LA915_BEACON_NB_CHANNELS                    8

/*!
 * Payload size of a beacon frame
 */
#define LA915_BEACON_SIZE                           19

/*!
 * Size of RFU 1 field
 */
#define LA915_RFU1_SIZE                             3

/*!
 * Size of RFU 2 field
 */
#define LA915_RFU2_SIZE                             1

/*!
 * Datarate of the beacon channel
 */
#define LA915_BEACON_CHANNEL_DR                     DR_10

/*!
 * Bandwith of the beacon channel
 */
#define LA915_BEACON_CHANNEL_BW                     2

/*!
 * Ping slot channel datarate
 */
#define LA915_PING_SLOT_CHANNEL_DR                  DR_10

/*!
 * LoRaMac maximum number of bands
 */
#define LA915_MAX_NB_BANDS                          1

/*!
 * Band 0 definition
 * { DutyCycle, TxMaxPower, LastJoinTxDoneTime, LastTxDoneTime, TimeOff }
 */
#define LA915_BAND0                                 { 1, LA915_MAX_TX_POWER, 0, 0, 0 } //  100.0 %

/*!
 * Defines the first channel for RX window 1 for US band
 */
#define LA915_FIRST_RX1_CHANNEL                     ( (uint32_t) 923300000 )

/*!
 * Defines the last channel for RX window 1 for US band
 */
#define LA915_LAST_RX1_CHANNEL                      ( (uint32_t) 927500000 )

/*!
 * Defines the step width of the channels for RX window 1
 */
#define LA915_STEPWIDTH_RX1_CHANNEL                 ( (uint32_t) 600000 )

/*!
 * Data rates table definition
 */
static const uint8_t DataratesLA915[]  = { 12, 11, 10, 9, 8, 7, 8, 0, 12, 11, 10, 9, 8, 7, 0, 0 };

/*!
 * Bandwidths table definition in Hz
 */
static const uint32_t BandwidthsLA915[] = { 125000, 125000, 125000, 125000, 125000, 125000, 500000, 0, 500000, 500000, 500000, 500000, 500000, 500000, 0, 0 };

/*!
 * Up/Down link data rates offset definition
 */
static const int8_t DatarateOffsetsLA915[7][6] =
{
    { DR_8 , DR_8 , DR_8 , DR_8 , DR_8 , DR_8  }, // DR_0
    { DR_9 , DR_8 , DR_8 , DR_8 , DR_8 , DR_8  }, // DR_1
    { DR_10, DR_9 , DR_8 , DR_8 , DR_8 , DR_8  }, // DR_2
    { DR_11, DR_10, DR_9 , DR_8 , DR_8 , DR_8  }, // DR_3
    { DR_12, DR_11, DR_10, DR_9 , DR_8 , DR_8  }, // DR_4
    { DR_13, DR_12, DR_11, DR_10, DR_9 , DR_8  }, // DR_5
    { DR_13, DR_13, DR_12, DR_11, DR_10, DR_9  }, // DR_6
};

/*!
 * Maximum payload with respect to the datarate index. Cannot operate with repeater.
 * The table is valid for the dwell time configuration of 0 for uplinks.
 */
static const uint8_t MaxPayloadOfDatarateDwell0LA915[] = { 51, 51, 51, 115, 242, 242, 242, 0, 53, 129, 242, 242, 242, 242, 0, 0 };

/*!
 * Maximum payload with respect to the datarate index. Can operate with repeater.
 * The table is valid for the dwell time configuration of 0 for uplinks. The table provides
 * repeater support.
 */
static const uint8_t MaxPayloadOfDatarateRepeaterDwell0LA915[] = { 51, 51, 51, 115, 222, 222, 222, 0, 33, 109, 222, 222, 222, 222, 0, 0 };

/*!
 * Maximum payload with respect to the datarate index. Cannot operate with repeater.
 * The table is valid for the dwell time configuration of 1 for uplinks.
 */
static const uint8_t MaxPayloadOfDatarateDwell1LA915[] = { 0, 0, 11, 53, 125, 242, 242, 0, 53, 129, 129, 242, 242, 242, 242 };

/*!
 * Maximum payload with respect to the datarate index. Can operate with repeater.
 * The table is valid for the dwell time configuration of 1 for uplinks. The table provides
 * repeater support.
 */
static const uint8_t MaxPayloadOfDatarateRepeaterDwell1LA915[] = { 0, 0, 11, 53, 125, 242, 242, 0, 33, 119, 129, 242, 242, 242, 242 };

/*!
 * \brief The function gets a value of a specific phy attribute.
 *
 * \param [IN] getPhy Pointer to the function parameters.
 *
 * \retval Returns a structure containing the PHY parameter.
 */
PhyParam_t RegionLA915GetPhyParam( GetPhyParams_t* getPhy );

/*!
 * \brief Updates the last TX done parameters of the current channel.
 *
 * \param [IN] txDone Pointer to the function parameters.
 */
void RegionLA915SetBandTxDone( SetBandTxDoneParams_t* txDone );

/*!
 * \brief Initializes the channels masks and the channels.
 *
 * \param [IN] type Sets the initialization type.
 */
void RegionLA915InitDefaults( InitDefaultsParams_t* params );

/*!
 * \brief Returns a pointer to the internal context and its size.
 *
 * \param [OUT] params Pointer to the function parameters.
 *
 * \retval      Points to a structure where the module store its non-volatile context.
 */
void* RegionLA915GetNvmCtx( GetNvmCtxParams_t* params );

/*!
 * \brief Verifies a parameter.
 *
 * \param [IN] verify Pointer to the function parameters.
 *
 * \param [IN] type Sets the initialization type.
 *
 * \retval Returns true, if the parameter is valid.
 */
bool RegionLA915Verify( VerifyParams_t* verify, PhyAttribute_t phyAttribute );

/*!
 * \brief The function parses the input buffer and sets up the channels of the
 *        CF list.
 *
 * \param [IN] applyCFList Pointer to the function parameters.
 */
void RegionLA915ApplyCFList( ApplyCFListParams_t* applyCFList );

/*!
 * \brief Sets a channels mask.
 *
 * \param [IN] chanMaskSet Pointer to the function parameters.
 *
 * \retval Returns true, if the channels mask could be set.
 */
bool RegionLA915ChanMaskSet( ChanMaskSetParams_t* chanMaskSet );

/*!
 * Computes the Rx window timeout and offset.
 *
 * \param [IN] datarate     Rx window datarate index to be used
 *
 * \param [IN] minRxSymbols Minimum required number of symbols to detect an Rx frame.
 *
 * \param [IN] rxError      System maximum timing error of the receiver. In milliseconds
 *                          The receiver will turn on in a [-rxError : +rxError] ms
 *                          interval around RxOffset
 *
 * \param [OUT]rxConfigParams Returns updated WindowTimeout and WindowOffset fields.
 */
void RegionLA915ComputeRxWindowParameters( int8_t datarate, uint8_t minRxSymbols, uint32_t rxError, RxConfigParams_t *rxConfigParams );

/*!
 * \brief Configuration of the RX windows.
 *
 * \param [IN] rxConfig Pointer to the function parameters.
 *
 * \param [OUT] datarate The datarate index which was set.
 *
 * \retval Returns true, if the configuration was applied successfully.
 */
bool RegionLA915RxConfig( RxConfigParams_t* rxConfig, int8_t* datarate );

/*!
 * \brief TX configuration.
 *
 * \param [IN] txConfig Pointer to the function parameters.
 *
 * \param [OUT] txPower The tx power index which was set.
 *
 * \param [OUT] txTimeOnAir The time-on-air of the frame.
 *
 * \retval Returns true, if the configuration was applied successfully.
 */
bool RegionLA915TxConfig( TxConfigParams_t* txConfig, int8_t* txPower, TimerTime_t* txTimeOnAir );

/*!
 * \brief The function processes a Link ADR Request.
 *
 * \param [IN] linkAdrReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionLA915LinkAdrReq( LinkAdrReqParams_t* linkAdrReq, int8_t* drOut, int8_t* txPowOut, uint8_t* nbRepOut, uint8_t* nbBytesParsed );

/*!
 * \brief The function processes a RX Parameter Setup Request.
 *
 * \param [IN] rxParamSetupReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionLA915RxParamSetupReq( RxParamSetupReqParams_t* rxParamSetupReq );

/*!
 * \brief The function processes a Channel Request.
 *
 * \param [IN] newChannelReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionLA915NewChannelReq( NewChannelReqParams_t* newChannelReq );

/*!
 * \brief The function processes a TX ParamSetup Request.
 *
 * \param [IN] txParamSetupReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 *         Returns -1, if the functionality is not implemented. In this case, the end node
 *         shall not process the command.
 */
int8_t RegionLA915TxParamSetupReq( TxParamSetupReqParams_t* txParamSetupReq );

/*!
 * \brief The function processes a DlChannel Request.
 *
 * \param [IN] dlChannelReq Pointer to the function parameters.
 *
 * \retval Returns the status of the operation, according to the LoRaMAC specification.
 */
uint8_t RegionLA915DlChannelReq( DlChannelReqParams_t* dlChannelReq );

/*!
 * \brief Alternates the datarate of the channel for the join request.
 *
 * \param [IN] currentDr Current datarate.
 *
 * \retval Datarate to apply.
 */
int8_t RegionLA915AlternateDr( int8_t currentDr, AlternateDrType_t type );

/*!
 * \brief Calculates the back-off time.
 *
 * \param [IN] calcBackOff Pointer to the function parameters.
 */
void RegionLA915CalcBackOff( CalcBackOffParams_t* calcBackOff );

/*!
 * \brief Searches and set the next random available channel
 *
 * \param [OUT] channel Next channel to use for TX.
 *
 * \param [OUT] time Time to wait for the next transmission according to the duty
 *              cycle.
 *
 * \param [OUT] aggregatedTimeOff Updates the aggregated time off.
 *
 * \retval Function status [1: OK, 0: Unable to find a channel on the current datarate]
 */
LoRaMacStatus_t RegionLA915NextChannel( NextChanParams_t* nextChanParams, uint8_t* channel, TimerTime_t* time, TimerTime_t* aggregatedTimeOff );

/*!
 * \brief Adds a channel.
 *
 * \param [IN] channelAdd Pointer to the function parameters.
 *
 * \retval Status of the operation.
 */
LoRaMacStatus_t RegionLA915ChannelAdd( ChannelAddParams_t* channelAdd );

/*!
 * \brief Removes a channel.
 *
 * \param [IN] channelRemove Pointer to the function parameters.
 *
 * \retval Returns true, if the channel was removed successfully.
 */
bool RegionLA915ChannelsRemove( ChannelRemoveParams_t* channelRemove  );

/*!
 * \brief Sets the radio into continuous wave mode.
 *
 * \param [IN] continuousWave Pointer to the function parameters.
 */
void RegionLA915SetContinuousWave( ContinuousWaveParams_t* continuousWave );

/*!
 * \brief Computes new datarate according to the given offset
 *
 * \param [IN] downlinkDwellTime Downlink dwell time configuration. 0: No limit, 1: 400ms
 *
 * \param [IN] dr Current datarate
 *
 * \param [IN] drOffset Offset to be applied
 *
 * \retval newDr Computed datarate.
 */
uint8_t RegionLA915ApplyDrOffset( uint8_t downlinkDwellTime, int8_t dr, int8_t drOffset );

/*!
 * \brief Sets the radio into beacon reception mode
 *
 * \param [IN] rxBeaconSetup Pointer to the function parameters
 */
 void RegionLA915RxBeaconSetup( RxBeaconSetup_t* rxBeaconSetup, uint8_t* outDr );

/*! \} defgroup REGIONLA915 */

#endif // __REGION_LA915_H__
