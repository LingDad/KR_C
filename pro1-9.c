#include <stdio.h>

/* copy input to output, and replace multimple spaces with one space */
int main()
{
    int c, ns;

    ns = 0;
    while ((c = getchar()) != EOF)
        if (c != ' ')
        {
            putchar(c);
            ns = 0;
        }
        else
        {
            ++ns;
            if (ns < 2)
                putchar(c);
        }

    return 0;
}
