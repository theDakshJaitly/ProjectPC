#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

//num of student var
int stuNum = 0;

//student info variables
struct stuInfo {
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];

} st[50];


void add_statement() {

    printf("Add the Students Details\n");
    printf("-------------------------\n");
    printf("Enter the first "
           "name of student\n");




    for (int j = 0; j < 5; j++) {
        scanf("%d", &st[stuNum].cid[j]);
    }
    stuNum = stuNum + 1;
}
