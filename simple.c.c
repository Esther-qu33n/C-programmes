//programming to calcutate simple interest
/*Name:Queen Esther
Ref no.CT101/G/22453/24
Date:24th/09/2024*/
#include<stdio.h>
#include<math.h>
int main(){
  //p=principle,r=rate,t=number of years
  //si=simple interst
  float p,r,t,si;
  printf("Input principle:");
  scanf("%f",&p);
  printf("Input rate:");
  scanf("%f",&r);
  printf("Input number of years:");
  scanf("%f",&t);
  si=(p*t*r/100);
  printf("simple interest=%f\n",si);
  return 0;
  }
  
  


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 