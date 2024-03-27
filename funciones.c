/*
 * funciones.c
 *
 *  Created on: Dec 21, 2023
 *      Author: FJNR1
 */
#include "funciones.h"
char * Encriptador(char*mensaje,int KEY){
 static char encrypted_data[100];
 memset(encrypted_data, 0, sizeof(encrypted_data));
 char * ED=NULL;
	for(int i=0;*mensaje!='\0';i++){
     encrypted_data[i]=*mensaje ^ KEY ;
     mensaje++;

	}
    ED=encrypted_data;

return ED;

}
char *RANDKEY(){
static char key[3];
char * pkey=NULL;
srand (time(NULL));
for(int i=0;i<3;i++){
	key[i]=rand()%(90-48+1) +50;; //genera un numero random de 50 a 90 es el rango de 0 a z en ascii
}
pkey = key;
return pkey;

}
