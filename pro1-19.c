#include <stdio.h>
#define MAX 1000

int getOneLine(char s[], int max);
int reverse(char r[], char o[], int l);

int main()
{
    int i, len;
    char line[MAX];
    char reversed[MAX];
    
    while ((len = getOneLine(line, MAX)) > 0)
    {
        reverse(reversed, line, len);
        printf("%s", reversed);
    }
    
    return 0;
}

int getOneLine(char s[], int max)
{
    int i, c;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        s[i] = c;
    if (c == '\n')
    {
        s[i] = '\n';
        i++;
    }
    s[i] = '\0';
    return i;
}

int reverse(char r[], char o[], int len)
{
    int i;
    for (i = 0; i < len - 1; i++)
    {
        r[i] = o[len-2-i];
    }
    r[i] = '\n';
    r[i+1] = '\0';

    return len;
}
