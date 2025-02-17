// Your code here...
#include <stdio.h>



int main() {
     
    
    int num1,num2,result;
    char calculator;
    scanf("%d %d",&num1,&num2);
    scanf("%c",&calculator);

    switch(calculator){
        case '+':
        result = num1 + num2;
        printf("%d\n",result);
        break;

        case '-':
        result=num1-num2;
        printf("%d\n",result);
        break;

        case '*':
        result=num1*num2;
        printf("%d\n",result);
        break;

        case '/':
         if(num2 != 0){
            result= num1/num2;
            printf("%d\n",result);
            }
            else{
                printf("Error");
            }
            break;

       
        
       

        
        
    }

    

    return 0;
}