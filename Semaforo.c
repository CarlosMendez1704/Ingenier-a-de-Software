#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void cambiarColorFondo(int codigoColor) {
	char comando[20];
	sprintf(comando, "color %02X", codigoColor);
	system(comando);
}

int main() {
	int tiempoVerde = 20;
	int tiempoAmarillo = 5;
	int tiempoRojo = 15;
	
	while (1) {
		// Luz Verde
		cambiarColorFondo(0x20); 
		printf("Luz Verde encendida\n");
		sleep(tiempoVerde);
		
		// Luz Amarilla
		cambiarColorFondo(0xE0); 
		printf("Luz Amarilla encendida\n");
		sleep(tiempoAmarillo);
		
		// Luz Roja
		cambiarColorFondo(0xC0); 
		printf("Luz Roja encendida\n");
		sleep(tiempoRojo);
		
		cambiarColorFondo(0);
	}
	
	return 0;
}
