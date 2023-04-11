#include <stdio.h>
#include "header.h"   //만든 헤더파일 선언
// 2017440106 이윤행 C프로그래밍 과제2

//과제2-1 N진법 변환기
void change(int num1, int num2) {    //매개변수 num1과 num2를 받는다

	if (num1 == 0) {
		return;       //num1이 0이면 change함수 빠져나간다
	}
	int quotient = num1 / num2; //result1에 몫을 저장한다
	int remain = num1 % num2; //result2에 나머지를 저장한다

	change(quotient, num2);  //재귀함수로 몫과 num2를 매개변수로 받는다

	if (remain >= 10) {       //나머지가 10보다 클 때
		printf("%c", remain - 10 + 'A');  //A에서 나머지-10을 더하여 나머지를 문자로 출력한다
	}
	else { 
		printf("%d", remain);  //나머지가 10보다 작으면 그래도 출력한다
	}
}

int main(void) {

	int a = 0;
	int b = 0;

	printf("변환할 10진수 입력:"); //10진수 입력
	scanf_s("%d", &a);   //a에 10진수 저장
	printf("변환할 진법 입력(2-16):"); //변환할 진법 입력
	scanf_s("%d", &b); //b에 변환할 진법 저장

	change(a, b);

	//과제2-2 헤더파일 이용한 여러 함수 실행

	commondivisor(4, 16);  //최대공약수 함수
	printf("\n");
	commondivisor2();       //매개변수 없는 최대공약수함수
	printf("\n");
    commonmultiple(45, 12);   //최소공배수함수
	printf("\n");
	commonmultiple2();      //매개변수 없는 최소공배수함수
	printf("\n");
	prime(17);           //소수판별 함수
	printf("\n");
	prime2();             //매개변수 없는 소수판별 함수

}