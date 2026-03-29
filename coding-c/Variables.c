#include <stdio.h>
#include <stdbool.h>

// Run code with f5

int main(){

    // Print Message
    printf("this is an tutorial for output!\n");

    // Variables

    // Int is whole number only
    int year = 2026;
    int quantity =2;

    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    // Float is decimal numbers
    float gpa = 2.5;
    float price = 19.99;

    printf("your gpa is %f\n", gpa);
    printf("The price is $%.2f\n", price);
    // %.2f means 2 decimals .3 would mean 3....

    // Double can store more decimals (bout5 16 digits)
    double pi = 3.14159265358979;
    printf("The value of pi is %.15lf\n", pi);

    // char, character, only accepts one thing
    char grade = 'A';
    char symbol = '!';

    printf("Your grade is %c\n", grade);
    printf("Your Symbol is %c\n", symbol);

    // string, stores more characters, the [] defines it being able
    // to  store manny characters ie being a string

    char name[] = "Atego";
    char email[] = "Atego@gmail.com";

    printf("Hello, %s\n", name);
    printf("Email: %s\n", email);

    // Boleans, true or false / 1 or 0, binary
    bool isOnline = true;

    printf("Is online? %d\n", isOnline); // Data

    if(isOnline){
        printf("You are ONLINE\n");
    } else {
        printf("You are OFFLINE\n");
    }

    return 0;
}

/*
 Variable is a reusable container for value
 int = Whole numbers (4 bytes)
 float = single precision decimal number (4 Bytes)
 double = double precision decimal number (8 Bytes)
 char = single character (1 Byte)
 char[] = array of characters
 bool = true or false (requires <stdbool.h>, 1 Byte)
 */
