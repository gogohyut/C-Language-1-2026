#include <stdio.h>
#include <ctype.h>
#include "my_header.h"
int main(void) {
    int c;
    while ((c = getchar()) != EOF) {
        printf("%c", up_down_case(c));
    }
    return 0;
}
int up_down_case(int c) {
    if (islower(c)) {
        return toupper(c);
    } 
    else if (isupper(c)) {
        return tolower(c);
    }
    return c;
}
