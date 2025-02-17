
#include <stdio.h>




int main() {
     
    
    int num1,num2;
    char c;
    scanf("%d%d%c",&num1,&num2,&c);
    int sum=(num1+num2);
    int sub=(num1-num2);
    int multi=(num1*num2);

    switch(c){
        case'+':
        printf("%d",sum);
        break;

        case'-':
        
        printf("%d",sub);
        break;

        case'*':
       
        printf("%d",multi);
        break;

        case'/':
         if((num2== 0)){
            
            printf("error");
            }
            else{
                int div=(num1/num2);
                printf("%d",div);
            
            
            }
            break;

        default:
           printf("error");
        
        
       

        
        
    }

    

    return 0;
}