#include <stdio.h>

int main() {
    /*todo: declare the 2D arrqy grades here */
    float average;
    int i;
    int j;
    int grades[2][5];

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* todo: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }
        average /= 5.0;

        /* todo: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
 }
    return 0;
}
