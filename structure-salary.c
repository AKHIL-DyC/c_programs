#include<stdio.h>
#include<string.h>
void main(){
    int number;
    struct Employee
    {
        char name[50];
        char gender;
        int Id;
        float salary;
    };
    printf("enter the number of employee  ");
    scanf("%d",&number);
    struct Employee emplyoee[number];
    for(int i=0;i<number;i++){
        printf("enter the name of the employee number %d",i+1);
        getchar();
        gets(emplyoee[i].name);
        printf("enter gender(m,f) :");
        scanf("%c",&emplyoee[i].gender);
        printf("enter the salary");
        scanf("%f",&emplyoee[i].salary);
    }
    printf("name\tgender\tsalary\n");
    for(int i=0;i<number;i++){
        puts(emplyoee[i].name);
        printf("\t%c\t%f\n",emplyoee[i].gender,emplyoee[i].salary);
    }
}