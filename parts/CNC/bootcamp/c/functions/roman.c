#include<stdio.h>
#include<string.h>
int main()
{
    char rom[50];
    printf("Enter the roman number :");
    scanf("%s",rom);
    printf("%s",rom);
    if(rom == "X")
        printf("\n10");
    else if(rom[2] == 'I' && rom[1] == 'I' && rom[0] == 'I')
        printf("\n3");
    else if(rom[1] == 'I' && rom[0] == 'I')
        printf("\n2");
    else if(rom[0] == 'I' && rom[1] == 'V')
        printf("\n4");
    else if(rom[3] == 'I' && rom[2] == 'I' && rom[1] == 'I' && rom[0] == 'V')
        printf("\n8");
    else if(rom[2] == 'I' && rom[1] == 'I' && rom[0] == 'V')
        printf("\n7");
    else if(rom[1] == 'I' && rom[0] == 'V')
        printf("\n6");
    else if(rom[0] == 'V')
        printf("\n5");
    else if(rom[0] == 'I' && rom[1] == 'X')
        printf("\n9");
    else if(rom[0] == 'I')
        printf("\n1");
    else{
        printf("\nEnter a number between 0 and 10");
}
}
