// 20200988 컴퓨터학과 유하진
#include <stdio.h> 
void printUpperCase(char s[]);
int strLength(char s[]);

int main(void)
{
    char str[81];

    printf("Enter a string:");
    scanf_s("%s", str, 81);

    printf("길이는 %d\n", strLength(str)); 

    printf("대문자만 출력하면\n");
    printUpperCase(str); 
}

void printUpperCase(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", s[i]);
    printf("\n");
}

int strLength(char s[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++);

    return i;
}