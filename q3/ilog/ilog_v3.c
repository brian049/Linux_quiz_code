#include <stdio.h>
#include <stdint.h>

int ilog32(uint32_t v)
{
    return (31 - __builtin_clz(v | 1));
}

int main() {
    uint32_t value = 87654321; // `value` can be modified
    int result = ilog32(value); // ilog32 function
    printf("The logarithm base 2 of %u is %d\n", value, result); // print out
    return 0;
}
