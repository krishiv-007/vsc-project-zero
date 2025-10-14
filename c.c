//make a grading sheet 
#include <stdio.h>
#include <ctype.h>
int main()
{
    printf("welcome to the gradin system:\n");
    char edl,dsma,ocw,cp,dld;
    printf("enter the edl score:");
    scanf(" %c", &edl);
    printf("enter the dsma score:");
    scanf(" %c", &dsma);
    printf("enter the ocw score:");
    scanf(" %c", &ocw);
    printf("enter the cp score:");
    scanf(" %c", &cp);
    printf("enter the dld score:");
    scanf(" %c", &dld);
    char score[5];
    score[0]=edl;
    score[1]=dsma;
    score[2]=ocw;
    score[3]=cp;
    score[4]=dld;
    double cgpa=10.0;
    for(int i=0;i<5;i++)
    {
        char j=toupper(score[i]);
        switch(j)
        {
            case 'O':
                break;
            case 'A':
                cgpa-=0.2;
                break;
            case 'B':
                cgpa-=0.4;
                break;
            case 'C':
                cgpa-=0.6;
                break;
            case 'D':
                cgpa-=0.8;
                break;
            case 'P':
                cgpa-=1;
                break;
            case 'F':
                cgpa=0;
                break;
        }
        if(cgpa==0)
        {
            printf("the student has failed a sem womp womp");
            break;
        }
    }
    printf("the final cgpa of the student is;%.2lf",cgpa);
}