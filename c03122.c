#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("입력 : ");
    fgets(str, sizeof(str), stdin);

    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32); 
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32); 
        }
        else {
            printf("%c", str[i]);
        }
    }

    return 0;
}