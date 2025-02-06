#include <stdio.h>



int main() {
    int x;
    scanf("%d",&x);
    
    if(x%2==0 && x==2){
        printf("Even");
    }

    else if (x%2!=0){
        printf("Odd");
    }
    else{
        printf("Zero")
    }


    return 0;
}