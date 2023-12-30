#include <stdio.h>

/**
* Replaces all ph's with f's and all Ph's with F's in a string
*
* @param clause Char pointer to a string containing ph's and Ph's
* @return count The number of ph's and Ph's found in the clause
*/
int writing_mod(char* clause) {
    int count = 0;

    // loop the clause to find all ph's and Ph's
    while (*clause != '\0') {
        // if "ph" or "Ph" is found replace it with "f"/"F"
        if ((*clause == 'p' || *clause == 'P') && *(clause + 1) == 'h') {

            *clause = (*clause == 'p') ? 'f' : 'F';

            // shift all right characters one to the left
            char* temp = clause + 1;
            while (*temp != '\0') {
                *temp = *(temp + 1);
                temp++;
            }

            count++;
        }

        clause++; 
    }

    return count;
}

/**
* Initializes a string, calls the writing_mod for the string and 
* prints the modified string and the number of replacements
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char* argv[]) {
    char clause[] = "phPhFfPHfffFphFFFPH";
    printf("count : %d\n%s\n", writing_mod(clause), clause);
    return 0;
}
// warning because we never use argc and argv[] 