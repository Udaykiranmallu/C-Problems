#include <stdio.h>
int main() {
   int leapyear;
   scanf("%d",&leapyear);
   if(leapyear %4==0  && leapyear!=100 || leapyear %400==0){
    printf("leapyear");
   }
   else{
    printf("Not a leapyear");
   }
    
    return 0;
}