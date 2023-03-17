#include <stdio.h>

int main(void) {
	
	char name[15], a[25];
	int b;

	printf("이름 입력:");
	scanf_s("%s", name, sizeof(name));

	printf("학과명 입력:");
	scanf_s("%s", a, sizeof(a));

	printf("생일 입력:");
	scanf_s("%d", &b);

	printf("이름:%s, 학과명:%s, 생일:%d", name, a, b);

	

}