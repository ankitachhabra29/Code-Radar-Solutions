#include <stdio.h>

int main() {
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>y){
        printf("%d",x);
    }
     else if(y>x){
        printf("%d",y);
    }
    else if (x==y){
        printf("%d",x);

    }
   
    
    return 0;
}