#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("Uppercase");
    }
    else (islower(a))
    {
        printf("lowercase");
    }
    return 0;
}