#include <stdio.h>
int main(){
    int n;
    for(int i=n;i<=n;i++){
        for(int j=1;j<=i;j--){
            printf("*");
            if(i>j){
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}