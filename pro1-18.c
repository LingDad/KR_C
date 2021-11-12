#include <stdio.h>
#define MAX 1000

int getOneLine(char s[], int max);

int main()
{
    int i, len;
    char line[MAX];

    while ((len = getOneLine(line, MAX)) > 0)
    {
        for (i = len - 2; i >= 0 && (line[i] == ' ' || line[i] == '\t'); i--)
        {
            line[i] = '\n';
            line[i+1] = '\0';
        }
        printf("%s", line);
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
