#include "main.hpp"

int main()
{
	char people[M][N][L];
	int length;

	length = makeDB(people);
	cout << "The number of people is " << length << endl;
	printRecord(people, length);
}
