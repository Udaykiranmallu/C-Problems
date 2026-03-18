#include <stdio.h>
int main() {
    int X;
    scanf("%d",&X);
    if(X % 2==0 && X % 3==0){
        printf("Yes");
    }else{
        printf("No");
    }

    
    return 0;
}