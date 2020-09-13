#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("두 개의 정수를 입력하시오. : ");
	scanf_s("%d %d", &a, &b);

	c = sum(a, b);

	printf("두 정수의 합은 %d입니다.\n", c);

	return 0;

}