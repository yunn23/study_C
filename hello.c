#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, is_prime;
	printf("������ Ž���Ͻðڽ��ϱ�? : ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		is_prime = 1;	// �ϴ� �Ҽ���� �����Ѵ�.
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				is_prime = 0;	// k�� ������ �������� �Ҽ��� �ƴϴ�.
				break;
			}
		}
		if (is_prime == 1) {
			printf("%d ", i);	// �Ҽ��̸� ���

		}
	}
	return 0;
}