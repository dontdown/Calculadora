#include <math.h>
#include <stdio.h>

int main ()
{
	float n1, n2, result;
	char op;
	
	printf("\n Digite o primeiro numero: ");
	scanf ("%f",&n1);
	printf("\n Digite o segundo numero: ");
	scanf ("%f",&n2);
	printf("\n Digite o operador [+, -, *, /]: ");
	scanf ("%s",&op);
	
	if(op == '+') {
		result = (n1+n2);
		printf("\n O resultado e: %8.1f",result);
	}

	else
	if (op == '-') {
		result = (n1-n2);
		printf("\n O resultado e: %8.1f",result);
	}
	
	else
	if (op == '*') {
		result = (n1*n2);
		printf("\n O resultado e: %8.1f",result);
	}
	
	else
	if (op == '/') {
		if (n1==0 && n2==0)
		printf("\nVocê não pode dividir por 0.");
		else
		result = (n1/n2);
		printf("\n O resultado e: %8.1f",result);
	}
	
}
