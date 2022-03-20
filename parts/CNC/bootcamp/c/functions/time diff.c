#include<stdio.h>
#include<string.h>
int min(char x[]);
int main()
{
    int stt=0,ent=0;
    char s[10],e[10];
    printf("Enter start time like this 12:00 =");
    scanf("%s",s);
    printf("%s",s);
    printf("\nEnter end time like this 12:00 =");
    scanf("%s",e);
    stt = min(s);
    ent = min(e);
    int time=ent-stt;
    printf("\n%d",time);
    int hr;
    hr=0;
    while(time >= 60){
        time=time-60;
        hr++;
    }
    printf("(%d:%d)",hr,time);
}
int min(char* x)
{
    int hr1=(int)x[0]-48;
    int hr2=(int)x[1]-48;
    int mi1=(int)x[3]-48;
    int mi2=(int)x[4]-48;
    int hr=0,mi=0;
    hr = (hr1*10)+hr2;
    mi = (mi1*10)+mi2;
    int t=(hr*60)+mi;
    return t;
}
