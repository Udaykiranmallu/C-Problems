#include <stdio.h>
int main() {
   int units;
   scanf("%d",&units);
   if(units<=100 ){
  

    printf(" the total bill is %d",units*1);
   }else{
    
    printf(" the total bill is %d",units*2);
   }

    
    return 0;
}