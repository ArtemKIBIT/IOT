#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2 || strlen(argv[1]) == 0) {
        printf("Unknown user.\n");
        return 0;
    }
    if (strcmp(argv[1], "Admin") == 0) {
        printf("Hello, Administrator!\n");
    } else {
        printf("Hello, %s!\n", argv[1]);
    }
    return 0;
}