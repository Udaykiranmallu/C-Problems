#include <stdio.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z'){
    printf("%c is upper case");
   }else{
    printf("%c is lower case");
   }
    
    return 0;
}