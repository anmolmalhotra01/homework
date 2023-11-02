#include <stdio.h>
int main() {
    int startReading, endReading;
    int units, bill;
    printf("Enter the starting meter reading: ");
    scanf("%d", &startReading);
    printf("Enter the ending meter reading: ");
    scanf("%d", &endReading);
    units = endReading - startReading;
    if(units <= 100) {
        bill = units * 3.50;
    }
    else if(units <= 500) {
        bill = 100 * 3.50 + (units - 100) * 2.50;
    }
    else {
        bill = 100 * 3.50 + 400 * 2.50 + (units - 500) * 3.00;
    }
    printf("Number of units consumed: %d\n", units);
    printf("Bill amount: %d\n", bill);
    return 0;
}
