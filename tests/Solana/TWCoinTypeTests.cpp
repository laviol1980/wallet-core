// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWSolanaCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeSolana));
    auto txId = TWStringCreateWithUTF8Bytes("123");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeSolana, txId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeSolana));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeSolana));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeSolana), 13);
    ASSERT_EQ(TWBlockchainSolana, TWCoinTypeBlockchain(TWCoinTypeSolana));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeSolana));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeSolana));
    assertStringsEqual(symbol, "SOL");
    assertStringsEqual(txUrl, "https://explorer.solana.com/tx/123");
    assertStringsEqual(id, "solana");
    assertStringsEqual(name, "Solana");
}
