#include <stdio.h>

int main() {
    float a,b;
    scanf("%f%f",&a,&b);

    if(a>b){
        printf("First");
    }
     else if(a<b){
        printf("Second");
     }
    else{
        printf("Equal");
    }
    return 0;
}