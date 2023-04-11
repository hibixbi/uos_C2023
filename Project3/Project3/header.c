#include <stdio.h>

int commondivisor(int a, int b) {   //최대공약수 구하는 함수(매개변수 받음)

	int result = 0;        //최대공약수 저장할 변수

	if (a >= b) {                    //a가 b보다 클때
		for (int i = 1; i <= b; i++) {         //2부터 b까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                 //result변수에 최대공약수 저장
			}
		}
		printf("%d", result);     //최대공약수 출력
	} 
	else {                          //b가 a보다 클때
		for (int i = 1; i <= a; i++) {         //2부터 a까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                //result변수에 최대공약수 저장
			}
		}
		printf("%d", result);                //최대공약수 출력

	}

}

int commondivisor2(void) {   //최대공약수 구하는 함수(매개변수 없음)

	int a = 0;             //수 저장 변수
	int b = 0;             //수 저장 변수
	int result = 0;        //최대공약수 저장할 변수

	printf("1번째 수 입력 :");     //1번째수 입력
	scanf_s("%d", &a);              //1번째 수 변수 a에 저장
	printf("2번째 수 입력 :" );    //2번째수 입력
	scanf_s("%d", &b);            //2번째 수 변수 a에 저장
	 
	if (a >= b) {                    //a가 b보다 클때
		for (int i = 1; i <= b; i++) {         //2부터 b까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                 //result변수에 최대공약수 저장
			}
		}
		printf("%d", result);     //최대공약수 출력
	}
	else {                          //b가 a보다 클때
		for (int i = 1; i <= a; i++) {         //2부터 a까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                //result변수에 최대공약수 저장
			}
		}
		printf("%d", result);                //최대공약수 출력

	}

}

int commonmultiple(int a, int b) {   //최소공배수 구하는 함수(매개변수 받음)

	int result = 0;        //최대공약수 저장할 변수

	if (a >= b) {                    //a가 b보다 클때
		for (int i = 1; i <= b; i++) {         //2부터 b까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                 //result변수에 최대공약수 저장
			}
		}
		printf("%d", a * b / result);     //최소공배수 출력(최소공배수=두수의곱/최대공약수)
	}
	else {                          //b가 a보다 클때
		for (int i = 1; i <= a; i++) {         //2부터 a까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                //result변수에 최대공약수 저장
			}
		}
		printf("%d", a * b / result);                //최소공배수 출력(최소공배수=두수의곱/최대공약수)

	}

}

int commonmultiple2(void) {   //최소공배수 구하는 함수(매개변수 없음)

	int a = 0;             //수 저장 변수
	int b = 0;             //수 저장 변수
	int result = 0;        //최대공약수 저장할 변수

	printf("1번째 수 입력 :");     //1번째수 입력
	scanf_s("%d", &a);              //1번째 수 변수 a에 저장
	printf("2번째 수 입력 :");    //2번째수 입력
	scanf_s("%d", &b);            //2번째 수 변수 a에 저장

	if (a >= b) {                    //a가 b보다 클때
		for (int i = 1; i <= b; i++) {         //2부터 b까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                 //result변수에 최대공약수 저장
			}
		}
		printf("%d", a * b / result);     //최소공배수 출력(최소공배수=두수의곱/최대공약수)
	}
	else {                          //b가 a보다 클때
		for (int i = 1; i <= a; i++) {         //2부터 a까지 i가 증가할 때
			if (a % i == 0 && b % i == 0) {  //a와 b를 i로 나눈 나머지가 모두 0일 때
				result = i;                //result변수에 최대공약수 저장
			}
		}
		printf("%d", a * b / result);                //최소공배수 출력(최소공배수=두수의곱/최대공약수)

	}

}

int prime(int a) {   //소수인지 판별하는 함수(매개변수 받음)
	
	int i = 0;      //i변수 선언

	for (i = 2; i < a; i++) {  //i가2부터 a-1까지 증가할때
		if (a % i == 0) {      //a를 i로 나눈 나머지가 0이라면
			printf("false");   //소수가 아니므로 false출력
			break;             //for문 빠져나옴
		}
	}
	if(i==a){                  //i가a라면(나머지가 0이되는 i가 없다면)
		printf("true");        //소수이므로 true출력
	}	
}

int prime2(void) {   //소수인지 판별하는 함수(매개변수 없음)

	int i = 0;      //i변수 선언
	int a = 0;      //수 변수

	printf("수 입력 :");     //수 입력
	scanf_s("%d", &a);       // 변수 a에 저장

	for (i = 2; i < a; i++) {  //i가2부터 a-1까지 증가할때
		if (a % i == 0) {      //a를 i로 나눈 나머지가 0이라면
			printf("false");   //소수가 아니므로 false출력
			break;             //for문 빠져나옴
		}
	}
	if (i == a) {                  //i가a라면(나머지가 0이되는 i가 없다면)
		printf("true");        //소수이므로 true출력
	}
}


