#pragma once

#include "result.hpp"

namespace result {

// Synonym for Result<T, E>

template <typename T, typename E>
using Try = Result<T, E>;

}  // namespace result
