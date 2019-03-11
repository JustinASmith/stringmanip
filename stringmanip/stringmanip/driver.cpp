#include <iostream>
#include "stringmanip.h"

int main()
{
	int size;
	const char * test = "Justin:Allen:Smith";
	const char** output = cs_split(test, ':', &size);

	for (int i = 0; i < size; i++)
		std::cout << output[i] << std::endl;

	system("PAUSE");
	return 0;
}