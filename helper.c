#include <stdio.h>
#include <string.h>

int get_length(char str[])
{
	char *p = str;
	int count = 0;
	while (*p++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char str[] = "abcd\0ef";
	int count1 = sizeof(str);
	int count2 = strlen(str);
	int count3 = get_length(str);
	printf("use sizeof the length is %d\n", count1);
	printf("use strlen the length is %d\n", count2);
	printf("use get_length the length is %d\n", count3);
	return 0;
}
