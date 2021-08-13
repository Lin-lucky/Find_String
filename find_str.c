#include <stdio.h>

int find_str(char *str_f, char *str_c);

int main(int argc, char **argv)
{
	char str_f[20] = "abcdcdcddcd";
	char str_c[5] = "cd";
	
	printf("count = %d\n", find_str(str_f, str_c));
	
	return 0;
}

int find_str(char *str_f, char *str_c)
{
	char *pf = str_f, *pc = str_c;
	int count = 0;

	while(*pf++) {
		if (*pf == *pc)
			if (!(*++pc)) {
				++count;
				pc = str_c;
			}
}

return count;
}