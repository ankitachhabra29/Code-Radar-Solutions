#include <stdio.h>

int main() {
    int x;
    scanf("%d",&x);
    int i;
    scanf("%d",&i);
if(x<=1){
    printf("Not Prime");
}
for(i=2;i<=x/2;i++){
    if(x%i==0){
        printf("Prime");
    }
}
else{
    printf("Not Prime");
}
    
}