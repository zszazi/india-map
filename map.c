/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h> 
int main() 
{ 
    int a = 10, b = 0, c = 10;
    char* str = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq " "TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBL" "OFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm "	"SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";
    while (a != 0) 
    { 
        a = str[b++];	
        while (a-- > 64)	
        {
            if (++c == 90)
            {
                c = 10;	putchar('\n');
            }
            else	
            {	
                if (b % 2 == 0)
                putchar('!');
                else
                putchar(' ');
            }	
    
        } 
    
    }
    return 0;
}
