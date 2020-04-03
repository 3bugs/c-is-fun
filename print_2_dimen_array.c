#include <stdio.h>

int main(void) {
    int array[][4] = {
        { 1, 2, 3, 4 },
        { 4, 1, 2, 3 },
        { 3, 4, 1, 2 },
        { 2, 3, 4, 1 }
    };

    for (int i = 0; i < 16; i++) {
        printf("%d%s", array[i / 4][i % 4], i % 4 == 3 ? "\n" : " ");
    }
    
    return 0;
}