// Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

// area of circle formula π·r2
// volume of a cylinder formula π·r2·h

#include <stdio.h>

int main()
{
 int radius = 3;
 float pi = 3.1416;
 printf("the area of a circle is %f \n", pi * radius * radius);

 int height = 3;
 printf("the volume of a cylinder is %f", pi * radius * radius * height);
 return 0;
}