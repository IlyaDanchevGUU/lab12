/*
 * Студент: Данчев Илья Иванович
 * Группа: ПИ-1 1
 * Лабораторная работа 12
 */

#include <stdio.h>

void swap(int *a, int *b) {
   int temp = *a;
   *a = *b;
   *b = temp;
}

void order_pair(int *a, int *b) {
   if (*a > *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
   }
}

int main(void) {
   int x = 4, y = 7;
   int *p = &x;
   printf("=== Part 1: swap ===\n");
   printf("Before: %d %d\n", x, y);
   printf("Value through p: %d\n", *p);
   swap(&x, &y);
   printf("After: %d %d\n", x, y);
   printf("Value through p: %d\n", *p);

   int tests[][2] = {
      {7, 4},
      {-2, 0},
      {5, 5},
      {3, 2}  
   };
   int count = (int)(sizeof(tests) / sizeof(tests[0]));

   printf("\n=== Part 2: order_pair ===\n");
   for (int i = 0; i < count; i++) {
      int a = tests[i][0];
      int b = tests[i][1];
      printf("%d %d\n", a, b);
      order_pair(&a, &b);
      printf("%d %d\n", a, b);
   }
   return 0;
}