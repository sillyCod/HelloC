//
// Created by SUOLONG on 2017/10/14.
//

#include <stdio.h>
#include <strings.h>

int max(int a, int b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}

int main () {
    char name[40] = "Alex Wang";
    int a = 3, b = 5;
    printf("%d.\n", max(a, b));
    printf("Hello, World!\n");
    printf("%s\n", name);
    /*
    for(int i = 0; i < 100; i++) {
        if((i % 2) == 0) {
            printf("%d.\n", i);
        }
    }
    */

    return 0;
}
