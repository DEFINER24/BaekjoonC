#include <stdio.h>
#include <stdlib.h>

double CheckGradeScore(char grade[3]){

    double gradeScore;
    if(grade[0] == 'F'){
        gradeScore = 0.0;
    }
    if(grade[0] == 'A'){
        if(grade[1] == '0'){
            gradeScore = 4.0;
        }
        else{
            gradeScore = 4.5;
        }
    }
    if(grade[0] == 'B'){
        if(grade[1] == '0'){
            gradeScore = 3.0;
        }
        else{
            gradeScore = 3.5;
        }
    }
    if(grade[0] == 'C'){
        if(grade[1] == '0'){
            gradeScore = 2.0;
        }
        else{
            gradeScore = 2.5;
        }
    }
    if(grade[0] == 'D'){
        if(grade[1] == '0'){
            gradeScore = 1.0;
        }
        else{
            gradeScore = 1.5;
        }
    }
    
    return gradeScore;
}

int main(){
    
    double mulScore = 0, subjectScore = 0, subjectSum = 0, gradeScore = 0;
    char subjectName[51], subjectGrade[3];

    for(int i=0; i<20; i++){

        scanf("%s %lf %s", subjectName, &subjectScore, subjectGrade);

        if (subjectGrade[0] == 'P'){ //등급이 P면 계산 제외
            continue;
        }
        gradeScore = CheckGradeScore(subjectGrade);
        subjectSum += subjectScore;
        mulScore += subjectScore * gradeScore;
    }

    printf("%f", mulScore / subjectSum);

    return 0;
}


/*
A+	4.5
A0	4.0
B+	3.5
B0	3.0
C+	2.5
C0	2.0
D+	1.5
D0	1.0
F	0.0
*/
