#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (islower(ch))
        printf("%c\n", toupper(ch));
    else if (isupper(ch))
        printf("%c\n", tolower(ch));
    else
        printf("Not an alphabet character.\n");

    return 0;
}
