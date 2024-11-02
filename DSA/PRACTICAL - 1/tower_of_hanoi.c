#include <stdio.h>

void tower_of_hanoi(int disks, char source, char auxiliary, char target)
{
    if (disks == 1) {
        printf("Move disk 1 from rod %c to rod %c.\n", source, target);
        return;
    }
    tower_of_hanoi(disks - 1, source, target, auxiliary);
    printf("Move disk %d from rod %c to rod %c.\n", disks, source, target);
    tower_of_hanoi(disks - 1, auxiliary, source, target);
}

int main() {
    printf("\n HARSH D \n");
    int disks;
    printf("Enter the number of disks: ");
    scanf("%d", &disks);
    tower_of_hanoi(disks, 'A', 'B', 'C');

    int Number_of_Steps;
    Number_of_Steps=disks*disks-1;
    printf("The number of steps is %d", Number_of_Steps);
    return 0;
}
