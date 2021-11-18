#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
    char s1[] = "abcdefg";
    char s2[] = "eccdg";
    printf("%s -in- %s: %d\n", s2, s1, any(s1, s2));
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s2[i] != '\0'; i++)
    {
        for (j = 0; s1[j] != '\0'; j++)
        {
            if (s1[j] == s2[i])
                return j;
        }
    }
    return -1;
}
