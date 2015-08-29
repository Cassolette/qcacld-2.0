/*
 * Copyright (c) 2011, 2014-2015 The Linux Foundation. All rights reserved.
 *
 * Previously licensed under the ISC license by Qualcomm Atheros, Inc.
 *
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * This file was originally distributed by Qualcomm Atheros, Inc.
 * under proprietary terms before Copyright ownership was assigned
 * to the Linux Foundation.
 */


#ifndef _WLAN_MODULE_IDS_H_
#define _WLAN_MODULE_IDS_H_

/* Wlan module ids , global across all the modules */
typedef enum {
  WLAN_MODULE_ID_MIN = 0,
  WLAN_MODULE_INF = WLAN_MODULE_ID_MIN, /* 0x00 */
  WLAN_MODULE_WMI,
  WLAN_MODULE_STA_PWRSAVE,
  WLAN_MODULE_WHAL,
  WLAN_MODULE_COEX,
  WLAN_MODULE_ROAM,
  WLAN_MODULE_RESMGR_CHAN_MANAGER,
  WLAN_MODULE_RESMGR,
  WLAN_MODULE_VDEV_MGR,
  WLAN_MODULE_SCAN,
  WLAN_MODULE_RATECTRL,
  WLAN_MODULE_AP_PWRSAVE,
  WLAN_MODULE_BLOCKACK,
  WLAN_MODULE_MGMT_TXRX,
  WLAN_MODULE_DATA_TXRX,
  WLAN_MODULE_HTT,
  WLAN_MODULE_HOST, /* 0x10 */
  WLAN_MODULE_BEACON,
  WLAN_MODULE_OFFLOAD,
  WLAN_MODULE_WAL,
  WAL_MODULE_DE,
  WLAN_MODULE_PCIELP,
  WLAN_MODULE_RTT,
  WLAN_MODULE_RESOURCE,
  WLAN_MODULE_DCS,
  WLAN_MODULE_CACHEMGR,
  WLAN_MODULE_ANI,
  WLAN_MODULE_P2P,
  WLAN_MODULE_CSA,
  WLAN_MODULE_NLO,
  WLAN_MODULE_CHATTER,
  WLAN_MODULE_WOW,
  WLAN_MODULE_WAL_VDEV, /* 0x20 */
  WLAN_MODULE_WAL_PDEV,
  WLAN_MODULE_TEST,
  WLAN_MODULE_STA_SMPS,
  WLAN_MODULE_SWBMISS,
  WLAN_MODULE_WMMAC,
  WLAN_MODULE_TDLS,
  WLAN_MODULE_HB,
  WLAN_MODULE_TXBF,
  WLAN_MODULE_BATCH_SCAN,
  WLAN_MODULE_THERMAL_MGR,
  WLAN_MODULE_PHYERR_DFS,
  WLAN_MODULE_RMC,
  WLAN_MODULE_STATS,
  WLAN_MODULE_NAN,
  WLAN_MODULE_IBSS_PWRSAVE,
  WLAN_MODULE_HIF_UART, /* 0x30 */
  WLAN_MODULE_LPI,
  WLAN_MODULE_EXTSCAN,
  WLAN_MODULE_UNIT_TEST,
  WLAN_MODULE_MLME,
  WLAN_MODULE_SUPPL,
  WLAN_MODULE_ERE,
  WLAN_MODULE_OCB,
  WLAN_MODULE_RSSI_MONITOR,
  WLAN_MODULE_WPM,
  WLAN_MODULE_CSS, /* 0x3a */
  WLAN_MODULE_PPS, /* 0x3b */
  WLAN_MODULE_ID_MAX,
  WLAN_MODULE_ID_INVALID = WLAN_MODULE_ID_MAX,
} WLAN_MODULE_ID;


#endif /* _WLAN_MODULE_IDS_H_ */
