#include <stdio.h>
#include <ctype.h>
int main(void) {
    int c;
    while((c = getchar()) != EOF) {
        if(islower(c))
            c = toupper(c);
        else if(isupper(c))
            c = toloper(c);
        printf("%c\n", c);
    }
    return 0;
}
