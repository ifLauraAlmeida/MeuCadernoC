#include <stdio.h>
#include <stdbool.h>

int main() {

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.
/*
    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("THe year is %d\n", year);
    printf("You have ordered %d x pizza\n", quantity);
*/
/*
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your GPA is %.2f\n", gpa);
// %.2f limits the float to 2 decimal places
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1f C\n", temperature);
*/
/*
    double pi = 3.141592653589793;
    double e = 2.718281828459045;

    printf("The value of pi is %lf\n", pi);
    printf("The value of pi is %.15lf\n", pi);

    printf("The value of e is %.15lf\n", e);
*/
/*
    char grade = 'A';
    char symbol = '!';

    printf("Your grade is %c\n", grade);
    printf("Symbol: %c\n", symbol);
*/
//| Placeholder | Tipo esperado     | Tamanho típico |
//| ----------- | ----------------- | -------------- |
//| `%c`        | char              | 1 byte         |
//| `%d`        | int               | 4 bytes        |
//| `%f`        | float (em printf) | 4 bytes        |
//| `%lf`       | double            | 8 bytes        |
/*
    char name[] = "John Doe";

    printf("Hello, %s\n", name);

| Código       | Significa     | Tipo            | Formato correto |
| ------------ | ------------- | --------------- | --------------- |
| `"John Doe"` | texto inteiro | string (char[]) | `%s`            |
| `'J'`        | um caractere  | char            | `%c`            |
*/
// For boolean values in C, we need add the stdbool.h library
    //bool isOnline = true;

   // printf("%d", isOnline); 
   
   // true = 1 | false = 0

   bool isOnline = true;

   if(isOnline){
         printf("The user is online\n");
    } else {
         printf("The user is offline\n");   
   }

    return 0;

}