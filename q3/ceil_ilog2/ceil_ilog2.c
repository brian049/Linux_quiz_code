#include <stdio.h>
#include <stdint.h>

int ceil_ilog2(uint32_t x)
{
    uint32_t r, shift;

    x -= (x > 0);
    r = (x > 0xFFFF) << 4;
    x >>= r;
    shift = (x > 0xFF) << 3;
    x >>= shift;
    r |= shift;
    shift = (x > 0xF) << 2;
    x >>= shift;
    r |= shift;
    shift = (x > 0x3) << 1;
    x >>= shift;
    return (r | shift | (x > 1)) + 1;
}

int main() {
    uint32_t test_case = 3;	// `test_case` can be modified
    printf("ceil_ilog2(%u) = %d\n", test_case, ceil_ilog2(test_case));
    return 0;
}
