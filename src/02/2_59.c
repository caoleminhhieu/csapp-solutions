#include <stdint.h>

unsigned int compose_lsb(unsigned int x, unsigned int y) {
    return (y & 0xFFFFFF00u) | (x & 0xFFu);
}

#ifdef TEST_MAIN
#include <stdio.h>
int main(void) {
    unsigned int x = 0x89ABCDEFu;
    unsigned int y = 0x76543210u;
    unsigned int r = compose_lsb(x, y);
    printf("0x%08X\n", r);
    return 0;
}
#endif
