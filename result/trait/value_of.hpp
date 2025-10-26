#pragma once

#include <result/type/result.hpp>

namespace result::trait {

namespace match {

template <typename T>
struct ValueOf;

template <typename T, typename E>
struct ValueOf<Result<T, E>> {
  using Type = T;
};

}  // namespace match

template <typename Result>
using ValueOf = match::ValueOf<Result>::Type;

}  // namespace result::trait
