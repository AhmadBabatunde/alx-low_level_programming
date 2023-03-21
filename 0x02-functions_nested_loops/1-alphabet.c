#include <stdio.h>
#include <stdlib.h>
/*
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{       
        for (char i='a';i<='z';i++)
        {       
                putchar(i);
        }
}
int main(void)
{       
        print_alphabet();
        
        putchar('\n');
}       
