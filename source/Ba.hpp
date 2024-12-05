#pragma once
#include <SMHashlibrary_EXPORT.h>
#include <Baz.hpp>
#include "spdlog/spdlog.h"

namespace SMHashlibrary
{

class SMHASHLIBRARY_EXPORT Ba
	{
 public:
  static void say() {
    Baz::say();
#if (FOO_SMHashlibrary_DEBUG)
    const char* m = "SMHashlibrary.hpp (Debug)";
#else
    const char* m = "SMHashlibrary.hpp (Not debug)";
#endif
    SPDLOG_INFO("{}", m);
    cpp_say();
  }

 private:
  static void cpp_say();
};

}

