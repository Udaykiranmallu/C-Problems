#include <stdio.h>

int main() {
    int n,count;
    scanf("%d", &n);
    for (int i=2;i<=n;i++) {
        int prime=1;
        for(int j=2;j+j<=i;j++) 
        {
            if(i%j==0){
                prime=0;
            }
        }
        if(prime)
            count++;
        }
    

    printf("%d", count);

    return 0;
}
