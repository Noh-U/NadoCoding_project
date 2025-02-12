/*
  [이중 반복문 관련 문제 - '피라미드를 쌓아라' 연습문제(별 쌓기)]
  이중 반복문을 이용해서 다음을 출력해보시오.

  *
  **
  ***
  ****
  *****
*/

// for문
#include <stdio.h>

int main_4(void)
{
	int i, j; // 행, *

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
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
	int i = 1, j;

	while (i <= 5)
	{
		j = 1;
		while (j <= i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
*/

/*
// do while문
#include <stdio.h>

int main(void)
{
	int i = 1, j;

	do
	{
		j = 1;
		do
		{
			printf("*");
			j++;
		} while (j <= i);
		printf("\n");
		i++;
	} while (i <= 5);
	return 0;
}
*/