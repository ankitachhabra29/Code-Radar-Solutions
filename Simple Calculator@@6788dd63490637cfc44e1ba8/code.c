// Your code here...
#include <stdio.h>



int main() {
     
    char calculator;
    scanf("%c",&calculator);
    int num1,num2;
    scanf("%d%d",&num1,&num2);

    switch(calculator){
        case '+':
        result1=num1+num2;
        printf("%d",result1);

         case '-':
        result2=num1-num2;
        printf("%d",result2);

        case '*':
        result3=num1*num2;
        printf("%d",result3);

        case '/':
         if(num2!=0){
            result4=num1/num2;
            printf("%d",result4);}
            else{
                printf("")
            }
        
        default:
        printf()

        
        
    }

    

    return 0;
}