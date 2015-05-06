#include <stdio.h>
#include <stdlib.h>

#define STR_MAXLEN 100

int main(int argc, char** argv) {
    char stringa[STR_MAXLEN+1];
    int s;
    
    printf("Inserisci una stringa: ", STR_MAXLEN);
    scanf("%[^\n]", stringa);
    
    while(strcmp(stringa, "[fine]")) {
        printf("Dove vuoi scrivere? 1-stdout,2-stderr ");
        scanf("%d", &s);
        
        switch(s) {
            case 1:
                fprintf(stdout, "stdout: %s\n", stringa);
                break;
            case 2:
            default:
                fprintf(stderr, "stderr: %s\n", stringa);
               
        }
        
        printf("Inserisci una stringa per la conclusione: ", STR_MAXLEN);
        scanf("\n%[^\n]", stringa);
        
    }

    return (EXIT_SUCCESS);
}
