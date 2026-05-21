#include <stdio.h>

int main() {
    // Variable declarations
    double hours, rate;
    double regpay, ovtpay, netpay;

    // 1. Accept Inputs
    printf("Enter total hours worked: ");
    scanf("%lf", &hours);
    
    printf("Enter hourly rate of pay ($): ");
    scanf("%lf", &rate);

    // 2. Compute Salary using if-else logic
    if (hours <= 40) {
        regpay = hours * rate;
        ovtpay = 0.0;
    } else {
        regpay = 40.0 * rate;
        ovtpay = (hours - 40.0) * rate * 1.5;
    }

    // Calculate total net pay
    netpay = regpay + ovtpay;

    // 3. Display Outputs
    printf("\n--- Salary Breakdown ---\n");
    printf("Regular Pay:  $%'.2f\n", regpay);
    printf("Overtime Pay: $%'.2f\n", ovtpay);
    printf("Net Pay:      $%'.2f\n", netpay);
    printf("------------------------\n");

    return 0;
}