
#include <stdio.h>

typedef struct student {
   int number;
   double height;
   double weight;
}STUDENT;

int main() {
   int n, i;
   scanf("%d", &n);
   STUDENT *s = (STUDENT*)malloc(sizeof(STUDENT)*n);
   double height_tot = 0, weight_tot = 0;
   
   for(i = 0; i < n; i++) {
      scanf("%d %lf %lf", &s[i].number, &s[i].height, &s[i].weight);
      height_tot += s[i].height;
      weight_tot += s[i].weight;
   }
   
   double height_avg = height_tot/n, weight_avg = weight_tot/n;
   printf("%.1lf %.1lf\n", height_avg, weight_avg);
   
   for(i = 0; i < n; i++) {
      printf("%d ", s[i].number);
      if(s[i].height > height_avg && s[i].weight > weight_avg)
         puts("super");
      else if(s[i].height > height_avg || s[i].weight > weight_avg)
         puts("average");
      else
         puts("below");
   }
   
   return 0;
}