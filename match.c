#include <stdio.h>

// if they are different
// check if b is wild chard

// skip a until it matches what is currently in b.
// if you cannot find a match until the end return 0;

// if we have found a match and we are at the end of both strings
// return 1
// if we have not got to the end of b and a
// do the above with the pointers where we left it



int match(char *s1, char *s2)
{
    printf("e: %c _ %c\n", *s1, *s2);
    if (!*s1 && !*s2)
        return (1);
    if (!*s1 && *s2)
    {
        printf("s1 is  finished and s2 is not over not equal \n");
        return (0);
    }
    if (*s1 != *s2 && (*s2 == '*'))
    {
        // skip s2 until there is no wild chard
        while (*s2 && *s2 == '*')
        {
            s2++;    
        }
        printf("s2: %c\n", *s2);
        while (*s1 && *s1 != *s2)
        {
            s1++;
        }
        printf("s1: %c\n", *s1);
        if (*s1 == *s2)
        {
            printf("I need to recurse\n");
            match(s1, s2);
        }
        else if (!*s1)
        {
            return (0);    
        }
    }
    // the chars are the same
    else if (*s1 == *s2)
    {
        printf("chars %c = %c equal continue recurse\n", *s1, *s2);
        s1++;
        s2++;
        match(s1, s2);
    } 
    else if (*s1 != *s2)
    {
        printf("car in s1 s2 do not match \n");
        return (0);
    }
}

int main(void)
{
        //printf("main.c vs ***.c OK:%d\n", match("main.c", "***.c")); 
        //printf("main.c vs *.c OK:%d\n", match("main.c", "*.c")); 
        //printf("main.c vs *.cd KO:%d\n", match("main.c", "*.cd")); 
        //printf("car vs c* OK:%d\n", match("car", "c*"));
        //printf("car vs co* KO:%d\n", match("car", "co*"));
        //printf("maya vs *a*b KO:%d\n", match("maya", "*a*b"));
        //printf("maya vs *a* OK:%d\n", match("maya", "*a*"));
        printf("mayoral vs *a*l OK:%d\n", match("mayoral", "*a*l"));
        

    
    
}
