#include <stdio.h>
#include "a1.h"

/**
 * Prints the results of different bit operations (assignment a)
 *
 * @param void No params
 * @return 0 Program executed successfully
 */
int main() {
    
    unsigned char var = 0;

    // AND operation
    //        15 = 0000 1111
    //        21 = 0001 0101
    // 15 and 21 = 0000 0101
    //           = 5
    var = 15 & 21;
    printf("15 & 21 = %u\n", var);


    // OR operation
    //       15 = 0000 1111
    //       25 = 0001 1001
    // 15 or 25 = 0001 1111
    //          = 31 
    var = 15 | 25;
    printf("15 | 21 = %u\n", var);


    // Shifts the binary number 3 2 places to the left
    //                      3 = 0000 0011
    // bitshift 2 to the left = 0000 1100
    //                        = 12
    var = 3 << 2;
    printf("3 << 2 = %u\n", var);


    // Shifts the binary number 16 4 places to the right
    //                      16 = 0001 0000
    // bitshift 4 to the right = 0000 0001
    //                         = 1
    var = 16 >> 4;
    printf("16 >> 4 = %u\n", var);


    // first shift the binary number 23 2 places to the right and after that 
    // shift the 23 as many places to the left, as the result of the first shift says
    //                         23 = 0001 0111
    // bitshift 23 2 to the right = 0000 0101
    //                            = 5
    //  bitshift 23 5 to the left = 10 1110 0000 = 1110 0000
    //                            = 224
    var = 23 << (23 >> 2);
    printf("23 << (23 >> 2) = %u\n", var);


    // NOT operation
    // 13 = 0000 1101
    //              ~13 "not 13" = 1111 0010
    //                        16 = 0001 0000
    //                 16 | (~13) = 1111 0010 = 242
    // 23 = 0001 0111
    // bitshift 23 3 to the right = 0000 0010 = 2
    //    (23 >> 3) & (16 | (~13)) = 0000 0010 = 2
    var = (23 >> 3) & (16 | (~13));
    printf("(23 >> 3) & (16 | (~13)) = %u\n", var);

    return 0;
}



/* assignment b
* 
* 
* Formel            Bit-Operation       Beispiel
* ------------------------------------------------
* 2 * n             n << 1              2 * 4 = 8           // shifting one to the left = multiplied by 2
* floor(n/2)        n >> 1              floor(5/2)=2        // shifting one to the right = divided by 2 (integer division)
* n*2^k             n << k              5 * 2^3 = 40          
* floor(n / 2^k)    n >> k              floor(20 / 2^3)
* n mod 2           n & 1               5 mod 2 = 1
*/