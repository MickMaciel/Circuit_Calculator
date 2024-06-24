//
//  functions.h
//  circuit_calculator
//
//  Created by Mick Maciel on 15/04/2024.
//

#ifndef functions_h
#define functions_h

#include <stdio.h>

void main_menu(void);

void run_calculator(void);

void select_calculator(int s);

float resistor_calculator(float v, float i);

float voltage_calculator(float i, float r);

float ampers_calculator(float v, float r);


#endif /* functions_h */
