#include <stdio.h>



int main() {
    float sellingprice,costprice;

    scanf("%f",&sellingprice);
    scanf("%f",&costprice);

    if(sellingprice>costprice){
        printf("Loss");
    }
    else if( costprice>sellingprice){
        printf("Profit");
    }

    else{
        printf("No Profit No Loss");
    }
    return 0;
}