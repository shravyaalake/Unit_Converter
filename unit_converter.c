#include <stdio.h>

int main() {
    char category;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    float tempFahrenheit; // User inputted Fahrenheit
    float tempCelsius;    // User inputted Celsius
    float amountUSD;      // User inputted amount in USD
    float amountOunce;    // User inputted amount in Ounce
    float amountGram;     // User inputted amount in Gram

    // Conversion results
    float fahrenheitToCelsius;
    float celsiusToFahrenheit;
    float usdToEuro;
    float usdToJPY;
    float usdToRMB;
    float ounceToPounds;
    float gramToPounds;

    printf("Welcome to Unit Converter! \n");
    printf("Categories: \n");
    printf("Temperature (T)\nCurrency (C)\nMass (M)\n");
    printf("Please enter the letter corresponding to the category you want to convert: ");
    scanf(" %c", &category); // Note the space before %c to consume any leftover newline character

    if (category == 'T') {
        printf("Temperature Converter: \n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("Please enter your choice: ");
        scanf("%d", &tempChoice);

        if (tempChoice == 1) {
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &tempFahrenheit);
            fahrenheitToCelsius = (tempFahrenheit - 32) * (5.0 / 9.0);
            printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius);
        } else if (tempChoice == 2) {
            printf("Enter temperature in Celsius: ");
            scanf("%f", &tempCelsius);
            celsiusToFahrenheit = (tempCelsius * 9.0 / 5.0) + 32;
            printf("Temperature in Fahrenheit: %.2f\n", celsiusToFahrenheit);
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } else if (category == 'C') {
        printf("Currency Converter: \n");
        printf("1. USD to Euro\n");
        printf("2. USD to JPY\n");
        printf("3. USD to RMB\n");
        printf("Please enter your choice: ");
        scanf("%d", &currencyChoice);

        if (currencyChoice == 1) {
            printf("Enter amount in USD: ");
            scanf("%f", &amountUSD);
            usdToEuro = amountUSD * 0.87;
            printf("Amount in Euro: %.2f\n", usdToEuro);
        } else if (currencyChoice == 2) {
            printf("Enter amount in USD: ");
            scanf("%f", &amountUSD);
            usdToJPY = amountUSD * 111.09;
            printf("Amount in JPY: %.2f\n", usdToJPY);
        } else if (currencyChoice == 3) {
            printf("Enter amount in USD: ");
            scanf("%f", &amountUSD);
            usdToRMB = amountUSD * 6.82;
            printf("Amount in RMB: %.2f\n", usdToRMB);
        } else {
            printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    } else if (category == 'M') {
        printf("Mass Converter: \n");
        printf("1. Ounces to Pounds\n");
        printf("2. Grams to Pounds\n");
        printf("Please enter your choice: ");
        scanf("%d", &massChoice);

        if (massChoice == 1) {
            printf("Enter amount in ounces: ");
            scanf("%f", &amountOunce);
            ounceToPounds = amountOunce * 0.0625;
            printf("Amount in pounds: %.2f\n", ounceToPounds);
        } else if (massChoice == 2) {
            printf("Enter amount in grams: ");
            scanf("%f", &amountGram);
            gramToPounds = amountGram * 0.00220462;
            printf("Amount in pounds: %.2f\n", gramToPounds);
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } else {
        printf("Invalid category. Please enter 'T', 'C', or 'M'.\n");
    }

    return 0;
}
