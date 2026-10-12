#include <stdio.h>

int main() {
    float num1, num2, num3, average;

    // Prompt the user to enter three numbers
    printf("Enter three numbers: ");
    
    // Read the inputs from the user
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate the average
    average = (num1 + num2 + num3) / 3.0;

    // Print the calculated average with 2 decimal places
    printf("The average of the three numbers is: %.2f\n", average);

    return 0;
}