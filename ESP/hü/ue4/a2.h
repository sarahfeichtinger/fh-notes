#pragma once

#define STEP_SIZE_1_LOWER_BOUNDARY 1
#define STEP_SIZE_1_UPPER_BOUNDARY 9
#define STEP_SIZE_10_LOWER_BOUNDARY 10
#define STEP_SIZE_10_UPPER_BOUNDARY 99
#define FACTOR_10_LOWER_BOUNDARY 100
#define FACTOR_10_UPPER_BOUNDARY 100000

/* Caluculates -1 to the power of parameter k*/
int minusOnePowerK(int k);

/* Caluculates a fraction, using a part of the leibniz series formula*/
double fraction(int k);

/* Caluculates a approximation of pi using leibniz series*/
double sumOfFractions(int noOfFractions);