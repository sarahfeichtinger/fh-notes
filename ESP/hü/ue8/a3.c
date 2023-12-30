#include <stdio.h>
#include <math.h>

typedef enum { RED, BLUE } risk_t;

typedef struct {
    double x1;
    double x2;
    risk_t risk;
} value_t;

/**
 * Finds the nearest neighbor based on Euclidean distance
 *
 * @param data Pointer to an array of value_t representing the historic data
 * @param len Lenght of the array
 * @param x1 The x1 coordinate for the new data point
 * @param x2 The x2 coordinate for the new data point
 * @return risk_t The risk associated with the nearest neighbor
 */
risk_t nearest_neighbor(value_t* data, int len, double x1, double x2) {

    double smallest_eucl_dist;
    risk_t risk = RED;

    // Loop data to calculate euclidean distance between the new data point and every historic data point
    for (int i = 0; i < len; i++) {
        
        double distance = sqrt(pow(x1 - data[i].x1, 2) + pow(x2 - data[i].x2, 2));
        
        // refresh rish status if current loop datapoint is closer to our new data point than the last clostest one
        /* C4701 warning because compiler thinks we may use not initialised local variable,
        but this cant happen because if left side is true, the or operator doesnt check the right side*/
        if (i==0 || distance < smallest_eucl_dist) {
            smallest_eucl_dist = distance;
            risk = data[i].risk;
        }
    }

    return risk;
}

/**
* Demonstrates the nearest_neighbor function with known data and prints the result
*
* @param argc The number of command-line arguments
* @param argv An array of strings representing the command-line arguments
* @return 0 If the code runs without errors
*/
int main(int argc, char** argv)
{
    value_t data[5];
    risk_t result;
    /* Known data */
    data[0].risk = RED;
    data[0].x1 = 22.1;
    data[0].x2 = 3.0;
    data[1].risk = RED;
    data[1].x1 = 22.2;
    data[1].x2 = 4.8;
    data[2].risk = RED;
    data[2].x1 = 20.9;
    data[2].x2 = 4.1;
    data[3].risk = BLUE;
    data[3].x1 = 20.5;
    data[3].x2 = 5.5;
    data[4].risk = BLUE;
    data[4].x1 = 19.5;
    data[4].x2 = 5.2;
    result = nearest_neighbor(data, 5, 20.2, 4.6);
    printf("%s\n", (result == RED) ? "Risk RED!" : "No Risk (BLUE).");
    return 0;
}
// warning because we never use argc and argv[] 