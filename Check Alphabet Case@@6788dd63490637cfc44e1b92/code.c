#include <stdio.h>

int main() {
    char a;
    scanf("%c",&a);
    if(isupper(a))
    {
        printf("Uppercase");
    }
    else if (islower(a))
    {
        printf("lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}