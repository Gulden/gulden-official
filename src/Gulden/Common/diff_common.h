// Copyright (c) 2015-2018 The Gulden developers
// Authored by: Malcolm MacLeod (mmacleod@webmail.co.za)
// Distributed under the GULDEN software license, see the accompanying
// file COPYING


#ifndef GULDEN_DIFF_COMMON_H
#define GULDEN_DIFF_COMMON_H

#include <consensus/params.h>
#include <arith_uint256.h>
#include <chain.h>
#include <sync.h>
#include <util.h>
#include <stdint.h>

#define DIFF_SWITCHOVER(TEST, MAIN) (IsArgSet("-testnet") ? TEST :  MAIN)
extern unsigned int GetNextWorkRequired(const CBlockIndex* indexLast, const CBlockHeader* block, unsigned int nPowTargetSpacing, unsigned int nPowLimit);

#endif