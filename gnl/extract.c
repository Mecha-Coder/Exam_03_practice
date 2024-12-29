#include <stdio.h>

/*
extract
=======
- Malloc and return the fist n number of string

=====================================================================
Example

n      : 2         
string : jpaul
pos    : 12  (not index)
return : jp

=====================================================================
Param
- char : *s (Must not be NULL)
- int  :  n (Must be > 0 and not bigger than strlen(s))

=====================================================================
Return (char *)
   O.K : pointer to the newly malloc string
   NULL: Malloc error
*/

char *extract(char *s, int n)
{
    char *ptr;
    int i;

    i = 0;
    if (!s || n < 1 || n > ft_strlen(s))
        return (NULL);
    ptr = (char *)malloc(n + 1);
    if (ptr)
    {
        while (n--)
            ptr[i++] = *s++;
        ptr[i] = '\0';
    }
    return (NULL);
}

void answer(char *s, int n)
{
    char *result;
    result = extract(s, n);
    if (result)
    {
        print("input= %s, n = %d, result = %s",s, n, result);
        free(result);
    }
    else
        print("input= %s, n = %d, result = NULL",s, n);
}

int main()
{
    answer(NULL, 5);
    answer("h", 2);
    answer("hello", 10);
    asnwer("dsa", -2);
    asnwer("dsa", 0);
    asnwer("dsa", 1);
}