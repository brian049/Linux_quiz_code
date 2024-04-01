#include <stdio.h>

int ilog2(int i)
{
    int log = -1;
    while (i) {
        i >>= 1;
        log++;
    }
    return log;
}


// int ilog2(unsigned long v)
// {
// 	int l = 0;
// 	while ((1UL << l) < v)
// 		l++;
// 	return l;
// }


int main() {
    int input = 87654321;   // `input` can be modified
    printf("The logarithm base 2 of %d is: %d\n", input, ilog2(input));
    return 0;
}
