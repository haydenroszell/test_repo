#include <stdio.h>
/* This is a hello world program */

int main() {
    int a = 1;
    printf("Hello, world");
    fputc('\n', stdout);
    if (a == 1)
        printf("true\n");
    
    return 0;
}
