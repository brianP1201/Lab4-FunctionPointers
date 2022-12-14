#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int end (int a, int b);

typedef int (*OP) (int a, int b);


int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 24;
	int b = 13;
	OP operators[5] = {&add, &subtract, &multiply, &divide, &end};
	char index[3];
	while (1)
	{
		printf("First Operand 'a': %d | Second Operand 'b': %d\n Specify the operation to perform (0: add | 1: subtract | 2: multiply | 3: divide | 4: exit): ", a, b);
		fgets(index,3,stdin);
		printf("X = %d\n", operators[(int)index[0]-'0'](a,b));
	}
	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'a' and 'b'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a / b; }
int end (int a, int b) { exit(0);}

