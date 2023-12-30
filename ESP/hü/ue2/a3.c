#define _USE_MATH_DEFINES //if defined, another header file with all the constants is included from math.h

#include <stdio.h>
#include <math.h>
#include "a3.h"

/**
 * Prints the values of the volume in cm³, surface line in cm and lateral surface in cm² 
 * for a cone with a defined height h in cm and a defined radius r in cm
 *
 * @param void No params
 * @return 0 Program executed successfully
 */
int main(void) {

	float r = 12.123;
	float h = 14.123;

	printf("Berechnung eines Kegels:\n");
	printf("=======================\n");

	printf("\n");
	printf("Höhe: %.2f\n", h);
	printf("Radius: %.2f\n", r);

	printf("\n");
	printf("Volumen: %.2f Kubikzentimeter\n", volume(r, h));
	printf("Mantellänge: %.2fcm\n", surface_line(r, h));
	printf("Mantelfläche: %.2f Quadratzentimeter\n", lateral_surface(r, h));

	return 0;
}

/**
 * Caluculates the volume of a cone using 1/3 * PI * r² * h
 *
 * @param h Height of the cone
 * @param r Radius of the cone
 * @return The volume of the cone
 */
float volume(float r, float h) {
	return (1.0/3) * M_PI * r * r * h;
}


/**
* Caluculates the surface line of a cone using squareroot of h²+r²
*
* @param h Height of the cone
* @param r Radius of the cone
* @return The surface line of the cone
*/
float surface_line(float r, float h) {
	return sqrt(h*h + r*r);
}


 /**
 * Caluculates the lateral surface of a cone using s * r * PI
 *
 * @param s Surface line of the cone
 * @param r Radius of the cone
 * @return The lateral surface of the cone
 */
float lateral_surface(float r, float h) {
	float s = surface_line(r, h);
	return s * r * M_PI;
}