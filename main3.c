//
// Created by 王振 on 2019-08-13.
//

#include <stdio.h>

struct A {
    int a;
    short b;
    int c;
    char d;
};

struct B {
    int a;
    int c;
    short b;
    char d;
};

int main() {
    struct A a;
    struct B b;
    printf("%d\n", sizeof(a));
    printf("%d", sizeof(b));
    return 0;
}