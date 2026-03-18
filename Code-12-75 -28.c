#include <stdio.h>
int main() {
   int a;
   scanf("%d",&a);
   if(a>=0 && a<9){
    printf("Single digit",a);
   }else{
    printf("Not a single digit");
   }
       
    return 0;
}