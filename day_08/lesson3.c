#include <stdio.h>
#include <stdbool.h>

int main(){
    _Bool test1 = 2<5;
    bool test2  = true;
    bool test3  = 0;

    printf("%s\n", test1 ? "a": "b");
    printf("%s\n", test2 ? "c":"d");
    printf("%d", test3);

    char c = getchar();
}