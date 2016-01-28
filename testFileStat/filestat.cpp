#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    struct stat buf;
    stat("QQ", &buf);
    printf("/etc/hosts file size = %d/n", buf.st_mtime);
    return 0;
}
