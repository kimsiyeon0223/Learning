#include <stdio.h>
#include <stdlib.h>
int maxh(int* height, int n) {
	int maxn = 0;
	//for문을 이용하여 최대값 검색 
	for(int k=0; height[k]!='\0'; k++){
		if(*(height+k)>maxn) maxn=height[k];
	}
	return maxn;
}
int main(){
  int n ;
  int* height;
  int i ;
	scanf("%d", &n) ;
	
	 height = (int*) malloc (sizeof(int)*n);
	// n개의 데이터 입력 저장
	for(int i=0; i<n; i++){
		scanf("%d", (height+i));
	}
	
	printf("%d\n", maxh(height, n)) ;
	
	free(height);
  return 0; 
}