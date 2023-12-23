#include <stdio.h>
#define MAX_SIZE 100

int main() {
    int i, j, tmp, n, com[MAX_SIZE];
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        scanf("%d", &com[i]);
    }
    for(i=1; i<=n; i++){
        printf("%d: ", i);
        for(j=1; j<=n; j++){
            if(i==j)
                continue;
            if(com[i] > com[j])
                printf("> ");
            else if(com[i] < com[j]) 
                printf("< ");
            else 
                printf("= ");
        }
        printf("\n");
    }
    return 0;
}
