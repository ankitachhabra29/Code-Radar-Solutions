#include <stdio.h>
int main(){
    int n ;
    int num=1 ;
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
           
           
            printf("%d ",num); 
            num++;
            if(num==n);
            break;
        }
        printf("\n");
    }
    return 0;
}