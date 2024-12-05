#pragma once
#include <Ba.hpp>
#include "spdlog/spdlog.h"
namespace SMHashlibrary
{

void Ba::cpp_say() {
#if (FOO_SMHashlibrary_DEBUG)
  const char* m = "SMHashlibrary.cpp (Debug)";
#else
  const char* m = "SMHashlibrary.cpp (Not debug)";
#endif
  SPDLOG_INFO(m);
}

} // namespace foo
