#include <stdio.h>
int main() {
   char ch;
   scanf("%c",&ch);
   if(ch>='A' && ch<'Z'){
    printf("Alphabet",ch);
   } else if(ch>='a' && ch<'z'){
        printf("Alphabet",ch);
    
   }else{
    printf("Not a alphabet");
   }
    return 0;
}