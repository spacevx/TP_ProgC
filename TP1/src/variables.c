#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -5;
    unsigned char uc = 5;

    short s = 10;
    signed short ss = -10;
    unsigned short us = 10;

    int i = 100;
    signed int si = -100;
    unsigned int ui = 100;

    long l = 1000;
    signed long sl = -1000;
    unsigned long ul = 1000;

    long long ll = 10000;
    signed long long sll = -10000;
    unsigned long long ull = 10000;

    float f = 1.5;
    double d = 2.5;
    long double ld = 3.5;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long : %ld\n", l);
    printf("signed long : %ld\n", sl);
    printf("unsigned long : %lu\n\n", ul);

    printf("long long : %lld\n", ll);
    printf("signed long long : %lld\n", sll);
    printf("unsigned long long : %llu\n\n", ull);

    printf("float : %f\n", f);
    printf("double : %f\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
