#include <stdio.h>

int main(void)
{
	int a, b, c;

	printf("�� ���� ������ �Է��Ͻÿ�. : ");
	scanf_s("%d %d", &a, &b);

	c = sum(a, b);

	printf("�� ������ ���� %d�Դϴ�.\n", c);

	return 0;

}