#include <stdio.h>

struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, sum;
    
    // Input the first distance
    printf("Enter the first distance in feet and inches: ");
    scanf("%d %d", &d1.feet, &d1.inches);
    
    // Input the second distance
    printf("Enter the second distance in feet and inches: ");
    scanf("%d %d", &d2.feet, &d2.inches);
    
    // Add the distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;
    
    // If the sum of inches is greater than or equal to 12, convert it to feet
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }
    
    // Output the result
    printf("The sum is %d feet %d inches.\n", sum.feet, sum.inches);
    
    return 0;
}

