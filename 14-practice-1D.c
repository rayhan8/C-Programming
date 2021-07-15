// Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit)

#include <stdio.h>

int main()
{
 float celsius = 37, far;

 far = (celsius * 9 / 5) + 32; // formula

 printf("The value of %f celsius temperature in fahrenheit is %f", celsius, far);
 return 0;
}