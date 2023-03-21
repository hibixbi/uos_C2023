#include <stdio.h>
// 2017440106 이윤행 C프로그래밍 과제1

int main(void) {
	
	char name[15], hakgha[25]; //이름과 학과 저장할 변수
	int birth, hakbun; //생년월일과 학번 저장할 변수

	printf("이름:");
	scanf_s("%s", name, sizeof(name)); //이름 입력

	printf("생년월일:");
	scanf_s("%d", &birth); //생년월일 입력

	printf("학번:");
	scanf_s("%d", &hakbun); //학번 입력

	printf("학과명:");
	scanf_s("%s", hakgha, sizeof(hakgha)); //학과 입력

	printf("\n이름:%s\n생년월일:%d\n학번:%d\n학과명:%s\n",  name, birth, hakbun, hakgha); //이름,생일,학번,학과명 출력

}