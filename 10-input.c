// scanf (take input from the user and assign it to a variable)
// & (address of)

#include <stdio.h>

int main()
{
 int a, b;
 printf("Enter the value of a \n");
 scanf("%d", &a); // &a (address of a)
 printf("The Value of a is %d \n", a);

 printf("Enter the Value of b \n");
 scanf("%d", &b); // &b (address of b)
 printf("The Value of b is %d \n", b);

 printf("The Sum of a & b is %d \n", a + b);
 return 0;
}