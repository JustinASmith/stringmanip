#include "stringmanip.h"

const char** cs_split(const char* input, char key, int *out_s)
{
	const int size = strlen(input);
	// allocate char array of size + 1 on heap;
	char *input_copy = new char[size + 1];
	strcpy(input_copy, input); // Copy input into s array
	int numKeys = 0; // Number of keys found
	for (int i = 0; i < size; i++)
	{
		// search string for matches of key
		if (input_copy[i] == key)
		{
			// Increment and set that spot to null character
			numKeys++;
			input_copy[i] = 0;
			// Each spot that the key is found in input_copy
			// is set to '\0'
		}
	}
	// allocated a pointer array that points to type char
	// to store the separated strings
	const char **pSplitArray = new const char*[numKeys + 1];
	int splitIndex = 0;
	bool valid = true;
	for (int i = 0; i < size; i++)
	{
		if (valid)
		{
			pSplitArray[splitIndex] = &input_copy[i];
			splitIndex++;
			valid = false;
		}
		else if (input_copy[i] == 0)
			valid = true;
	}
	*out_s = numKeys + 1;
	return pSplitArray;
}