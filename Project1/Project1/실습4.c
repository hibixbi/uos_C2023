#include <stdio.h>

int main(void) {
	
	char name[15],a[15],b[15];

	printf("�̸� �Է�:");
	scanf_s("%s", name, sizeof(name));

	printf("�а��� �Է�:");
	scanf_s("%s", a, sizeof(a));

	printf("���� �Է�:");
	scanf_s("%s", b, sizeof(b));

	printf("�̸�:%s, �а���:%s, ����:%s", name,a,b);

	

}