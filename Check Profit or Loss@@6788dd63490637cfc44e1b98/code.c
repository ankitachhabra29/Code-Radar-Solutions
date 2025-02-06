#include <stdio.h>



int main() {
    float selling_price;
    float cost_price;
    scanf("%f",&selling_price);
    scanf("%f",&cost_price);

    if(selling_price>cost_price){
        printf("Profit");
    }
    else if( cost_price>selling_price){
        printf("Loss");
    }

    else{
        printf("No Profit No Loss");
    }
    return 0;
}