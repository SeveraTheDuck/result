#pragma once

#include <expected>

namespace result {

template <typename T, typename E>
using Result = std::expected<T, E>;

}  // namespace result
