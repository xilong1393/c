#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a = '1';
    char b = '2';
    char c = '=';
    char d = '=';
    char e = '=';
    char f = '=';
    char *a_p = &a;

    printf("%d\n", a_p);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("%d\n", &d);
    printf("%d\n", &e);
    printf("%d\n", &f);

    printf("%u\n", a_p);
    printf("%u\n", &b);
    printf("%u\n", &c);
    printf("%u\n", &d);
    printf("%u\n", &e);
    printf("%u\n", &f);

    printf("%p\n", a_p);
    printf("%p\n", &b);
    printf("%p\n", &c);
    printf("%p\n", &d);
    printf("%p\n", &e);
    printf("%p\n", &f);

    return 0;
}