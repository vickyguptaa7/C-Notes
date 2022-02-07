#include <stdio.h>
int main()
{
  float earning;
  float tax = 0;
  printf("Your Annual  Earning :");
  scanf("%f", &earning);

  if (earning <= 500000 && earning >= 250000)
  {
    tax = tax + 0.05 * (earning - 250000);
  }

  if (earning <= 1000000 && earning >= 500000)
  {
    tax = tax + 0.2 * (earning - 500000);
  }

  if (earning > 1000000)
  {
    tax = tax + 0.3 * (earning - 1000000);
  }
  printf("Total Tax You Haved To Pay :%f Rs", tax);
  return 0;
}

