#include <stdio.h>

int main(){

    int n_subjects=3;
    int n_students=2;   

    int marks[3][2];   //same way you can do for multi -D Array

    for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){
            printf("Enter the marks of student %d in %d subject\n", i+1, j+1);
            scanf("%d", &marks[i][j]);  //here i and j are imp

        }
    }


      for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){
            printf(" The marks of student %d in %d subject is :%d\n", i+1, j+1, marks[i][j]);

        }
    }

return 0;

}   