
#include <stdio.h>
#include <math.h>
#define N 5

typedef struct point{
   int x, y;
}POINT;

void inputPoint(POINT *p);
void outputPoint(POINT *p);
double distance(POINT *p, POINT *q);

int main() {
   
   POINT p[5];
   POINT origin = {0, 0};
   double min = 2425235;
   int i, idx;
   
   for(i = 0; i < 5; i++)
      inputPoint(&p[i]);
      
   for(i = 0; i < 5; i++) {
      if(distance(&p[i], &origin) < min || distance(&p[i], &origin) == min && p[i].x + p[i].y < p[idx].x + p[idx].y) {
         min = distance(&p[i], &origin);
         idx = i;
      }
   }
   
   
   printf("원점에서 가장 가까운 좌표 : ");
   outputPoint(&p[idx]);
   return 0;
}
void inputPoint(POINT *p){
   scanf("%d %d", &p->x, &p->y);
}
   
void outputPoint( POINT *p ){
   printf("(%4d, %4d)\n", p->x, p->y);
}
double distance(POINT *p, POINT *q){
   return sqrt((q->x - p->x)*(q->x - p->x) + (q->y - p->y)*(q->y - p->y));
}