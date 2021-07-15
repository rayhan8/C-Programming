// Write a c program to calculate the area of a rectangle
// using inputs supplied by the user

// area = width * height

#include <stdio.h>

int main()
{
 int length, width;

 printf("What is the length of the rectangle:\n");
 scanf("%d", &length);

 printf("What is the width of the rectangle:\n");
 scanf("%d", &width);

 int area = length * width;
 printf("The area of the rectangle is %d", area);

 return 0;
}