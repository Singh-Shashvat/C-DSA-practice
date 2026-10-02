#include <stdio.h>
#include <string.h>

void concatenateStrings() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("Concatenated String: %s\n", str1);
}

void reverseString() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    printf("Reversed String: %s\n", rev);
}

void checkPalindrome() {
    char str[100], rev[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++)
        rev[i] = str[len - i - 1];
    rev[len] = '\0';
    if (strcmp(str, rev) == 0)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");
}

int main() {
    concatenateStrings();
    reverseString();
    checkPalindrome();
    return 0;
}
