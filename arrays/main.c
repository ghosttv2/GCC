#include <stdio.h>

int main() {

    /* todo: define the grades variable here */
    int grades[3];
    int average;

    grades[0] = 80;
    /*todo: define the missing grade so that the average will sum to 85.*/
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d", average);

    return 0;
 }
