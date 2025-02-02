// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"
#include "../PrivateKey.h"
#include "../proto/BitcoinTestnet.pb.h"

namespace TW::BitcoinTestnet {

/// Helper class that performs BitcoinTestnet transaction signing.
class Signer {
public:
    /// Hide default constructor
    Signer() = delete;

    /// Signs a Proto::SigningInput transaction
    static Proto::SigningOutput sign(const Proto::SigningInput& input) noexcept;
};

} // namespace TW::BitcoinTestnet

/// Wrapper for C interface.
struct TWBitcoinTestnetSigner {
    TW::BitcoinTestnet::Signer impl;
};
