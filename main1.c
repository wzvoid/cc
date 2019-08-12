#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

// dest 与 src 所指的内存空间不能重叠, src的'\0'也一并拷贝过去了, dest必须有足够的空间来容纳src.
char *wz_strcpy(char *dest, const char *src) {
    assert(src != NULL && dest != NULL);
    char *p = dest;
    while ((*dest++ = *src++) != '\0');
    return p;
}

// dest 与 src 所指的内存空间不能重叠, 覆盖dest结尾处的'\0'并添加'\0', dest必须有足够的空间来容纳src.
char *wz_strcat(char *dest, const char *src) {
    assert(src != NULL && dest != NULL);
    char *p = dest;
    while (*dest) ++dest;
    while ((*dest++ = *src++) != '\0');
    return p;
}

//int wz_strcmp(const char *str1, const char *str2) {
//    assert(str1 != NULL && str2 != NULL);
//    int i;
//    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; ++i) {
//        if (str1[i] != str2[i])
//            return str1[i] - str2[i] > 0 ? 1 : str1[i] - str2[i] == 0 ? 0 : -1;
//    }
//    return str1[i] - str2[i] > 0 ? 1 : str1[i] - str2[i] == 0 ? 0 : -1;
//}

int wz_strcmp(const char *str1, const char *str2) {
    assert(str1 != NULL && str2 != NULL);
    int flag = 0;
    while (!(flag = *str1 - *str2) && *str1) { //compare必须在前面！！如："ab","abc"，先判断前面的只有当前面为真时才有必要判断后面的。
        ++str1;
        ++str2;
    }
    if (flag > 0)
        return 1;
    else if (flag < 0)
        return -1;
    else
        return 0;
}

int main() {
    char p[100] = {'h', 'e', 'l', 'l', 'o'};
    char *p2 = "wzvoid";
//    printf("%s", wz_strcat(p, p2));
    printf("%d", wz_strcmp(p, p2));
    return 0;
}