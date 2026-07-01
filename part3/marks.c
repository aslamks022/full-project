#include <stdio.h>
int main(){
    char name[50]; int m;
    printf("Name: "); scanf("%s", name);
    printf("Marks: "); scanf("%d", &m);
    printf("Student: %s Marks: %d\n", name, m);
    if(m>=90) printf("Grade: A\n");
    else if(m>=75) printf("Grade: B\n");
    else printf("Grade: C\n");
    return 0;
}
