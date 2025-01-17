#include <cstring>
//Антон Селюков L223_061 - функция findmatch, которая ищет строку в тексте.
int findmatch (char *p, char *t) 
{
    int i, j; /* counters */
    int plen, tlen; /* string lengths */
    plen = strlen(p);
    tlen = strlen(t);
    for (i = 0; i <= (tlen-plen); i = i + 1) 
    {
        j = 0;
        while ((j < plen) && (t[i + j] == p[j])) 
        {
            j = j + 1;
        }
        if (j == plen) 
        {
            return(i); /* location of the first match */
        }
    }
    return(-1); /* there is no match */
}