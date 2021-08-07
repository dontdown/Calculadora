#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main()
{
    float num1, num2, result;
    char op;
    
    cout << "Insira um valor de x:" << endl;
    cin >> num1;
    
    cout << "Digite um valor de y: " << endl;
	cin >> num2;
    
	cout << "Digite a operacao: [+, -, *, /]" << endl;
	cin >> op;
	
	
switch(op)
	{
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	case '*':
		result = num1 * num2;
		break;		
	}
		
	cout << num1 << op << num2 << " = " << result << endl;
    return 0;
}
