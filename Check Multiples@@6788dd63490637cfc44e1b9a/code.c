#include <stdio.h>


int main() {
    int x;
    scanf("%d",&x);
    int divisor;
    scanf("%d",&divisor);

    if(x%divisor==0){
        printf("Yes");
    }
    else{
        printf("No");
    }


   
    return 0;
}