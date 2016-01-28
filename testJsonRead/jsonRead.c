#include <stdio.h>
#include<string.h>

int main(){
    int var_a = 11;
    int i;
    char* p = "19911202";
    for(i = 0; i < strlen(p); i++){
        printf("%c ", *p);
    }
    int b = 90;
    printf("%d\n", b);
    return 0;
}
