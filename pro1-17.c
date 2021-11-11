#include <stdio.h>
#define MAX 1000

int getOneLine(char s[], int max);

int main()
{
    char line[MAX];
    int len;

    while ((len = getOneLine(line, MAX)) > 0)
    {
        if (len > 80)
            printf("%s\n", line);
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
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}
