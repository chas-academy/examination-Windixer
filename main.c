//Write your code in this file
#include <stdio.h>
#include <math.h>
#include <string.h>

int medelpoäng(int *result) {
    int sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += result[i];
    }
    return sum / 13;
}

int main () {
    char names[5][50];
    int results[5][13];
    for (int i = 0; i < 5; i++) {
        printf("Enter name and results of student %d: ", i + 1);
        scanf("%49s %d %d %d %d %d %d %d %d %d %d %d %d %d", names[i], &results[i][0], &results[i][1], &results[i][2],
             &results[i][3], &results[i][4], &results[i][5], &results[i][6], &results[i][7], &results[i][8], &results[i][9],
              &results[i][10], &results[i][11], &results[i][12]);
    }
    for 
    for (int i = 0; i < 5; i++) {
        printf("%s %d %d %d %d %d %d %d %d %d %d %d %d %d\n", names[i], results[i][0], results[i][1], results[i][2], results[i][3], results[i][4], results[i][5], results[i][6], results[i][7], results[i][8], results[i][9], results[i][10], results[i][11], results[i][12]);
    }
    return 0;
}
