#include <stdio.h>



int main() {
    float sellingprice,costprice;

    scanf("%f",&sellingprice);
    scanf("%f",&costprice);

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