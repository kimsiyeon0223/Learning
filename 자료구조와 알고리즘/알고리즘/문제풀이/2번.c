// 자연수 a,b가 주어지면 a부터 b까지의 합을 수식과 함께 출력하세요.
#include <stdio.h>
int main() {
	int a, b, result=0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<b; i++){
		printf("%d + ", i);
		result+=i;
	}
	printf("%d = %d",b, result+b);
	return 0;
}
