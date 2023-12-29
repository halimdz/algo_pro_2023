#include <stdio.h>
#include <stdlib.h>

int main() {
  int SumMoney, Da100, Da50, Da10, Da2, Da1;
  printf("Enter the sum of money in Dinars: ");
  scanf("%d", &SumMoney);
  Da100 = SumMoney / 100;
  SumMoney = SumMoney % 100;
  Da50 = SumMoney / 50;
  SumMoney = SumMoney % 50;
  Da10 = SumMoney / 10;
  SumMoney = SumMoney % 10;
  Da2 = SumMoney / 2;
  SumMoney %= 2;
  Da1 = SumMoney;
  printf("Number of 100 Dinars is: %d\n", Da100);
  printf("Number of 50 Dinars is: %d\n", Da50);
  printf("Number of 10 Dinars is: %d\n", Da10);
  printf("Number of 2 Dinars is: %d\n", Da2);
  printf("Number of 1 Dinar is: %d\n", Da1);
  return 0;
}
