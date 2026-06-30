#include <stdio.h>
int main(){
    int roll; char name[50];
    printf("Enter roll: "); scanf("%d", &roll);
    printf("Enter name: "); scanf("%s", name);
    printf("Marked %s Present\n", name);
    return 0;
}
