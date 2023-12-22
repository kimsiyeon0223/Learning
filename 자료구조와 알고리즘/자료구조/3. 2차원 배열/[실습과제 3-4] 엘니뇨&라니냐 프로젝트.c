#include <stdio.h>
#include <math.h>

int main() {
    int years[] = {1990, 1991, 1992, 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000}; // 연도
    float enso_indices[] = {0.6, 0.8, 0.9, -0.5, -1.2, 0.3, -0.7, -1.5, -2.0, 0.2, 0.1}; // ENSO 지수

    // 1. 엘니뇨 현상이 일어난 모든 해를 출력
    printf("엘니뇨:");
    for (int i = 0; i < sizeof(years) / sizeof(years[0]); i++) {
        if (enso_indices[i] > 0) {
            printf("%d", years[i]);
            if (i < sizeof(years) / sizeof(years[0]) - 1) {
                printf(",");
            }
        }
    }
    printf("\n");

    // 2. 가장 강한 엘니뇨 조건이 형성된 해를 출력
    printf("가장 강한 엘니뇨:");
    float max_enso = enso_indices[0];
    int max_enso_year = years[0];
    for (int i = 1; i < sizeof(years) / sizeof(years[0]); i++) {
        if (enso_indices[i] > max_enso) {
            max_enso = enso_indices[i];
            max_enso_year = years[i];
        }
    }
    printf("%d\n", max_enso_year);

    // 3. 라니냐 현상이 일어난 모든 해를 출력
    printf("라니냐:");
    for (int i = 0; i < sizeof(years) / sizeof(years[0]); i++) {
        if (enso_indices[i] < 0) {
            printf("%d", years[i]);
            if (i < sizeof(years) / sizeof(years[0]) - 1) {
                printf(",");
            }
        }
    }
    printf("\n");

    // 4. 가장 강한 라니냐 조건이 형성된 해를 출력
    printf("가장 강한 라니냐:");
    float max_la_nina = fabs(enso_indices[0]);
    int max_la_nina_year = years[0];
    for (int i = 1; i < sizeof(years) / sizeof(years[0]); i++) {
        if (fabs(enso_indices[i]) > max_la_nina) {
            max_la_nina = fabs(enso_indices[i]);
            max_la_nina_year = years[i];
        }
    }
    printf("%d\n", max_la_nina_year);

    // 5. 가장 정상에 가까운 해를 출력
    printf("가장 정상적인 해:");
    float min_abs_enso = fabs(enso_indices[0]);
    int min_abs_enso_year = years[0];
    for (int i = 1; i < sizeof(years) / sizeof(years[0]); i++) {
        if (fabs(enso_indices[i]) < min_abs_enso) {
            min_abs_enso = fabs(enso_indices[i]);
            min_abs_enso_year = years[i];
        }
    }
    printf("%d\n", min_abs_enso_year);

    return 0;
}