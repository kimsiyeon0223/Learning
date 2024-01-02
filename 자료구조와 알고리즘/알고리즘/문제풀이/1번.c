// 자연수 n이 입력되면 1부터 n까지의 수 중 m의 배수합을 출력하는 프로그램을 작성해주세요
#include <stdio.h>
int main() {
	int N,M,result=0;
	scanf("%d %d", &N, &M);
	for(int i=1; i<=N; i++)
		if(i%M==0) result+=i;
	printf("%d", result);
	return 0;
}
