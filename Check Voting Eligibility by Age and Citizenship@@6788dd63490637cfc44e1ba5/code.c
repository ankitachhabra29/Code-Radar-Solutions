#include <stdio.h>


int main() {
    int age;
    scanf("%d",&age);
    
    int citizenstatus;
    scanf("%d",&citizenstatus);

    if(age>=18 && citizenstatus==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}