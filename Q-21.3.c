#include <stdio.h>
int main() {
   int pass;
   scanf("%d",&pass);
   if(pass == 1234){
    printf("Access granted",pass);
   }else{
    printf("Access denied",pass);
   }
    
    return 0;
}