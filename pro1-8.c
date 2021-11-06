#include <stdio.h>

/* count the number of space, tab and enter */
int main()
{
    int c, ns, nt, ne;

    ns = 0;
    nt = 0;
    ne = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ')
            ++ns;
        else if (c == '\t')
            ++nt;
        else if (c == '\n')
            ++ne;

    printf("The number of space, tab and enter is %d, %d, %d.\n", ns, nt, ne);

    return 0;
}
