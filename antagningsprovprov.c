//Write your code in this file
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h> // For toupper function

double medelpoäng(int result[5][13], int a) {
    double sum = 0;
    double temp = 0;
    for (int i = 0; i < 13; i++) {
        
        sum += result[a][i];
    }
    temp = sum / 13;
    return temp;
}
double jämför(double Array_medelpoäng[5], char names[5][50]) {
    double max = Array_medelpoäng[0];
    int index = 0;
    for (int i = 0; i < 5; i++) {
        if (Array_medelpoäng[i] > max) {
            max = Array_medelpoäng[i];
            index = i;
        }
    }
    names[index][0] = toupper(names[index][0]); // Capitalize the first letter of the name
    printf("%s\n", names[index]);
}
double Totala_medelpoäng(double Array_medelpoäng[5]) {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += Array_medelpoäng[i];
    }
    return sum / 5;
}

int main () {
    char names[5][50];
    int results[5][13];
    double Array_medelpoäng[5];
    for (int i = 0; i < 5; i++) {
   //     printf("Enter name and results of student %d: ", i + 1);
        scanf("%10s %d %d %d %d %d %d %d %d %d %d %d %d %d", names[i], &results[i][0], &results[i][1], &results[i][2],
             &results[i][3], &results[i][4], &results[i][5], &results[i][6], &results[i][7], &results[i][8], &results[i][9],
              &results[i][10], &results[i][11], &results[i][12]);
    }
    for (int i = 0; i < 5; i++) {
        Array_medelpoäng[i] = medelpoäng(results, i);
    //  printf("Average score for %s: %1.2lf\n", names[i], medelpoäng(results, i));
    }
    jämför(Array_medelpoäng, names);
    double Totala_medelpoäng_variabel = Totala_medelpoäng(Array_medelpoäng);
    double under_medelpoäng[5];
    for (int i = 0; i < 5; i++) {
        if (Array_medelpoäng[i] < Totala_medelpoäng_variabel) {
  //        under_medelpoäng[i] = Array_medelpoäng[i];
  names[i][0] = toupper(names[i][0]); // Capitalize the first letter of the name
            printf("%s\n", names[i]);
        }
    }
 //   for (int i = 0; i < 5; i++) {
 //       printf("%s %d %d %d %d %d %d %d %d %d %d %d %d %d\n", names[i], results[i][0], results[i][1], results[i][2], results[i][3], results[i][4], results[i][5], results[i][6], results[i][7], results[i][8], results[i][9], results[i][10], results[i][11], results[i][12]);
 //   }
    return 0;
}
