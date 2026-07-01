#include <stdio.h>
int main(){
    float marks;
    printf("Enter marks: "); scanf("%f", &marks);
    printf("GPA: %.1f/10.0\n", marks/10.0);
    if(marks>=40) printf("PASS\n"); else printf("FAIL\n");
    return 0;
}
