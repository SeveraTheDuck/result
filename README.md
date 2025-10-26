# result

A syntax wrapper for C++23 `std::expected` as it should be. By SeveraTheDuck 🦆

## Brief

C++ keeps introducing sane ideas into insane language. In order to add more
common syntax and more _functional flavour_ comparing to what we have now, this
tiny project introduces the `Result<T, E>`.

## Functionality

The `Result<T, E>` is just a simple `using` to C++23 `std::expected` with
several helping structures, implementing Rust-style `Result`, but with
pipe-syntax.

// TODO

## To be done (WIP)

Some more functors like `FlatMap`
