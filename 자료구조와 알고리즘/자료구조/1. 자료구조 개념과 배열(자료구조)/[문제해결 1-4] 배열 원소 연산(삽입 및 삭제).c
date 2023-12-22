#include <stdio.h>
//void inputArray( int a[], int size); //사용 x
void outputArray( int a[], int size);
int insertArray( int a[], int num, int index, int size);
int deleteArray( int a[], int index, int size);

int main(){
  int a[10], size=0 ;
  size = insertArray( a, 10, 0, size);
  size = insertArray( a, 20, 1, size);
  size = insertArray( a, 30, 2, size);
  size = insertArray( a, 50, 2, size);
	outputArray(a,size);
	size = deleteArray(a, 1, size);
  outputArray(a, size);
  return 0;
}
/*void inputArray( int a[], int size){
    int i;
    //배열에 크기 만큼 데이터 입력
    //사용 x
}*/
void outputArray( int a[], int size){
    int i;
     //배열 크기 만큼 데이터 출력
	for(i=0; i<size; i++){
		printf("%d ", a[i]);
	}
    printf("\n");
}
int insertArray( int a[], int num, int index, int size){
    if(index==size){
			a[index]=num;//여기에 배열 끝부분에 원소 삽입코드 작성 
		 } 
	  else{    // 여기에 배열 중간에 원소 삽입 코드
			for(int i=size-1; i>=index; i--){
				a[i+1]=a[i];
			}
			a[index]=num;
		}
  return size+1;
}
int deleteArray( int a[], int index, int size){
  if(index==size){
		//여기에 배열 끝부분 원소 삭제 코드
		a[index]=0;
  }
	else{ //여기에 배열 중간의 원소 삭제 코드
		a[index]=0;
		for(int i=index; i<=size; i++){
			a[i]=a[i+1];
		}
	}
  return size-1;
}
