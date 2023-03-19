/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float distance, total1, total2, Total, remain;

  printf("Enter distance travelled in km by rented vehicle :");
  scanf("%f", &distance);  //getting and reading user input

  if(distance <= 30)   //checking conditions
  {
    total1 = distance * 50.00;
  }
  else
  {
    total1 = 30 * 50.00;

    remain = distance - 30;
    total2 = remain * 40.00;
  }

  Total = total1 + total2;  //adding total payment

  printf("Total bill : %.2f", Total);  //printing total
  
  return 0;
}
