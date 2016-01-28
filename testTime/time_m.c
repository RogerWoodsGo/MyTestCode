#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdint.h>
#include <unistd.h>
#include <errno.h>
#include <fcntl.h>

int update_time_(){
    time_t sec;
    int msec;
    int current_msec_;
    struct timeval tv;

    gettimeofday(&tv, NULL);

    sec = tv.tv_sec;
    msec = tv.tv_usec / 1000;

    current_msec_ = sec * 1000 + msec;

    return current_msec_;
}


int main(){
//    printf("%ld\n", update_time_());
    printf("%d\n", update_time_());
    fflush(stdout);
    sleep(4);
 //   printf("%ld\n", update_time_());
    printf("%d\n", update_time_());

}
