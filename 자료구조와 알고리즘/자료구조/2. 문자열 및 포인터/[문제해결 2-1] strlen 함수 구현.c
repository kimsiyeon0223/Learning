#include <stdio.h>
int myStrlen( char str[] );
int myStrlen2( char str[] );
int myStrlen3( char str[] );  
int myStrlen4( char str[], char c );  
int main() {
	char s[100];
	gets(s, 100);

	printf("%d\n", myStrlen(s) ); // 문자 전체의 길이
	printf("%d\n", myStrlen2(s)); //숫자의 길이
  printf("%d\n", myStrlen3(s));// 공백제외 문자길이
  printf("%d\n", myStrlen4(s, 'H'));  // 특정문자의 길이

	return 0;
}
int myStrlen( char str[] ){	//  문자 길이 구하는 코드
	int count = 0;
	for(int i=0; str[i]!='\0'; i++) count++;
	return count;
}
int myStrlen2( char str[] ){//숫자길이 구하는 코드
	int count = 0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i] >= '0' && str[i]<='9') count++;
	}
	return count;
}
int myStrlen3( char str[] ){//  공백제외 문자길이 구하는 코드
	int count = 0;
	for(int i=0; str[i]!='\0'; i++){
		if(str[i]==' ') count++;
		return count;
	}
}
int myStrlen4( char str[],char c ){// 특정문자의 길이를 반환 코드
	int count = 0;
	for(int i=0; str[i]!='H'; i++) count++;
	return count;
}