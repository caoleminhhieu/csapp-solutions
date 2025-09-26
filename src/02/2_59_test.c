#include <stdio.h>
#include <assert.h>

unsigned int compose_lsb(unsigned int x, unsigned int y);

int main(void) {
    unsigned int x = 0x89ABCDEFu;
    unsigned int y = 0x76543210u;
    unsigned int r = compose_lsb(x, y);
    printf("compose_lsb => 0x%08X\n", r);
    assert(r == 0x765432EFu);
    return 0;
}
