#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, num5;
    int sum, sumSquares;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    sum = num1 + num2 + num3 + num4 + num5;  
    sumSquares = (num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4) + (num5 * num5);
    printf("Sum of the numbers: %d\n", sum);
    printf("Sum of the squares: %d\n", sumSquares);
    return 0;
}