#include <stdio.h>
#include <stdlib.h>

int main(void){
    char b = 'B';
    char * p = &b;
    char a = 'A';
    printf("%p\n", (void *)p);
    p = &a;
    printf("%p\n", (void *)p);
    p = (char *)malloc(sizeof(char));
    printf("%p\n", (void *)p);
    free(p);
    getchar();
    return 0;
}
