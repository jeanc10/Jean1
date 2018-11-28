#include <iostream>++
#include <cstdlib>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
main(){
	int x,num,contador=0;
	srand((unsigned)time(NULL));
		x=rand()%(101);
	printf("Intenta adivinar el numero entre 0 y 100.");
		int bandera=0;
		while(bandera==0){
			printf("\n\nIntroduce numero: ");
			scanf("%d",&num);
			contador++;
			if(num>x){
				printf("\nMenor");
			}else if(num<x){
				printf("\nMayor");
			}else{
				printf("\n\nFelicidades lo gas adivinado en %d intentos.\n\n",contador);
				bandera=1;
				
			}
			
		}
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


