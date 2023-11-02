//write a program to check the smallest number among the given five numbers
#include <stdio.h>
int main() {
    int num1, num2, num3, num4, num5;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    int smallest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }
    if (num5 < smallest) {
        smallest = num5;
    }
    printf("The smallest number is: %d\n", smallest);
    return 0;
}
