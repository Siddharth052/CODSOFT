#include<stdio.h>
#include<conio.h>
int main(){
    char filename[100];
    FILE *fp;
    char ch;
    int count=1;
    printf("enter filename : ");
    gets(filename);
fp=fopen(filename,"r");

if (fp!=NULL)
{
    while((ch=fgetc(fp))!=EOF)
    {if(ch==' '||ch=='\n')
    count++;
    }
    printf("file have %d words",count);
    fclose(fp);
}
else
{   printf("file opening failed...");
}
    getch();
    return 0;
}