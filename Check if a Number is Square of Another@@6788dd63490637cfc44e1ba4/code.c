#include <stdio.h>


int main() {
    float num1,num2;
    scanf("%f%f",&num1,&num2);

    if(num1*num1==num2){
      printf("Yes");
    }
    else if (num2*num2==num1){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
    return 0;
}