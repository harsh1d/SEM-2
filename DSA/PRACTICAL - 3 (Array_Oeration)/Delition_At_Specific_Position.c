#include <stdio.h>

int main()
{
    printf("\n HARSH D \n");
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int position,i;

    printf("Enter the position which element you want to delete: ");
    scanf("%d", &position);

    if (position < 1 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Move elements to delete the element at the specified position
    for (i = position - 1; i < size - 1; i++) {
        a[i] = a[i + 1];
    }

    size--;

    printf("Array after deletion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
