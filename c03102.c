#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
   float f;
   int s;

   printf("실수 : ");
   scanf("%f", &f);

   s = (f * 256);

   for (int i = 15; i >= 0; i--)
   {
      printf("%d", (s >> i) & 1);
      if (i == 8) printf(".");
   }
}