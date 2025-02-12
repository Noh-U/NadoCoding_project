/*
  [반복문 관련 프로젝트 - 피라미드를 쌓아라]
  반복문을 이용해서 피라미드를 쌓는 프로그램을 작성해보자.
  파라오가 '몇 층으로 쌓겠느냐?'라는 질문을 하는데, 조건은 5층~100층 사이의 값을 입력하는 것이다.
  층을 입력하면, 이에 해당하는 층수의 피라미드를 쌓는다.

  ex)
            ㅁ
          ㅁㅁㅁ
        ㅁㅁㅁㅁㅁ
      ㅁㅁㅁㅁㅁㅁㅁ
    ㅁㅁㅁㅁㅁㅁㅁㅁㅁ
           ....
*/

//for문
#include <stdio.h>

int main_3(void)
{
    int i, j, floor = 0;

    printf("몇 층으로 쌓겠느냐?(5~100): ");
    scanf("%d", &floor);

    for (i = 1; i <= floor; i++)
    {
        for (j = 1; j <= floor - i; j++)
        {
            printf("  "); // ㅁ는 *보다 크기가 크니까 2칸 띄우면 됨
        }

        for (j = 1; j <= i * 1 + (i - 1); j++) // 규칙 찾는 연습필수!
        {
            printf("ㅁ");
        }
        printf("\n");
    }
    return 0;
}

/*
//while문
#include <stdio.h>

int main(void)
{
    int i = 1, j, floor = 0;

    printf("몇 층으로 쌓겠느냐?(5~10): ");
    scanf("%d", &floor);

    while (i <= floor)
    {
        j = 1;
        while (j <= floor - i)
        {
            printf("  ");
            j++;
        }

        j = 1;
        while (j <= i * 1 + (i - 1))
        {
            printf("ㅁ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/

/*

 // do while문은 아래처럼 출력이 되는데 이유를 모르겠어서 추후에 연구해보겠다..

  몇 층으로 쌓겠느냐?(5~100): 5
        ㅁ
      ㅁㅁㅁ
    ㅁㅁㅁㅁㅁ
  ㅁㅁㅁㅁㅁㅁㅁ
  ㅁㅁㅁㅁㅁㅁㅁㅁㅁ

*/