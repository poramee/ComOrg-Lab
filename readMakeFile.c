#include <stdio.h>

int main(){
    /* Pointer to the file */
     FILE *fp1;

     /* Opening a file in r mode*/
     fp1= fopen ("make", "r");

     /* Infinite loop –I have used break to come out of the loop*/
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