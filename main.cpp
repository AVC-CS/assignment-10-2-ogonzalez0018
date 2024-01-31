#include "main.hpp"

int main()
{

	string txt1("ABCDEF,GHI,JKLMN,OP");
	char target[MAXNUM][MAXLEN];
	int result;
	char delimiter = ',';

	result = splitline(txt1, delimiter, target);
	cout << "The Split Results " << endl;
	for (int i = 0; i < result; i++)
		cout << target[i] << endl;

	string txt2("Python/Programming/C++/C/Java");
	delimiter = '/';

	result = splitline(txt2, delimiter, target);
	cout << "=== The Split Results " << endl;
	for (int i = 0; i < result; i++)
		cout << target[i] << endl;
}
