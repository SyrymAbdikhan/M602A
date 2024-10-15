
#include <stdio.h>

int main(void) {
    
    char name[45];
    printf("What's your name: ");
    scanf("%s", name);
    printf("Hello %s!\n", name);

    return 0;
}
