#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, l, count1 = 0, count2 = 0;

    printf("Enter a string to check: ");
    scanf("%s", s);
    l = strlen(s);
    for (i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("String is not valid\n");
            return 0;
        }
    }
    for (i = 0; s[i] == '0'; i++, count1++);
    while (s[i] == '1')
        i++;
    for (; s[i] == '0'; i++, count2++);
    if (count1 == count2)
        printf("The string satisfies the condition 0^n1^m0^n\nString Accepted\n");
    else
        printf("The string does not satisfy the condition 0^n1^m0^n\nString Not Accepted\n");

    return 0;
}

