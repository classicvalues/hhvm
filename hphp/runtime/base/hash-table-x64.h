/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#pragma once

#define MixedArray_SCALE        16
#define MixedArray_DATA         32
#define MixedArrayElm_HASH      12
#define MixedArrayElm_KEY       16
#define MixedArrayElm_DATA      0
#define MixedArrayElm_TYPE      8
#define MixedArrayElm_QUADWORDS 3

#define VanillaKeyset_SCALE        16
#define VanillaKeyset_DATA         32
#define VanillaKeysetElm_HASH      12
#define VanillaKeysetElm_KEY       0
#define VanillaKeysetElm_DATA      0
#define VanillaKeysetElm_TYPE      8
#define VanillaKeysetElm_QUADWORDS 2

