#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);

    int shift;
    scanf("%d",&shift);

    int result;
    result=num>>shift;
    printf("%d", result);
    return 0;
}