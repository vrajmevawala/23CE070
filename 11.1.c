//wap to make result
#include<stdio.h>
int main()
{
    int marks[10], i=0, distinction=0, pass=0, fail=0, first_class=0;
    int *ptr_marks[10];
    for(i=0;i<10;i++)
    {
        printf("Enter marks of student %d : ",i+1);
        scanf("%d",&marks[i]);
        ptr_marks[i]= &marks[i];
    }
    for(i=0;i<10;i++)
    {
        if(*ptr_marks[i]>=70) distinction++;
        else if(*ptr_marks[i]>=60&&*ptr_marks[i]<=69)first_class++;
        else if(*ptr_marks[i]>=40&&*ptr_marks[i]<=59) pass++;
        else
        fail++;
    }
    printf("\nDistinction = %d",distinction);
    printf("\nFirst class = %d",first_class);
    printf("\nPass = %d",pass);
    printf("\nFail = %d",fail);
    printf("\n23CE070_Vraj Mevawala");
    return 0;
}

