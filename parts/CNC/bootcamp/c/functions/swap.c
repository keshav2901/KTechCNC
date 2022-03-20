#include<stdio.h>
#include<string.h>
void swap(char *a,char *b);
int main()
{
    char str[50];
    printf("Enter the string :");
    scanf("%s",str);
    int len = strlen(str);
    for(int i=1;i<len;i=i+2){
        swap(str+i,str+i-1);
    }
    printf("%s",str);
}
void swap(char* a,char* b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
