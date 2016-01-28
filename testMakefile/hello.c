#include"hello.h"
#include <stdlib.h>

/* --------------------------------------------------------------------------*/
/**
 * @brief hello main
 *
 * @Returns 
 */
/* ----------------------------------------------------------------------------*/

typedef struct ff{
    unsigned int mm;
    int yy;
}ff_t;

int main(){
    ff_t ft;
    ff_t* ft_p = (ff_t*)malloc(sizeof(*ft_p));
    printf("the value of mm is %d, the value of mm_p is %d\n", ft.mm, ft_p->mm);
    print(3);
    printf("hello makefile");
    return 0;
}
