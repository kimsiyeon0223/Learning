// 자연수 n이 주어지면 자연수 n의 진약수의 합을 수식과 함께 출력하는 프로그램을 작성하시오
// (진약수란, 약수 중에서 자기 자신을 제외한 숫자를 의미한다.)
#include <stdio.h>
int main() {
	int n, result=0;
	scanf("%d", &n);
	printf("1");
	for(int i=2; i<n; i++){
		if(n%i==0){
			printf(" + %d", i);
			result+=i;
		}
	}
	printf(" = %d", result+1);
	return 0;
}
