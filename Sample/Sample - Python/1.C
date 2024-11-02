#include <stdio.h>
struct emp
{
    int id;
    char name;
};
int main()
{
    struct emp e1;
    printf("Enter name: ");
    scanf("%c", &e1.name);
    printf("enter id = ");
    scanf("%d", &e1.id);
    printf("\nName = %c\nID= %d", e1.name, e1.id);
}