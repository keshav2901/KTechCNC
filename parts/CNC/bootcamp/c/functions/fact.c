#include<stdio.h>
#include<string.h>
int fac(int a);
int main()
{
    int inp=0;
    printf("Enter the number :");
    scanf("%d",&inp);
    int ans=fac(inp);
    printf("%d",ans);
    return 0;

}
int fac(int a)
{
    if(a == 1){
        return 1;
}
    else{
        return a*fac(a-1);}
}
