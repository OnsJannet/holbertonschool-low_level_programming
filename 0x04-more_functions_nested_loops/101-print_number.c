#include "holberton.h"
/**
*print_number- it print numbers
*@n: int
*/
void print_number(int n);
{ 
if (n < 0) { 
putchar('-'); 
n = -n; 
}
if (n/10) 
print(n/10);  
putchar(n%10 + '0'); 
} 
