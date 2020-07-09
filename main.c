#include <stdio.h>
#include <string.h>

int main(int argc, char **argv){
    printf("Jenkins test code\n");
    if(0 == strcmp(argv[1], "1"))
        return -1;
    return 0;
}