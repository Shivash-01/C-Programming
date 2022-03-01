// C program to illustrate
// \t escape sequence
#include <stdio.h>
int
main(void)
{
	// Here we are using \t, which is
	// a horizontal tab character.
	// It will provide a tab space
	// between two words.
	printf("Hello \t Shiva\n");
    // Here we are using \r, which
    // is carriage return character.
    printf("Hello fri \r ends\n");
    // Here we are using \,
    // It contains two escape sequence 
    // means \ and \n.
    printf("Hello\\Shiv\n");
    
    // C program to illustrate \' escape
    // sequence/ and \" escape sequence to
    // print single quote and double quote.
    printf("\' Hello Shiv\n");
    printf("\" Hello Shiv\n");
    // Here we are using \?,  which is 
    // used for the presentation of trigraph
    // in the early of C programming. But
    // now we don't have any use of it.
    printf("\?\?!\n");
    // we are using \OOO escape sequence, here 
    // each O in "OOO" is one to three octal 
    // digits(0....7).
    char* s = "A\0725";
    printf("%s \n", s);
    // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    char* str = "B\x4a";
    printf("%s \n", str);

	return (0);
}
