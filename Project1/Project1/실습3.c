#include <stdio.h>

int main(void) {
	
	int num1, num2;
	int n1, n2;
	printf("����1�Է�:");
	scanf_s("%d", &num1);
	printf("����2�Է�:");
	scanf_s("%d", &num2);
	printf("%d-%d=%d", num1, num2, num1 - num2);

	
	printf("\n����1�Է�:");
	scanf_s("%d", &n1);
	printf("����2�Է�:");
	scanf_s("%d", &n2);
	printf("��:%d,������:%d",n1/n2,n1%n2);

	

}