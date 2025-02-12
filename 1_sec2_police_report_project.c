/*
  [변수, 상수, 입출력 관련 프로젝트 - 경찰서 조서 쓰기]
  변수, 상수, 입출력을 이용해서 경찰서 조서 쓰기 프로그램을 작성해보자.
  당신이 어떤 범죄를 저질렀다고 가정하자.
  경찰서에 갔더니 경찰이 몇 가지 질문을 하는데, 조사자는 이에 대한 답변을 한다.
  질문에 대한 답변을 모두 마치면 작성한 조서 내용이 한 번에 출력된다.

  ex)
  <조사서 질문과 답변>
  이름이 뭐예요? 노유
  몇 살이예요? 13
  몸무게가 몇kg이예요? 100.5kg
  키가 몇cm예요? 208.2cm
  무슨 잘못을 했어요? 과자를하루에두봉지나먹었어요..

  <조사서 내용 출력>
  이름?
  노유
  나이?
  13
  몸무게?
  100.5kg
  키?
  208.2cm
  범죄?
  과자를하루에두봉지나먹었어요..
*/

#include <stdio.h>

int main_1(void)
{
	char name[50];
	int age;
	double weight;
	double height;
	char fault[50];

	printf("-----------조사서 질문과 답변-----------\n\n");
	printf("이름이 뭐예요? ");
	scanf("%s", name, sizeof(name));

	printf("몇 살이예요? ");
	scanf("%d", &age);

	printf("몸무게는 몇kg이예요? ");
	scanf("%lf", &weight);

	printf("키가 몇cm예요? ");
	scanf("%lf", &height);

	printf("무슨 잘못을 했어요? ");
	scanf("%s", fault, sizeof(fault));
	printf("\n----------------------------------------\n\n");

	printf("\n-----------조사서 내용 출력-----------\n\n");
	printf("이름?\n");
	printf("%s\n\n", name);

	printf("몇 살?\n");
	printf("%d\n\n", age);

	printf("몸무게?\n");
	printf("%.1f\n\n", weight);

	printf("키?\n");
	printf("%.1f\n\n", height);

	printf("범죄?\n");
	printf("%s\n\n", fault);
	printf("----------------------------------------\n\n");

	return 0;
}