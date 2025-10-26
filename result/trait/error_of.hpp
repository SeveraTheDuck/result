#pragma once

#include <result/type/result.hpp>

namespace result::trait {

namespace match {

template <typename T>
struct ErrorOf;

template <typename T, typename E>
struct ErrorOf<Result<T, E>> {
  using Type = E;
};

}  // namespace match

template <typename Result>
using ErrorOf = match::ErrorOf<Result>::Type;

}  // namespace result::trait
