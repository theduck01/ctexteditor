#include <stdio.h>
#include<unistd.h>

int main() {
    FILE *fptr;
    char filenameset[100];
    char filetext[1000];
    printf("  #####     #######                        #######                              \n");
    printf(" #     #       #    ###### #    # #####    #       #####  # #####  ####  #####  \n");
    printf(" #             #    #       #  #    #      #       #    # #   #   #    # #    # \n");
    printf(" #             #    #####    ##     #      #####   #    # #   #   #    # #    # \n");
    printf(" #             #    #        ##     #      #       #    # #   #   #    # #####  \n");
    printf(" #     #       #    #       #  #    #      #       #    # #   #   #    # #   #  \n");
    printf("  #####        #    ###### #    #   #      ####### #####  #   #    ####  #    # \n");
    sleep(4);
    printf("\e[1;1H\e[2J");
    printf("\n");
    printf("Enter what you would like to name your file: ");
    scanf("%s", filenameset);
    fptr = fopen(filenameset, "w");
    scanf("%s", filetext);
    fprintf(fptr,"%s", filetext);
    fclose(fptr);
}