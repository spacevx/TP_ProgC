#include <stdio.h>

int main() {
    printf("char : %lu octets\n", sizeof(char));
    printf("signed char : %lu octets\n", sizeof(signed char));
    printf("unsigned char : %lu octets\n\n", sizeof(unsigned char));

    printf("short : %lu octets\n", sizeof(short));
    printf("signed short : %lu octets\n", sizeof(signed short));
    printf("unsigned short : %lu octets\n\n", sizeof(unsigned short));

    printf("int : %lu octets\n", sizeof(int));
    printf("signed int : %lu octets\n", sizeof(signed int));
    printf("unsigned int : %lu octets\n\n", sizeof(unsigned int));

    printf("long : %lu octets\n", sizeof(long));
    printf("signed long : %lu octets\n", sizeof(signed long));
    printf("unsigned long : %lu octets\n\n", sizeof(unsigned long));

    printf("long long : %lu octets\n", sizeof(long long));
    printf("signed long long : %lu octets\n", sizeof(signed long long));
    printf("unsigned long long : %lu octets\n\n", sizeof(unsigned long long));

    printf("float : %lu octets\n", sizeof(float));
    printf("double : %lu octets\n", sizeof(double));
    printf("long double : %lu octets\n", sizeof(long double));

    return 0;
}

