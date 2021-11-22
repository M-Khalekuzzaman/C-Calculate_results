#include<stdio.h>
int main()
{
    int roll,phy,che,math,total;
    float per;
    char name[20];
    printf("Input your roll number :");
    scanf("%d",&roll);
    printf("Name of the student :");
    scanf("%s",&name);
    printf("Enter Physics,Chemistry,Math marks are:");
    scanf("%d %d %d",&phy,&che,&math);
    total = phy + che + math;
    per =(float)total /3;
    if(per>=60)
        printf("First division");
    else if(per<60 && per>=48)
        printf("Second Division");
    else if(per<48 && per>=36)
        printf("Pass marks");
    else
        printf("Fail");
      printf("\nRoll No:  %d\n Name of the student :  %s\n",roll,name);
      printf("\nMarks in Physics : %d\n Marks in Chemistry :  %d\n Marks in Math :  %d\n",phy,che,math)  ;
      printf("\nTotal marks is :  %d\n Persentance is : %.2f\n",total,per);

    getch();

}
