#include <stdio.h>

int main(){
     FILE *fp1;

     fp1= fopen ("Makefile", "r");

     while(1)
     {
        char c = fgetc(fp1);
        if(c == EOF)
            break;
        else printf("%c %x\n", c, c);
     }

     fclose(fp1);
     return 0;
}