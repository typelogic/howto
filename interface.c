#include <stdio.h>

//class AAA{};

int do_addnum(int a, int b);

int addnum(int a, int b)
{
    int sum = do_addnum(a, b);
    return sum;
}
