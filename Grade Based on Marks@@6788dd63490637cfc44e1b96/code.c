#include <stdio.h>


int main() {
    float marks;
    scanf("%f",&marks);
    
    if (marks>=90){
        printf("A");
    }
     else if (marks>=80 && marks<90){
        printf("B");
    }
     else if (marks>=70 && marks<80){
        printf("C");
    }
     else if (marks>=60 && marks<70){
        printf("D");
    }
     else if (marks<60){
        printf("F");
    }
    

    printf("%s", welcome());
    return 0;
}