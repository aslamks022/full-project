#include <stdio.h>
int main(){
    int days;
    printf("Days late: "); scanf("%d", &days);
    printf("Fine: Rs.%.2f\n", days*2.36);
    return 0;
}
