#include <stdio.h>

int main(void) {
	
	int num1, num2;
	int n1, n2;
	printf("정수1입력:");
	scanf_s("%d", &num1);
	printf("정수2입력:");
	scanf_s("%d", &num2);
	printf("%d-%d=%d", num1, num2, num1 - num2);

	
	printf("\n정수1입력:");
	scanf_s("%d", &n1);
	printf("정수2입력:");
	scanf_s("%d", &n2);
	printf("몫:%d,나머지:%d",n1/n2,n1%n2);

	

}