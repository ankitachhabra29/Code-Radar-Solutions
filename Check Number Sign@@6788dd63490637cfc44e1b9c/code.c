#include <stdio.h>


int main() {
    float num;
    scanf("%f",&num);
    if(num>0){
        printf("Positive");
    }
    else if(num<0){
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    return 0;
}