#include <stdio.h>

void printMessage(char *ch);

char msg[] = "Happy New Year 2020";

int main() {
    printMessage(msg);
    return 0;
}

void printMessage(char *ch) {
    printf("%c", *ch);
    
    if (*ch == 0) {
        printf("\n");
    } else {
        printMessage(ch + 1);    
    }
}
