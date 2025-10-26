#pragma once

#include <result/type/result.hpp>

namespace result {

template <typename T, typename E>
Result<T, E> Ok(T value) {
  return {std::move(value)};
}

}  // namespace result
