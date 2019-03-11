#pragma once

#include <iostream>

const char** cs_split(const char*, const char, int*);

/* Find each position for key
	while (t <= numKeys)
	{
		int pos = 0;
		pos = (int)strstr(input, &key) - (int)input;
		//pos1 = (int)strstr(s + pos + 1, &key) - (int)s;
		for (int i = 0; i <= pos; i++)
		{
			if (i == pos) s[i] = '\0';
			else
				s[i] = input[i];
		}
		//while (i != pos1)
		//{
		//	std::cout << s[i];
		//	++i;
		//}
		s += pos;
		//strncat(&split[t], s, pos1 - pos);
		int k = strlen(&split[t]);
		//split[t][k] = '\0';
		std::cout << split << std::endl;
		//s.erase(0, pos + 1);
		t++;
	}*/
