#include <stdio.h>

int main(){
	int list[]={5,3,8,1,2,7};
	int key, i, j, size, temp;
	
	size = sizeof(list)/sizeof(int);
	
	for(i=1; i<size; i++){
		key=list[i];
		for(j=i-1; j>=0 && list[j]>key; j--)
			list[j+1]=list[j];
		list[j+1]=key;
	}
	
	for(i=0; i<size; i++)
		printf("%d ", list[i]);
	return 0;
}