#include <stdio.h>
int main() {
    int cost;
    int selling;
    scanf("%d %d",&cost,&selling);
    if(selling>cost){
        printf("Profit");
    }else{
        printf("Loss");
    }
    
    return 0;
}