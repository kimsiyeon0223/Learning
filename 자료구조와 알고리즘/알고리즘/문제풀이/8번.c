// Anagram이란 두 문자열이 알파벡의 나열 순서를 다르지만 그 구성이
// 일치하면 두 단어는 아나그램이라고 합니다.
// 예를 들면 AbaAeCe와 baeeACA는 알파벳 나열 순서는 다르지만
// 구성은 일치합니다.
// 즉, 어느 한 단어를 재배열하면 상대편 단어가 될 수 있는 것을
// 아나그램이라고 합니다.
#include <stdio.h>
int main(){
   int A[151]={0},B[151]={0};
   char a[150],b[150];
   gets(a);
   for (int i=0;a[i]!='\0';i++){
      A[a[i]]++;
   }
   gets(b);
   for (int i=0;b[i]!='\0';i++){
      B[b[i]]++;
   }
   for (int i=1;i<=150;i++){
      if (A[i]!=B[i]){
         printf("NO");
         return 0;
      }
   }
   printf("YES");
   return 0;
}