#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int i, ans=0;
	printf("��� ������ �ڵ����� �����մϴ�\n");

	while (1) {
		int x = rand() % 100;
		int y = rand() % 100;
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (x + y == ans) {
			printf("�¾ҽ��ϴ�\n");
			break;
		}
		else {
			printf("Ʋ�Ƚ��ϴ�\n");
		}
	}
	return 0;
}




