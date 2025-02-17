
#include <stdio.h>
#include <math.h>



int main() {
     
    
    float num1,num2,result;
    char calculator;
    scanf("%f %f",&num1,&num2);
    scanf("%c",&calculator);

    switch(calculator){
        case '+':
        result = num1 + num2;
        printf("%f\n",result);
        break;

        case '-':
        result=num1-num2;
        printf("%f\n",result);
        break;

        case '*':
        result=num1*num2;
        printf("%f\n",result);
        break;

        case '/':
         if(num2 != 0){
            result= num1/num2;
            printf("%f\n",result);
            }
            else{
                printf("Error");
            }
            break;

        default :
           printf("Error");
        
        
       

        
        
    }

    

    return 0;
}