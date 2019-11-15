#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
    int data, i;
	printf("Please Enter:");
	scanf("%d", &data);
	for (i = 2; i < data; i++)
		if (data%i == 0) 
			break;
			if (i == data)
				printf("This is a prime.");
			else
				printf("This is not a prime.");
	system("pause");
}