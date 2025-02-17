
#include <stdio.h>




int main() {
     
    
    int num1,num2;
    char calculator;
    scanf("%d %d %c",&num1,&num2,&calculator);
    int sum=(num1+num2);
    int sub=(num1-num2);
    int multi=(num1*num2);

    switch(calculator){
        case '+':
        printf("%d\n",sum);
        break;

        case '-':
        
        printf("%d\n",sub);
        break;

        case '*':
       
        printf("%d\n",multi);
        break;

        case '/':
         if(num2== 0){
            
            printf("error");
            }
            else{
                int div=(a/b);
                printf("%d",div);
            
            break;
            }

        default :
           printf("error");
        
        
       

        
        
    }

    

    return 0;
}