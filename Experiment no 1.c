// Name : Swarup Suryakant Gaikwad  
#include<stdio.h>
int main() {
    float num1, num2, num3, sum, average;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    average = sum / 3;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
//output
/*Enter three numbers: 1 2 3
Sum: 6.00
Average: 2.00

[Process completed - press Enter] */


