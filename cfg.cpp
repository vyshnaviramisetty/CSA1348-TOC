#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int l, i, count[2] = {0};

    printf("Enter a string to check: ");
    scanf("%s", s);

    l = strlen(s);

    for (i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            printf("String is not valid.\n");
            return 0;
        }
        count[s[i] - '0']++;
    }

    if (count[0] != count[1] || l % 2 != 0) {
        printf("The string does not satisfy the condition 0^n1^n.\n");
    } else {
        printf("The string satisfies the condition 0^n1^n.\n");
    }

    return 0;
}

