/*
  [이중 반복문 관련 문제 - '피라미드를 쌓아라' 연습문제(거꾸로 별 쌓기)]
  이중 반복문을 이용해서 다음을 출력해보시오.

      *
     **
    ***
   ****
  *****
*/

// for문
#include <stdio.h>

int main_5(void)
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

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
        while (j <= 5 - i)
        {
            printf(" ");
            j++;
        }

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
  // do while문은 출력이 이렇게 되는데 이유는 추후에 알아내도록 하겠다..

    *
   **
  ***
 ****
 *****

*/