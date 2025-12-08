#include <stdio.h>

int main() {
    char str[100], reversed[100];
    int i, length = 0, j = 0;

    printf("Enter a string: ");
    gets(str);   // take input

    // calculate length of string
    while(str[length] != '\0') {
        length++;
    }

    // reverse string
    for(i = length - 1; i >= 0; i--) {
        reversed[j] = str[i];
        j++;
    }

    reversed[j] = '\0'; // add null character at end

    printf("Reversed string: %s\n", reversed);

    return 0;
}
