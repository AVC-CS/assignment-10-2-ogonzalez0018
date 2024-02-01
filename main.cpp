#include "main.hpp"

int main()
{
	char people[M][N][L];
	int length;
	int num;

	length = makeDB(people);
	cout << "The number of record is " << length << endl;
	printRecord(people, length);
	printEmail(people, length);
	num = getNumMale(people, length);
	cout << "The number of Male Employee: " << num << endl;
}
