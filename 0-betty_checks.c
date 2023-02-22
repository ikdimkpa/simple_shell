#include <stdio.h>

/**
 * main - checks for days in the week.
 * Return: 0 on success.
 */
int main(void)
{
	unsigned int num;

	do {
		printf("Enter a number: ");
		scanf("%d", &num);

		switch (num)
		{
			case 1:
				printf("Monday\n");
				break;
			case 2:
				printf("Tuesday\n");
				break;
			case 3:
				printf("Wednesday\n");
				break;
			case 4:
				printf("Thursday\n");
				break;
			case 5:
				printf("Friday\n");
				break;
			case 6:
				printf("Saturday\n");
				break;
			case 7:
				printf("Sunday\n");
				break;
		default:
			printf("Invalid Command\n");
		}
	} while (num <= 7);

	return (0);
}
