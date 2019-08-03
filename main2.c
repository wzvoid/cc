//
// Created by 王振 on 2019-08-03.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
    int n = 5;
    int **p = (int **) malloc(sizeof(int *) * n);
    for (int i = 0; i < n; ++i) {
        int *q = (int *) malloc(sizeof(int) * n);
        p[i] = q;
        for (int j = 0; j < n; ++j) {
            *(*(p + i) + j) = i + j + 1;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", p[i][j]);
        }
        printf("\n");
    }
    //  释放动态内存
    for (int i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}