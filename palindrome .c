#include <stdio.h>

int main() {
    int num, rev = 0, rem, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;         

    while (num != 0) {
        rem = num % 10;         
        rev = rev * 10 + rem;   
        num /= 10;              
    }

    printf("Reversed number = %d\n", rev);

    if (original == rev)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is Not a Palindrome number.\n", original);

    return 0;
}