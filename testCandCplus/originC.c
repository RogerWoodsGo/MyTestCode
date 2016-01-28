#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void call_cplus_func();
int fun_a(){
    int i;
    for(i = 0;i < 3;i++){
        if(i == 2)
            return i;
    }
}

int main(){
    struct st{
        int a;
        char* b;
    } *p;
    char* str = "hello";
    p = (struct st*)(malloc(sizeof(*p)));
     
    printf("%d\n",NULL == p->b);
    p->b = NULL;
    p->b = str;
    printf("%s\n", p->b);
    return 0;
}
