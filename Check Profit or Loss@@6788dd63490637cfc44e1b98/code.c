#include <stdio.h>



int main() {
    int selling_price;
    int cost_price;
    scanf("%d",&selling_price);
    scanf("%d",&cost_price);

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