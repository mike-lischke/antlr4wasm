/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

#pragma once

EMSCRIPTEN_BINDINGS(support) {
  function("toMap", &toMap);
  function("split", &split);

  class_<BitSet>("BitSet")
    .class_function("subStringRepresentation", &BitSet::subStringRepresentation)

    .function("nextSetBit", &BitSet::nextSetBit)
    .function("toString", &BitSet::toString);
}
