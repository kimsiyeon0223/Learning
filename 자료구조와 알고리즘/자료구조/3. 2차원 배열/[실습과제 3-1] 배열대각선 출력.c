#include <stdio.h>

int main()
{
   int arr[20][20] = {0,};
   int cnt = 0,value = 1;
   int n,m;
   
   scanf("%d %d",&n,&m);
   
   while(1){
      for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){
            if(i + j == cnt){
               arr[j][i] = value++;
            }
         }
      }
      cnt++;
      if(value - 1 == n * m) break;
   }
   
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
         printf("%2d ",arr[i][j]);
      }
      printf("\n");
   }
   
   return 0;
}