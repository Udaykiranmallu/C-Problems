#include <stdio.h>
int main() {
    int salary;
    scanf("%d",&salary);
    if(salary>=20000){
        printf("the final salary is %d",salary+=2000);
    }else
    printf("the final salary is %d",salary+=1000);
    return 0;
}