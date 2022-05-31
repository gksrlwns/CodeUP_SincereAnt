#include <stdio.h>
int size[100][100];

int main()
{
	
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			scanf("%d", &size[j][i]);

	}
	if (size[1][1] == 0)
	{
		size[1][1] = 9;
		for (int j = 1; j < 10; j++)
		{
			for (int i = 1; i < 10; i++)
			{

				if (size[i][j] == 9 && size[i + 1][j] == 0)
				{
					if (size[i + 1][j] == 2)
					{
						size[i + 1][j] = 9;
						goto point;
					}
					else
						size[i + 1][j] = 9;
				}
				else if (size[i][j] == 9 && size[i + 1][j] == 1)
				{
					if (size[i][j + 1] == 2)
					{
						size[i][j + 1] = 9;
						goto point;
					}
					else if(size[i][j + 1] == 0)
					{
						size[i][j + 1] = 9;
					}
				}
				else if (size[i][j] == 9 && size[i + 1][j] == 2)
				{
					size[i + 1][j] = 9;
					goto point;
				}
			}


		}

	}
	else if (size[1][1] == 2)
		size[1][1] = 9;
point:
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
			printf("%d ", size[j][i]);

		printf("\n");

	}
}