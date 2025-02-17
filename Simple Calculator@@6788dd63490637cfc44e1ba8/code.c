// Your code here...
#include <stdio.h>



int main() {
     
    
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    char calculator;
    scanf("%c",&calculator);

    switch(calculator){
        case '+':
        result=num1+num2;
        printf("%d",result);

         case '-':
        result=num1-num2;
        printf("%d",result);

        case '*':
        result=num1*num2;
        printf("%d",result);

        case '/':
         if(num2!=0){
            result=num1/num2;
            printf("%d",result);}
            else{
                printf("")
            }
        
        
       

        
        
    }

    

    return 0;
}