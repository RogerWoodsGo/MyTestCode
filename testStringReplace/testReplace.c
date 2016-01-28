#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define BUFFER_MAX_REUSE_SIZE  (4 * 1024)
#define printd(x) printf("%d\n", x)
#define prints(x) printf("%s\n", x)

void replace_query(char* query, char* res){
    int cur_start=0, cur_end = 0, last_end = 0;
    char eq_sep = '=', and_sep = '&';
    int q_len = strlen(query);
    while(cur_start <= cur_end){
        if(*(query + cur_start) != eq_sep){
            cur_start++;
        }
        if(*(query + cur_end) != and_sep){
            cur_end++;
        }
        if(*(query + cur_start) == eq_sep && (*(query + cur_end) == and_sep) || (*(query + cur_end) == '\0')){
            if((cur_end - cur_start) > 4 && (strncmp(query + cur_start + 1, "__", 2) == 0) && (strncmp(query + cur_end - 2, "__", 2) == 0)){
                //prints(res);
                printd(cur_start - last_end + 1);
                strncat(res, query + last_end, cur_start - last_end + 1);
            }
            else{
                strncat(res, query + last_end, cur_end - last_end);
                prints(res);
            }
            if(*(query+ cur_end) == '\0') break;
            last_end = cur_end; 
            cur_start = cur_end;
            cur_end++;
        }
    }
}


int main(){
    //char* query = "m1=999&m2=__POS__&m3=__222__";
    char* query = (char*)calloc(40, sizeof(char));
    //char* query = "m1";
    scanf("%s", query);
    char res[BUFFER_MAX_REUSE_SIZE] = {'\0'};
    replace_query(query, res);
    printf("result is %s\n", res);
}
