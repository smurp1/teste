#include <iostream>;
#include "calculadora.h";

using namespace std;

int main()
{
	calculadora* calc = new calculadora;
	cout << "a soma dos valores e"<<calc->soma( 3.0,5.0 )<<endl;
	cout << "a divisao dos valores e"<<calc->soma( 3.0,5.0 )<<endl;

	return 0;
}

