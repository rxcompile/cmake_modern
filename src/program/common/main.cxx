#include <cstdio>
#include <mylib/header.hpp>

static int state = 0;

void foo()
{
    state++;
    printf("bar1 %d\n", state);
    state++;
    printf("bar2 %d\n", state);
}

int main()
{
    state++;
    int val = printf("Hello %d\n", state);
    foo();
    state++;
    printf("Bye %d\n", state);
    return val - 8;
}
