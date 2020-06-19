#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)



double Addi(double x, double y) {
	double z;
	z = x + y;
	return (z);
}

double Subt(double x, double y) {
	double z;
	z = x - y;
	return (z);
}

double Mult(double x, double y) {
	double z;
	z = x * y;
	return (z);
}

double Divi(double x, double y) {
	double z;
	z = x / y;
	return(z);
}


int main() {

	int Op_num;
	double num1, num2, Addi1, Subt1, Mult1, Divi1;




	printf("Welcome to my super calc MD-300!\n\n");

	printf("What is the first number?\n");
	scanf("%lf", &num1);

	printf("What operation would you like to do?\nOption 1: Addition\nOption 2: Subtraction\nOption 3: Multiplacation\nOption 4: Division\n");
	scanf("%d", &Op_num);
	
	if (Op_num == 1) {
		printf("What is the second number?\n");
		scanf("%lf", &num2);
		Addi1 = Addi(num1, num2);
		printf("The Answer is: %f\n", Addi1);
	}
	else if (Op_num == 2) {
		printf("What is the second number?\n");
		scanf("%lf", &num2);
		Subt1 = Subt(num1, num2);
		printf("The Answer is: %f\n", Subt1);
	}
	else if (Op_num == 3) {
		printf("What is the second number?\n");
		scanf("%lf", &num2);
		Mult1 = Mult(num1, num2);
		printf("The Answer is: %f\n", Mult1);
	}
	else if (Op_num == 4) {
		printf("What is the second number?\n");
		scanf("%lf", &num2);
		Divi1 = Divi(num1, num2);
		printf("The Answer is: %f\n", Divi1);
	}
	else {
		printf("Ivalid Operation!\nPlease enter a number from 1 - 4\n");
	}


	return 0;
}