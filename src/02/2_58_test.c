#include <stdio.h>
#include <assert.h>

int is_little_endian(void);

int main(void) {
    int v = is_little_endian();
    printf("is_little_endian() => %d\n", v);
    // We cannot assert a specific endianness portably, but we can ensure return is 0 or 1
    assert(v == 0 || v == 1);
    return 0;
}
