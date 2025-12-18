
// Programmer: Madi Tattybay
// No, I did not use ChatGPT at all.
// This program converts temperatures between Celsius and Fahrenheit.
// It uses two functions:
//   1) One function converts Celsius to Fahrenheit.
//   2) Another function converts Fahrenheit to Celsius.
// The program prints two tables:
//   - Celsius values from 0 to 100 with their Fahrenheit equivalents.
//   - Fahrenheit values from 32 to 212 with their Celsius equivalents.
// Each table is printed using a loop that calls the conversion functions
// repeatedly for every value in the range.

#include <stdio.h>

double  celcius(double i );
double fahrenhiet(double i );

int main(void){
    printf("Celcius    ");
    printf("Fahrenhiet\n");
    for(int i = 0; i < 101; i++){
        printf("%d          ", i);
        celcius(i);
    }
    printf("Fahrenhiet    ");
    printf("Celcius\n");
    for(int i = 32; i < 213; i++){
        printf("%d          ", i);
        fahrenhiet(i);
    }
        return 0;
        
    }

    
    double celcius(double i ){
        double result = (i * 9/5) + 32;
        printf("%.1lf\n",result);
        return i;
    }
    
    double fahrenhiet(double i ){
        double result = (i - 32) * 5/9;
        printf("%.1lf\n", result);
        return i;
    }

