/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int n, i, sum;

  printf("Enter nth number to calculate sum :");  //getting user input
  scanf("%d", &n);

  for(i = 0; i <= n; i++)  //calculating sum
    {
      sum = sum + i;
    }

  printf("sum = ");  //printing numbers 

  for(i = 0; i <= n; i++)
    {
      printf("%d + ", i);
    }

  printf(" = %d", sum);  //printing sum
  
  return 0;
}
