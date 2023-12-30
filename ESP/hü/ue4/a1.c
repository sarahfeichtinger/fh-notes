#include <stdio.h>

/**
 * Initializes an array representing 100 prison cells, where each cell is initially closed (0).
 * It then performs a simulation of the king's amnesty process,
 * where specific cells are opened or closed based on a series of instructions.
 * After the simulation, the program prints the numbers of the cells that are now open,
 * indicating the prisoners who have been granted amnesty.
 *
 * @return 0 if the code runs without errors
 */
int main(void)
{
    // note: this initialisation might not work with every C compiler, in our case it should work
    int doors[100] = { 0 };
    int firstDoorPrinted = 0;

    for (int i = 0; i < 100; i++) {
        for (int j = i; j < 100; j = j + i + 1) {
            doors[j] = !(doors[j]);
        }
    }

    printf("Offene Türen: ");

    for (int i = 1; i <= 100; i++) {
        if (doors[i - 1]) {
            if (!firstDoorPrinted) {
                printf("%d", i);
                firstDoorPrinted = 1;
            }
            else {
                printf(", %d", i);
            }
        }
    }

}
