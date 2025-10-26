#pragma once

#include <result/type/result.hpp>

namespace result {

template <typename T, typename E>
Result<T, E> Err(E error) {
  return std::unexpected(std::move(error));
}

}  // namespace result
