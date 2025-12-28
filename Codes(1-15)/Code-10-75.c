#include <stdio.h>
int main() {
    int marks;
    scanf("%d",&marks);
    if(marks>=80 && marks<100){
        printf("Grade A",marks);
    }else if (marks>=60 && marks<80){
        printf("Grade B",marks);
    }else if (marks>=35 && marks<60){
        printf("Grade c");
    }else{
        printf("Fail");
    }
    return 0;
}