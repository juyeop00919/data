#include <stdio.h>

int main() {
    float num;
    printf("입력 : ");
    scanf("%f", &num);

    unsigned int bits = *(unsigned int*)&num;

    printf("%d/", (bits >> 31) & 1);
    for (int i = 30; i >= 23; i--) {
        printf("%d", (bits >> i) & 1);
        if (i == 27) printf(" ");
    }
    printf("/");

    for (int i = 22; i >= 0; i--) {
        printf("%d", (bits >> i) & 1);
        if (i == 19 || i == 15 || i == 11 || i == 7 || i == 3) printf(" ");
    }
    printf("\n");

    return 0;
}