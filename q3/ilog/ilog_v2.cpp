#include <iostream>

static size_t ilog2(size_t i)
{
    size_t result = 0;
    while (i >= 65536) {
        result += 16;
        i >>= 16;
    }
    while (i >= 256) {
        result += 8;
        i >>= 8;
    }
    while (i >= 16) {
        result += 4;
        i >>= 4;
    }
    while (i >= 2) {
        result += 1;
        i >>= 1;
    }
    return result;
}

int main()
{
    size_t input = 65536;    // `input` can be modified
    std::cout << "ilog2 of " << input << " is " << ilog2(input) << std::endl;
    return 0;
}
