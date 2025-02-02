#include <stdio.h>


int main() {
    int n1;
    scanf("%d",&n1);

    int n2;
    scanf("%d",&n2);

    int result;
    result= n1 & n2;
    printf("%d", result);
    return 0;
}