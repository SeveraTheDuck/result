#pragma once

#include <result/type/result.hpp>
#include <result/trait/value_of.hpp>
#include <result/syntax/pipe.hpp>

#include <type_traits>  // std::invoke_result_t
#include <utility>

namespace result {

namespace pipe {

template <typename F>
struct [[nodiscard]] Map {
  F user;

  explicit Map(F u)
      : user(std::move(u)) {
  }

  // Non-copyable
  Map(const Map&) = delete;
  Map& operator=(const Map&) = delete;

  template <typename T>
  using U = std::invoke_result_t<F, T>;

  template <typename T, typename E>
  Result<U<T>, E> Pipe(Result<T, E> r) {
    return std::move(r).transform(user);
  }
};

}  // namespace pipe

/*
 * Result<T, E> -> (T -> U) -> Result<U, E>
 *
 * Usage:
 *
 * auto r = result::Ok<int, Unit>(1) | result::Map([](int v) {
 *   return v + 1;
 * });
 *
 */

template <typename F>
auto Map(F user) {
  return pipe::Map{std::move(user)};
}

}  // namespace result
