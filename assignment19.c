
#include <stdio.h>

int main() {
    int a, b, c;

    
    printf("Enter three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if a is between b and c
    if ((a > b && a < c) || (a < b && a > c)) {
        printf("%d is between %d and %d\n", a, b, c);
    } else {
        printf("%d is not between %d and %d\n", a, b, c);
    }

    return 0;
}
