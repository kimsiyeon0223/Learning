// n명의 나이가 입력됩니다. 이 n명의 사람 중 가장 나이차이가 많이 나는 경우는 몇 살일까요?
// 최대 나이 차를 출력하는 프로그램을 작성하세요.
#include <stdio.h>

int main() {
	int max=-1, min=101, n, age, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &age);
		if(age>max) max=age;
		if(age<min) min=age;
	}
	printf("%d", max-min);
	return 0;
} 

