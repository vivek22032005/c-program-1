#include <stdio.h>

int main() {
    int n, i, num, lowest;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers separated by space: ");
    scanf("%d", &num);
    lowest = num; // initialize lowest to the first number
    for (i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num < lowest) {
            lowest = num;
        }
    }
    printf("Lowest is %d", lowest);
    return 0;
}
