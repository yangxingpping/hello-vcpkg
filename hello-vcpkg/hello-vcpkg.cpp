#include "hello-vcpkg.h"
#include <fmt/format.h>

void tl::say_hello(std::string_view name)
{
   fmt::print("Hello, {}!", name);
}
