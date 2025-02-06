#include <stdio.h>



int main() {
    float x;
    scanf("%f",&x);
    
    if(x%2==0 && x==2){
        printf("Even");
    }

    else {
        printf("Odd");
    }
    return 0;
}