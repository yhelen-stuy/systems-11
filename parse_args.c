#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ) {
    char** args = (char **)calloc(6, sizeof(char *));
    int i;
    for(i = 0; line; i++) {
        args[i] = strsep(&line, " ");
    }
    args[i] = NULL;
    return args;
}

int main(int argc, char *argv[]) {
    char **args = parse_args(argv[1]);
    int i = 0;
    for(; i < 6; i++) {
        printf("arg%d: %s\n", i, args[i]);
    }
    execvp(args[0], args);
}
