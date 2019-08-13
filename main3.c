//
// Created by 王振 on 2019-08-13.
//

#include <stdio.h>

#pragma pack(4)
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

struct C {
    int a;
    short b[5];
};

int main() {
    struct A a;
    struct B b;
    struct C c;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d", sizeof(c));
    return 0;
}