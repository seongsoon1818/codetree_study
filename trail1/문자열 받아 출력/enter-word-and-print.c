#include <stdio.h>
#include <stdlib.h>

int main() {
    char* a = (char*)malloc(sizeof(char) * 101);
    scanf("%s", a);
    printf("%s", a);
    return 0;
}