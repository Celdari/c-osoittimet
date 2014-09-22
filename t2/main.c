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

void korotus(float *arvo, int korotusProsentti);
void kysy(float *arvo, char print[]);

int main(int argc, char** argv) {
    float arvo;
    float prosentti;
    
    kysy(&arvo, "arvo");
    kysy(&prosentti, "korkoprosentti");
    
    printf("Ennen korotusta: %.2f\n", arvo);
    korotus(&arvo, prosentti);
    printf("Korotuksen jälkeen: %.2f\n", arvo);
    
    return (EXIT_SUCCESS);
}

void korotus(float *arvo, int korotusProsentti) {
    float prosentti = (float)korotusProsentti / 100 + 1.0;
    *arvo *= prosentti;
}

void kysy(float *arvo, char print[]) {
	char input[20];

	do {
		printf("Anna %s\n", print);
		fgets(input, sizeof(input), stdin);
		*arvo = atof(input);
	} while (*arvo == '\0');
}
