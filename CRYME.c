/*

██╗   ██╗       ███████╗███╗   ██╗ ██████╗██████╗ ██╗   ██╗
██║   ██║       ██╔════╝████╗  ██║██╔════╝██╔══██╗╚██╗ ██╔╝
██║   ██║       █████╗  ██╔██╗ ██║██║     ██████╔╝ ╚████╔╝
╚██╗ ██╔╝       ██╔══╝  ██║╚██╗██║██║     ██╔══██╗  ╚██╔╝
 ╚████╔╝███████╗███████╗██║ ╚████║╚██████╗██║  ██║   ██║
  ╚═══╝ ╚══════╝╚══════╝╚═╝  ╚═══╝ ╚═════╝╚═╝  ╚═╝   ╚═╝

██████╗ ██╗   ██╗    ███████╗███╗   ██╗
██╔══██╗╚██╗ ██╔╝    ██╔════╝████╗  ██║
██████╔╝ ╚████╔╝     █████╗  ██╔██╗ ██║
██╔══██╗  ╚██╔╝      ██╔══╝  ██║╚██╗██║
██████╔╝   ██║       ██║     ██║ ╚████║
╚═════╝    ╚═╝       ╚═╝     ╚═╝  ╚═══╝

 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main(void) {
char mensaje[100];
char *Pmensaje = NULL;
char key[]="key" ;
int clave =0,OP=0;
char*Pkey = NULL;

printf(" _____ _               _               _____                            ________   __ ______ _   _ \n");
printf("/  ___| |             | |             /  __ \\                           | ___ \\ \\ / / |  ___| \\ | |\n");
printf("\\ `--.| |__   __ _  __| | _____      _| /  \\/ ___  _ __ ___  _ __ ___   | |_/ /\\ V /  | |_  |  \\| |\n");
printf(" `--. \\ '_ \\ / _` |/ _` |/ _ \\ \\ /\\ / / |    / _ \\| '_ ` _ \\| '_ ` _ \\  | ___ \\ \\ /   |  _| | . ` |\n");
printf("/\\__/ / | | | (_| | (_| | (_) \\ V  V /| \\__/\\ (_) | | | | | | | | | | | | |_/ / | |   | |   | |\\  |\n");
printf("\\____/|_| |_|\\__,_|\\__,_|\\___/ \\_/\\_/  \\____/\\___/|_| |_| |_|_| |_| |_| \\____/  \\_/   \\_|   \\_| \\_/\n");
printf("\n\r");
while(1){
while(OP!=1 && OP!=2 && OP!=3){
printf("\n\r");
printf("1.ENCRIPTAR\n\r2.DESENCRIPTAR\n\r3.SALIR\n\r");
scanf("%d",&OP);
if(OP>3 || OP<1){
printf("OPCION NO VALIDA\n\r");
	}
}
if(OP==3){
	break;
}
printf("\n\r");
switch(OP){

case 1:

	printf("Introduce el dato a encriptar(SIN ESPACIOS):");
	scanf("%100s",mensaje);
	Pmensaje = mensaje;
	Pkey=RANDKEY(); //RANDOMIZA LA KEY
	printf("\n\r");
	printf("La llave para este mensaje es:%c%c%c\n\rEL DATO ES:",*Pkey,*(Pkey+1),*(Pkey+2)); //CALCULA UN VALOR EN BASE A LOS CARACTERES
	clave = *Pkey * (*(Pkey+1))*(*(Pkey+2)); //GENERA LA CLAVE EN ENTEROS

	break;
case 2:
	printf("Introduce el mensaje a desencriptar:");
	scanf("%100s",mensaje);
	printf("\n\r");
	Pmensaje = mensaje;
	printf("Introduce clave:");
	scanf("%3s",key);
	printf("\n\rEL DATO ES:");
	clave =key[0]*key[1]*key[2]; //GENERA LA CLAVE DADA EN ENTEROS
	break;
}
OP=0;


char *ENCRYPTED_DATA = Encriptador(Pmensaje,clave);

for(int i=0; *ENCRYPTED_DATA!='\0';i++ ){

	printf("%c",*ENCRYPTED_DATA);
	ENCRYPTED_DATA++;
}
printf("\n\r");

}

}
