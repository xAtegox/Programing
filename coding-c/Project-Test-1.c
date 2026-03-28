#include <stdio.h>

// Run code with f5

int main(){

    // Print Message
    printf("this is an tutorial for output!\n");

    // Variables

    // Int is whole number only
    int age = 25;
    int year = 2026;
    int quantity =2;

    printf("You are %d Years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    // Float is decimal numbers
    float gpa = 2.5;
    float price =19.99;

    printf("your gpa is %f\n", gpa);
    printf("The price is $%.2f\n", price);
    // %.2f means 2 decimals .3 would mean 3....

    // Double can store more decimals (bout5 16 digits)
    double pi = 3.14159265358979;
    printf("The value of pi is %.15lf\n", pi);

    // char, character
    char grade = 'A';
    char symbol = '$';

    printf("Your grade is %c\n", grade);
    printf("Your Symbol is %c\n", symbol);




    return 0;
}
