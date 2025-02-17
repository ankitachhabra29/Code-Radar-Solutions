#include <stdio.h>

int main() {
   int num ,i;
   scanf("%d",&num);
    
   if(num<=1){
    printf("Prime");

   }
   for(i=2;i<num;i++){
    if(num%i==0){
        printf("Not Prime");
    }
    
    }
    else if(num%i!=0){
        printf("Prime");
    
    }
    
    
   }
    
