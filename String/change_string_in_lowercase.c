//program to change the string in lower case

#include<stdio.h>

int main()
{
	char a[50], i;

	printf("Enter the string:\n");
	scanf("%s", a);

	for(i = 0 ; a[i] ; i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}

	}
	printf("String in lower case is: %s\n", a);
}
