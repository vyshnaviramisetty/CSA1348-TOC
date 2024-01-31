#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, l, flag = 1;

    printf("Enter a string to check: ");
    scanf("%s", s);

    l = strlen(s);

    for (i = 0; i < l; i++) {
        if (s[i] != '0' && s[i] != '1') {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("String is Valid\n");

        for (i = 0; i < l - 2; i++) {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1') {
                printf("Substring 101 exists. String accepted\n");
                return 0;
            }
        }

        printf("Substring 101 does not exist. String not accepted\n");
    } else {
        printf("String is Not Valid\n");
    }

    return 0;
}

