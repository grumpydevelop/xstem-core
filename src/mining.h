// Copyright (c) 2016-2018 The CryptoCoderz Team / Espers
// Copyright (c) 2018 The CryptoCoderz Team / INSaNE project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"

/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 / 60; // 30 minutes
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 0 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 200000 * COIN; //
/** Starting block subsidy */
static const int64_t nBlockPoWReward = 100 * COIN;
/** Altered block subsidy */
static const int64_t nBlockPoWReward_2 = 2 * COIN;
/** Superblock modifier */
static const int64_t nSuperModifier = 2;
/** PoS Reward */
static const int64_t COIN_YEAR_REWARD = 15 * COIN; // Corrected in v1.0.4.0+
/** PoS Reward Fixed */
static const int64_t COIN_YEAR_REWARD_FIXED = 15 * CENT; // 15%
/** PoS Superblock Reward */
static const int64_t COIN_SPRB_REWARD = 15 * COIN; // Corrected in v1.0.4.0+
/** PoS Superblock Reward Fixed */
static const int64_t COIN_SPRB_REWARD_FIXED = 15 * CENT; // 15%
/** MN Reward Fixed */
static const int64_t MN_REWARD_FIXED = 60 * CENT; // 75% total, 15% for standard net, 60% for MNs
/** PoS Reward Static */
static const int64_t STATIC_POS_REWARD = 14 * COIN;
/** PoS Reward Multiplier */
static const int64_t STATIC_POS_MULTIPLIER = 125;
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = 5 * 60;
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = 3.5 * 60;
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = 7.5 * 60;
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** Darksend collateral */
static const int64_t DARKSEND_COLLATERAL = (0.01*COIN);
/** Darksend pool values */
static const int64_t DARKSEND_POOL_MAX = (4999.99*COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 10000; } // 10K XTE required as collateral
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static const int nStakeMinConfirmations = 15;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 15; // 15-TXs | 90-Mined

#endif // BITCOIN_MINING_H
