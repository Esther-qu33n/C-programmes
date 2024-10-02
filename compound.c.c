//programming to get compound interest
/*Name:Queen Esther
Ref no.CT101/G/22453/24
Date:24th/09/2024*/
#include<stdio.h>
#include<math.h>
int main (){
  //a=total amount,p=principle,r=rate,n=number of compounding times,t=number of years
  //ci=compound interest
  float a,p,r,n,t,ci;
  printf ("Input principle:");
  scanf("%f",&p);
  printf("Input rate:");
  scanf("%f",&r);
  printf("Input number of compounding years:");
  scanf("%f",&n);
  printf("Input number of years:");
  scanf("%f",&t);
  a=p*pow((1+r/(n*100)),(n*t));
  printf("total amount=%f\n",a);
  ci=(a-p);
  printf("compuond interest=%f\n",ci);
  return 0;
  }


// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 