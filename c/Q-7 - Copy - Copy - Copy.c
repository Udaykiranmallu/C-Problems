#include <stdio.h>
int main() {
   int leapyear;
   scanf("%d",&leapyear);
   if(leapyear %4  && leapyear!=100 || leapyear !=400){
    printf("leapyear");
   }
   else{
    printf("Not a leapyear");
   }
    
    return 0;
}