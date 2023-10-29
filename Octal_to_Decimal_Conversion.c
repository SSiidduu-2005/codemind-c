#include <stdio.h>
#include <stdlib.h>

int main() {
    char octal_number[20];  // Input as a string
    long decimal_number;
    scanf("%s", octal_number);

    // Convert the octal number to decimal
    decimal_number = strtol(octal_number, NULL, 8);

    // Output the decimal number
    printf("%ld
", decimal_number);

    return 0;
}
