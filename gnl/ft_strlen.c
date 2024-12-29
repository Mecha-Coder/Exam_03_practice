#include <header.h>

int  ft_strlen(char *s)
{
    int i;

    i = 0;
    while (!s && *s++)
        i++;
    return (i);
}