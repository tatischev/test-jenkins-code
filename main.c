#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int opt = 0;
    int isCaseInsensitive = 0;
    while ((opt = getopt(argc, argv, "i")) != -1)
    {
        switch (opt) {
        case 'i': 
            isCaseInsensitive = -1;
            break;
        default:
            break;
        }
    }
    printf("Input code: %d\n", isCaseInsensitive);
    return isCaseInsensitive;
}
