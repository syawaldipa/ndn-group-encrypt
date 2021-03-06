/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/**
 * Copyright (c) 2014-2015,  Regents of the University of California
 *
 * This file is part of ndn-group-encrypt (Group-based Encryption Protocol for NDN).
 * See AUTHORS.md for complete list of ndn-group-encrypt authors and contributors.
 *
 * ndn-group-encrypt is free software: you can redistribute it and/or modify it under the terms
 * of the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * ndn-group-encrypt is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * ndn-group-encrypt, e.g., in COPYING.md file.  If not, see <http://www.gnu.org/licenses/>.
 *
 * @author Yingdi Yu <yingdi@cs.ucla.edu>
 */

#ifndef NDN_GEP_ERROR_CODE_HPP
#define NDN_GEP_ERROR_CODE_HPP

#include "common.hpp"

namespace ndn {
namespace gep {

enum class ErrorCode {
  Timeout = 1,
  Validation = 2,
  UnsupportedEncryptionScheme = 32,
  InvalidEncryptedFormat = 33,
  NoDecryptKey = 34,
  EncryptionFailure = 35
};

typedef function<void (const ErrorCode&, const std::string&)> ErrorCallBack;

} // namespace gep
} // namespace ndn

#endif // NDN_GEP_ERROR_CODE_HPP
