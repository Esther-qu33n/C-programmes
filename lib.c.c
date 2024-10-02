//program to determine  fineamount in a library
/*Name:Queen Esther
Reg.no:CT101/G/22453/24*/
#include <stdio.h>
int main(){
  //book id=bi,duedate=dd,returndate=rd,daysoverdue=ddue
  //finerate=fr,fineamount=fm
  int bi,dd,rd,ddue;
  float fr,fm;
  printf("Enter bi:");
  scanf("%d",&bi);
  printf("Enter dd:");
  scanf("%d",&dd);
  printf("Enter rd:");
  scanf("%d",&rd);
  ddue=rd-dd;
  if ("ddue<=7"){fr=20;}
  else if("ddue<=14"){fr=50;}
  else {fr=100;}
  fm=fr*ddue;
  printf("fm is:%f\n",fm);
  return 0;
  }
  
  
  
// Language:C 
// ProjectType:0 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 