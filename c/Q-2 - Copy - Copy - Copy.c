#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>0){
        printf("a is positive");

    }else if(a==0){
        printf("a is neither nor negative");

    }else{
        printf("a is negative");
    }
    return 0;
}