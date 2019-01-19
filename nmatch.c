#include <stdio.h>

/*
* the recursion adds up all returns when all recursions end
*/
int nmatch(char *s1, char *s2)
{
    printf("c:%c, c:1:%c\n", *s1, *s2);
    // if I got to the end of the strings
	if (!*s1 && !*s2)
		return (1);
	// if both chars are the same and the chars is not a wild card	
	else if (*s1 == *s2 && *s1 != '*')
	    // recurse moving to the next chars in both strings
		return (nmatch(s1 + 1, s2 + 1));
		// if both chars are wild cards
	else if (*s1 == '*' && *s2 == '*')
	    // recurse incrementing only the first string.
		return (nmatch(s1 + 1, s2));
		// if the second string char is a wild card
		// and we aren't at the end of the first string
	else if (*s2 == '*' && !*s1)
	    // recurse moving to the next char on the second string
		return (nmatch(s1, s2 + 1));
		// if the second char is a wildcard
		// and we have not reached the end of both strings
	else if (*s2 == '*' && *s2 && *s1)
	    // recurse twice on incrementing s2 and another incrementing s1
		return (nmatch(s1, s2 + 1) + nmatch(s1 + 1, s2));
	else
	    // could not find match.
		return (0);
}

int main()
{
    int a1 = nmatch("a*s","*b");
     //int a1 = nmatch("abcbd","*b*");
  //  int a2 = nmatch("abc", "a**")

    printf("m: %d\n", a1);
    // printf("m: %d\n", a2);
    return 0;
}
