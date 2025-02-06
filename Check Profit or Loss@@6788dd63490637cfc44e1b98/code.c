#include <stdio.h>



int main() {
    int sellingprice;
    int costprice;
    scanf("%d",&sellingprice);
    scanf("%d",&costprice);

    if(sellingprice>costprice){
        printf("Profit");
    }
    else if( costprice>sellingprice){
        printf("Loss");
    }

    else{
        printf("No Profit No Loss");
    }
    return 0;
}