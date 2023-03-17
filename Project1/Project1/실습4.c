#include <stdio.h>

int main(void) {
	
	char name[15],a[15],b[15];

	printf("이름 입력:");
	scanf_s("%s", name, sizeof(name));

	printf("학과명 입력:");
	scanf_s("%s", a, sizeof(a));

	printf("생일 입력:");
	scanf_s("%s", b, sizeof(b));

	printf("이름:%s, 학과명:%s, 생일:%s", name,a,b);

	

}