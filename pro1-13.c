#include <stdio.h>

#define IN 1
#define OUT 0
#define MAXWORDNUM 100

int main()
{
    int c, state, wl, wc;
    int wordlen[MAXWORDNUM];

    for (int i = 0; i < MAXWORDNUM; i++)
        wordlen[i] = 0;

    state = OUT;
    wl = 0;
    wc = 0;
    while ((c = getchar()) != EOF) 
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            state = IN;
            ++wl;
        }
        else if (state == IN)
        {
            wordlen[wc] = wl;
            ++wc;
            wl = 0;
            state = OUT;
        }
    }
    
    for (int k = 0; k < wc; k++)
    {
        for (int j = 0; j < wordlen[k]; j++ )
            printf("-");
        printf("\n");
    }
    return 0;
}
