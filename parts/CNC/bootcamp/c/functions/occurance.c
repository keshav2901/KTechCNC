#include <stdio.h>
#include<string.h>

int main() {
    char a[100],b[50];
    int c[50];
    int n=0;
    printf("Enter the string : ");
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        int x=0;
        for(int j=0;j<strlen(b);j++){
            if(b[j] == a[i]){
                x++;
            }
        }
        if(x==0)
        {
            b[n]=a[i];
            n++;
        }
    }
    for(int i=0;i<strlen(b);i++){
        int count=0;
        for(int j=0;j<strlen(a);j++){
            if(b[i]==a[j]){
                count++;
            }
        }
        printf("\n%c occurs %d time",b[i],count);
    }
    return 0;
}
