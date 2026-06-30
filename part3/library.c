#include <stdio.h>
int main(){
    char book[50], student[50]; int days;
    printf("Book: "); scanf("%s", book);
    printf("Student: "); scanf("%s", student);
    printf("Days: "); scanf("%d", &days);
    printf("Total: Rs.%.2f\n", days*2.25);
    return 0;
}
