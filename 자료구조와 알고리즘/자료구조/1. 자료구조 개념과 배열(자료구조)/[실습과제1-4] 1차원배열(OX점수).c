#include <stdio.h>

int main(){
	int n,tot=0,sum=0;
	
	scanf("%d", &n);
	
	for(int k=0; k<n; k++){
		char str[80]={0,};
		scanf("%s", str);
		
		for(int i=0; str[i]!='\0'; i++){
			if(str[i]=='O'){
				sum++;
			}
			else if(str[i]=='X'){
				sum=0;
			}
			tot = tot+sum;
		}
		printf("%d\n", tot);
		tot = sum = 0;
	}
	return 0;
}