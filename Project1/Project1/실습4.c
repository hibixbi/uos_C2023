#include <stdio.h>

int main(void) {
	
	char name[15], a[25];
	int b;

	printf("�̸� �Է�:");
	scanf_s("%s", name, sizeof(name));

	printf("�а��� �Է�:");
	scanf_s("%s", a, sizeof(a));

	printf("���� �Է�:");
	scanf_s("%d", &b);

	printf("�̸�:%s, �а���:%s, ����:%d", name, a, b);

	

}