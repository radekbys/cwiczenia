# include <stdio.h>

int main(void)
{
	
	int tablica[20];
	
	for (int i = 0; i < 20; i++)
	{
		scanf("%i", &tablica[i]);
	}
	for (int i = 0; i < 20; i++)
	{
		printf("%5i", tablica[i]);
	}
	system("PAUSE");
	return 0;
}