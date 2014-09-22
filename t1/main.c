/* 
 * File:   main.c
 * Author: user
 *
 * Created on September 22, 2014, 9:08 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

double alv(double hinta);
void kysy(double *hinta);

int main(int argc, char** argv) {
    double hinta;
    
    kysy(&hinta);
    
    printf("Hinta ilman alvia: %.2f\n", hinta);
    printf("Hinta alvin kanssa: %.2f\n", alv(hinta));
    
    return (EXIT_SUCCESS);
}

double alv(double hinta) {
    return hinta * 1.22;
}

void kysy(double *hinta) {
	char input[20];

	do {
		printf("Anna hinta\n");
		fgets(input, sizeof(input), stdin);
		*hinta = atof(input);
	} while (*hinta == '\0');
}
