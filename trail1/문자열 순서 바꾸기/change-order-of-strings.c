#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s = (char*)malloc(sizeof(char*) * 101); 
    char *t = (char*)malloc(sizeof(char*) * 101);
    scanf("%s %s", s, t);
    printf("%s\n%s", t, s);
    return 0;
}