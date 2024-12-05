#include <Baz.hpp>
#include "spdlog/spdlog.h"

namespace SMHashlibrary
{
	void Baz::cpp_say()
	{
#if (FOO_BAZ_DEBUG)
		const char* m = "Baz.cpp (Debug)";
#else
		const char* m = "Baz.cpp (Not debug)";
#endif
		SPDLOG_INFO("{}", m);
	}

} // namespace foo
