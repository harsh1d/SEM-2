#include <stdio.h>

int main()
{
    printf("\n HARSH D \n");
    int a[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int position, element, i;

    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &position);

    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Move elements to create space for the new element
    for (i = size; i >= position; i--) {
        a[i] = a[i - 1];
    }

    a[position - 1] = element;
    size++;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
