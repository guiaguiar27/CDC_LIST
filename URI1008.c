#include <stdio.h>
void main(){
  int number , hours ;
  float MoneyPerHours;
  scanf("%d",&number);
  scanf("%d",&hours);
  scanf("%f",&MoneyPerHours);
  printf("NUMBER = %d\n",number);
  printf("SALARY = U$ %.2f\n",hours*MoneyPerHours);
}
