#include <stdio.h>


int main() {
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    if(num2==num1**2){
      printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}