#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, world!";
    char dst[6];

    size_t len = strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);
    printf("Length of source string: %zu\n", len);

    return 0;
}