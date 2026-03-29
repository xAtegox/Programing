#include <stdio.h>

int main() {
    // Format specifier = Special token that begins with %,
    // followed by a character that specifies data type
    // and optional modifiers.
    // They control how data is displayed

    int age = 25;
    float price = 19.99;
    double pi = 3.1415926535;
    char currency = '$';
    char name[] = "Atego";

    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pi);
    printf("%c\n", currency);
    printf("%s\n", name);

    // Special Modifiers Ahead
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%3d\n", num1);
    printf("%3d\n", num2);
    printf("%3d\n", num3);
    /*
     between % and d in printf:
     3  how manny numbers to show before
     0  shows 0 where would be blank space
     + shows if number is positive or negative
     .2 shows 2 decimals, if there is more digits than decimals it rounds it
     */

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%+7.2f\n", price1);
    printf("%+7.2f\n", price2);
    printf("%+7.2f\n", price3);


    return 0;
}
