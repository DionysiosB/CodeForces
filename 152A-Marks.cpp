#include <cstdio>
#include <iostream>
using namespace std;

int main(){
    int numStudents, numCourses; scanf("%d %d\n", &numStudents, &numCourses);
    int maxGrade = 0; char temp;
    bool *successful = new bool[numStudents];
    int *grades = new int[numStudents * numCourses];

    for(int n = 0; n < numStudents; n++){
        for(int m = 0; m < numCourses; m++){scanf("%c", &temp); grades[n * numCourses+ m] = temp - '0';}
        scanf("\n");
    }

    for(int n = 0; n < numStudents; n++){successful[n] = 0;}

    for(int m = 0; m < numCourses; m++){
        maxGrade = 0;
        for(int n = 0; n < numStudents; n++){maxGrade = max(maxGrade, grades[n * numCourses + m]);}
        for(int n = 0; n < numStudents; n++){if(grades[n * numCourses + m] == maxGrade){successful[n] = 1;}}
    }

    int total = 0;
    for(int student = 0; student < numStudents; student++){total += successful[student];}
    printf("%d\n", total);
    return 0;
}
