// program to check if one is eligible for a loan
/*Name:Queen Esther
Ref.no:CT101/G/22453/24*/
#include <stdio.h>
int main() {
  // age=a,amount=am
  int a;
  float am;
  printf("Enter a:");
  scanf("%d", &a);
  printf("Enter am:");
  scanf("%f", &am);
  if (a >= 21 && am >= 21000) {
    printf("congradulations you are qualified for a loan");
  } else {
    printf("unfortunately we are unable to offer a loan");
  }
  return 0;
}
// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 