/*
 * Copyright (c) 2010-2013, 2013 Qualcomm Atheros, Inc.
 * All Rights Reserved.
 * Qualcomm Atheros Confidential and Proprietary.
 */

#ifndef _TLV_RXPARMDEF_H_
#define _TLV_RXPARMDEF_H_

#define TLV_RXPARM_KEY_CHANNEL "channel"
#define TLV_RXPARM_KEY_RXMODE "rxMode"
#define TLV_RXPARM_KEY_ENANI "enANI"
#define TLV_RXPARM_KEY_ANTENNA "antenna"
#define TLV_RXPARM_KEY_WLANMODE "wlanMode"
#define TLV_RXPARM_KEY_RXCHAIN "rxChain"
#define TLV_RXPARM_KEY_EXPECTEDPACKETS "expectedPkts"
#define TLV_RXPARM_KEY_ACK "ack"
#define TLV_RXPARM_KEY_BROARDCAST "bc"
#define TLV_RXPARM_KEY_BANDWIDTH "bandwidth"
#define TLV_RXPARM_KEY_LPL "lpl"
#define TLV_RXPARM_KEY_ANTSWITCH1 "antswitch1"
#define TLV_RXPARM_KEY_ANTSWITCH2 "antswitch2"
#define TLV_RXPARM_KEY_ADDR "addr"
#define TLV_RXPARM_KEY_BSSID "bssid"
#define TLV_RXPARM_KEY_BTADDR "btaddr"
#define TLV_RXPARM_KEY_RESERVED "reserved"
#define TLV_RXPARM_KEY_REGDMN0 "regDmn0"
#define TLV_RXPARM_KEY_REGDMN1 "regDmn1"
#define TLV_RXPARM_KEY_OTPWRITEFLAG "otpWriteFlag"
#define TLV_RXPARM_KEY_FLAGS "flags"
#define TLV_RXPARM_KEY_RATEMASK0 "rateMask0"
#define TLV_RXPARM_KEY_RATEMASK1 "rateMask1"
#define TLV_RXPARM_KEY_RATEMASK2 "rateMask2"
#define TLV_RXPARM_KEY_RATEMASK3 "rateMask3"
#define TLV_RXPARM_KEY_RATEMASK4 "rateMask4"
#define TLV_RXPARM_KEY_RATEMASK5 "rateMask5"

#define TLV_RXPARM_DEFAULT_CHANNEL				{0x6c, 0x09}
#define TLV_RXPARM_DEFAULT_RXMODE				{TCMD_CONT_RX_FILTER}
#define TLV_RXPARM_DEFAULT_ENANI				{0}
#define TLV_RXPARM_DEFAULT_ANTENNA				{0}
#define TLV_RXPARM_DEFAULT_WLANMODE				{TCMD_WLAN_MODE_HT20}
#define TLV_RXPARM_DEFAULT_RXCHAIN				{0x7}
#define TLV_RXPARM_DEFAULT_EXPECTEDPACKETS		{1}
#define TLV_RXPARM_DEFAULT_ACK					{1}
#define TLV_RXPARM_DEFAULT_BROARDCAST			{1}
#define TLV_RXPARM_DEFAULT_BANDWIDTH			{0}
#define TLV_RXPARM_DEFAULT_LPL					{0}
#define TLV_RXPARM_DEFAULT_ANTSWITCH1			{0}
#define TLV_RXPARM_DEFAULT_ANTSWITCH2			{0}
#define TLV_RXPARM_DEFAULT_ADDR					{0x01, 0x00, 0x00, 0xCA, 0xFF, 0xEE}
#define TLV_RXPARM_DEFAULT_BSSID				{0x00, 0x03, 0x7F, 0x03, 0x40, 0x33}
#define TLV_RXPARM_DEFAULT_BTADDR				{0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
#define TLV_RXPARM_DEFAULT_RESERVED				{0x00,0x00}
#define TLV_RXPARM_DEFAULT_REGDMN0				{0}
#define TLV_RXPARM_DEFAULT_REGDMN1				{0}
#define TLV_RXPARM_DEFAULT_OTPWRITEFLAG			{0}
#define TLV_RXPARM_DEFAULT_FLAGS				{0}
#define TLV_RXPARM_DEFAULT_RATEMASK0			{0x10, 0x0, 0x0, 0x0}
#define TLV_RXPARM_DEFAULT_RATEMASK1			{0x0, 0x0, 0x0, 0x0}
#define TLV_RXPARM_DEFAULT_RATEMASK2			{0x0, 0x0, 0x0, 0x0}
#define TLV_RXPARM_DEFAULT_RATEMASK3			{0x0, 0x0, 0x0, 0x0}
#define TLV_RXPARM_DEFAULT_RATEMASK4			{0x0, 0x0, 0x0, 0x0}
#define TLV_RXPARM_DEFAULT_RATEMASK5			{0x0, 0x0, 0x0, 0x0}

#endif //_TLV_RXPARMDEF_H_