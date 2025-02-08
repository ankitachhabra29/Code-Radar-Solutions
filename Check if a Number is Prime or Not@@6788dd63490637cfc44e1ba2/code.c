#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);

    if(x>1 && x%x==0 && x%1==0){
        printf("Prime");
    }
    else if(x==2){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    
}