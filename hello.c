#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, is_prime;
	printf("어디까지 탐색하시겠습니까? : ");
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		is_prime = 1;	// 일단 소수라고 가정한다.
		for (int k = 2; k < i; k++) {
			if (i % k == 0) {
				is_prime = 0;	// k로 나누어 떨어지면 소수가 아니다.
				break;
			}
		}
		if (is_prime == 1) {
			printf("%d ", i);	// 소수이면 출력

		}
	}
	return 0;
}