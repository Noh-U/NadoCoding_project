/*
  [이중 반복문 관련 문제 - 구구단 전체 출력]
  2중 반복문을 활용해서 구구단 전체 출력 프로그램을 만드시오.
  ex)
  2 × 1 = 2
  2 × 2 = 4
  2 × 3 = 6
  2 × 4 = 8
  ...
  9 × 9 = 81
*/

// for문
#include <stdio.h>

int main_2(void)
{
	int i = 2, j = 1;

	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d × %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}

/*
// while문
#include <stdio.h>
int main(void)
{
	int i = 2, j;

	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			printf("%d × %d = %d\n", i, j, i * j);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
*/

/*
//do while문
#include <stdio.h>

int main(void)
{
	int i = 2, j;

	do
	{
		j = 1;
		do
		{
			printf("%d × %d = %d\n", i, j, i * j);
			j++;
		} while (j <= 9);
		printf("\n");
		i++;
	} while (i <= 9);
	return 0;
}
*/