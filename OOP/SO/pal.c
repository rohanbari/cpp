#include <stdio.h>

float occurence(char array[], char searched);
int main()
{
	/*char new[] = "NITTE"; */ char new[100];
	char *point = &new[0];
	char query;
	printf("String:\t");
	scanf("%s", &point); //THIS CAUSES ERROR BUG HERE!!!.ALONG WITH "char new[100]" IN THE LINE ABOVE.
	fflush(stdin);
	/*printf("Search:\t");*/ scanf("%c", query);
	printf("Search:\t");
	scanf("%c", &query);
	printf("String =\"%s\"\nQuery =\"%c\" ", point, query);

	//printf("%c",*(point+1));
	for (int i = 0; *(point + i) != '\0'; i++)
	{
		if (*(point + i) == query)
		{
			static char *add;
			add = &new[i];
			printf("Position:%d\nAddress:%p \n", i + 1, add);
		}
	}
	printf("Occurance in String = %f %%\n", occurence(new, query));
	return 0;
}
float occurence(char array[], char searched)
{
	float appearance = 0, occurance = 0;
	int i = 0;
	for (i = 0; array[i] != '\0'; i++)
	{
		if (array[i] == searched)
		{
			appearance++;
		}
	}
	float length = i;
	appearance = appearance + 0.0;
	length = length + 0.0; //THIS IS THE ONLY WAY I COULD THINK OF CONVERTING INT TO FLOAT SINCE
	//                                          APPEARENCE WOULD RETURN 2 AND 2.O AND SAME GOES FOR THE LENGTH.
	occurance = (appearance / length) * 100;
	return occurance;
}