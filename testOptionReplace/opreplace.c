#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#define prints(x) printf("%s\n", x);

void replace_option_field(char *option_path,const char *key, char* target_str, int op_path_len, int target_len) {

    if(!option_path || !key || !target_str || op_path_len <= 0 || target_len <= 0)
        return;
    prints(option_path);

    char sep = '&';

    int key_len = (int)strlen(key);
    int i = 0;

    char key_str[32] = {'\0'};
    sprintf(key_str, "%c%s%s", sep, key, "=");

    char key_str_start[32] = {'\0'};
    sprintf(key_str_start, "%s%s", key, "=");
    char *p = strstr(option_path, key_str);
    char *temp = (char*)calloc(op_path_len + 1, 1);
    assert(temp != NULL);
    int is_start = 0;
    int p_start = 0;
    int p_end = 0;
    if(!p) {
        p = strstr(option_path, key_str_start);
        is_start = 1;
        if(!p){
            strncat(option_path, key_str, strlen(key_str));
            strncat(option_path, target_str, target_len);
            free(temp);//没找到，是否追加
            return;
        }
    }
    if(p) {

        printf("find key in %d\n", p - option_path);
        printf("find option_path in %s\n", option_path);
        if(!is_start) p += key_len + 1;
        else
            p += key_len;
        p_start = p - option_path;
        printf("the p_start is %s, the key len is %d\n", p, key_len);
        while(*p != '\0' && p_start + i < op_path_len) {
            ++p;
            ++i;
            if(*p == sep){
                break;
            }
        }
        p_end = p - option_path;
        if(p_start == p_end){//对于key=的情形如何处理
            //strncat(option_path, target_str, target_len);
            free(temp);
            return;
        }
        else{
            strncpy(temp, option_path + p_end, op_path_len - p_end);
                        printf("[INFO] the temp = %s, p_start = %d, p_end = %d, op_path_len = %d\n",temp, p_start, p_end, op_path_len);
            strncpy(option_path + p_start + 1, target_str, target_len);
            strncpy(option_path + p_start + 1 + target_len, temp, strlen(temp));
            option_path[p_start + 1 + target_len + strlen(temp)] = '\0';
        }

    }

    free(temp);
}


int main(){
    char* op_path = (char*)calloc(40, 1);
    printf("Input the option path:\n");
    scanf("%s", op_path);
    printf("Input the target string:\n");
    char* target_str = (char*)calloc(40, 1);
    scanf("%s", target_str);
    replace_option_field(op_path, "dx", target_str, strlen(op_path), strlen(target_str));
    replace_option_field(op_path, "np", "ddddd", strlen(op_path), strlen("ddddd"));
    printf("the replaced string is %s\n", op_path);
    free(op_path);
}
