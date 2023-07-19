/*
 * Copyright (c) Mike Lischke. All rights reserved.
 * Licensed under the MIT License. See License.txt in the project root for license information.
 */

/// Generates a getter and setter for the given property.
#define GETTER_SETTER(TYPE, NAME)   \
  inline void NAME##Set(TYPE val) { \
    NAME = val;                     \
  }                                 \
  inline TYPE NAME##Get() const {   \
    return NAME;                    \
  }

/// Generates a getter and setter for the given property.
#define GETTER_UNIQUE_PTR(TYPE, NAME) \
  inline TYPE *NAME##Get() const {    \
    return NAME.get();                \
  }

/*
 * Converts the given vector into a JavaScript array. It wraps each element into a val object to keep them alive.
 * This requires to access the elements in JS via "value".
 */
template <typename T>
emscripten::val convertVectorToJSArray(const std::vector<T> &vector) {
  auto result = emscripten::val::array();

  for (const auto &element : vector) {
    val obj = val::object();
    obj.set("value", element);
    result.call<void>("push", obj);
  }

  return result;
}
