#include<stdio.h>

int num_1(int x,int y)
{
	if (x > y || x == y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

void result(int c,int num[20]) 
{
	for (int i = 0; i <= c; i++)
	{
		if (i >= 1 )
		{
			num_1(num[i], num[i - 1]);
			num[i] = num_1(num[i], num[i - 1]);

			if (i == c)
			{
				printf("%d", num_1(num[i], num[i - 1]));
			}
		}
	}
}


int main()
{

	int num[20];
	int i = 0;
	int c = 0;
	int num2;

	do {
			printf("Input number or quit select 0 : ");
			scanf_s("%d", &num[i]);

			num2 = num[i];

				if (num[i] >= 0 && num[i] <= 1000000)
				{
					i++;
					c++;

				}

				else
				{
					break;
				}
			

		} while (num2 != 0);



		result(c, num);	
}