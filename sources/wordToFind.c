#include "/../headers/wordToFind.h"
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <time.h>



string getRandomWord(){
	FILE* fichier = NULL;
	fichier = fopen("/../data/dictionnaire.txt" , "r");
	string dictionnaire[5];

	if(fichier != NULL){
		fscanf(fichier,"%s/%s/%s/%s/%s",dictionnaire[0],dictionnaire[1],dictionnaire[2],dictionnaire[3],dictionnaire[4]);
		int place = rand()%5;
		return dictionnaire[place];
	}
	else{
		printf("Impossible d'ouvrir le dictionnaire.");
	}
	fclose(fichier);
	exit(-1);
}

