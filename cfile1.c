#include <stdio.h>

#define PATIENTS 5
#define READINGS 4

int main() {
    float temp[PATIENTS][READINGS];
    float *ptr = &temp[0][0];
    float avg[PATIENTS], sum;
    float highest = -1000.0;
    printf("Enter temperature readings (5 patients, 4 readings each):\n");
    for (int i = 0; i < PATIENTS; i++) {
        for (int j = 0; j < READINGS; j++) {
            printf("Patient %d, Reading %d: ", i + 1, j + 1);
            scanf("%f", (ptr + i * READINGS + j));
            if (*(ptr + i * READINGS + j) > highest) {
                highest = *(ptr + i * READINGS + j);
            }
        }
    }
    for (int i = 0; i < PATIENTS; i++) {
        sum = 0;
        for (int j = 0; j < READINGS; j++) {
            sum += *(ptr + i * READINGS + j);
        }
        avg[i] = sum / READINGS;
    }
    printf("\nAverage temperature for each patient:\n");
    for (int i = 0; i < PATIENTS; i++) {
        printf("Patient %d: %.2f\n", i + 1, avg[i]);
    }
    printf("\nHighest temperature of the day: %.2f\n", highest);

    return 0;
}
