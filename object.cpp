#include <iostream>

class ABC{};

extern "C" int do_addnum(int a, int b)
{
    std::cout << "do_addnum()\n" << std::flush;
    return a + b;
}
