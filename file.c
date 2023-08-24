#include<stdio.h>
void main(){
    char name[50];
    int mark;
    char result[20];

    FILE *fp;
    fp=fopen("demo.txt","w");
    printf("enter the name : enter the mark: enter the result:");
    scanf("%[^\n] %d %[^\n]",name,&mark,result);
    fprintf(fp,"%s\t%d\t%s",name,mark,result);

    fclose(fp);

}