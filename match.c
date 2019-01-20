#include <stdio.h>

int match(char *s1, char *s2)
{
    printf("e: %c _ %c\n", *s1, *s2);
    if (!*s1 && !*s2)
        return (1);
    if (!*s1 && *s2 != '*')
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
        while (*s1 && *s1 != *s2)
        {
            s1++;
        }
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
        printf("%c = %c recurse\n", *s1, *s2);
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
        printf("main.c vs ***.c OK:%d\n", match("main.c", "***.c")); 
        printf("main.c vs *.c OK:%d\n", match("main.c", "*.c")); 
        printf("main.c vs *.cd KO:%d\n", match("main.c", "*.cd")); 
        printf("car vs c* OK:%d\n", match("car", "c*"));
        printf("car vs co* KO:%d\n", match("car", "co*"));
        printf("maya vs *a*b KO:%d\n", match("maya", "*a*b"));
        printf("maya vs *a* OK:%d\n", match("maya", "*a*"));
        printf("mayoral vs *a*l OK:%d\n", match("mayoral", "*a*l"));
        printf("mayoral vs *a*o*a* OK:%d\n", match("mayoral", "*a*o*a*"));
        printf("mayoral vs *b*o*a* KO:%d\n", match("mayoral", "*b*o*a*"));
        printf("hola vs o* KO:%d\n", match("hola", "o*"));
        printf("hola vs *****o****** OK:%d\n", match("hola", "*****o******"));
        printf("hola vs *****o**a*** OK:%d\n", match("hola", "*****o**a***"));
}
