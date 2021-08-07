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
		if (n1<1 || n2<1)
		printf("\nVoce nao pode dividir por 0.");
		return(0);
}
		else {
		result = (n1/n2);
		printf("\n O resultado e: %8.1f",result);
	}
	
}
