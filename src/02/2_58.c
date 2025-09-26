#include <stdio.h>
#include <stdint.h>

int is_little_endian(void) {
    unsigned int x = 1;
    unsigned char *p = (unsigned char *)&x;
    return *p == 1;
}

#ifdef TEST_MAIN
int main(void) {
    printf("%d\n", is_little_endian());
    return 0;
}
#endif
