#include <stdio.h>
#include <stdlib.h>
int main() {
	int N;
	int i;	
do{
	printf("Insertar un valor entre 5 y 10 \n");
	scanf("%d", &N);
	if (N<5 || N>10) {
	printf("El numero ingresado es menor a 5 \n");
	printf("Ingrese un numero mayor a 5 \n");
	}
}while(N<5 || N>10);
int* A= (int*) malloc(N*sizeof(int));
if (A == NULL){
	printf("Error al asignar memoria\n");
	return 1;
}
printf("El valor de N es %d \n",N);
for(i=0;i<N;i++){
	printf("ingrese el valor numero %d \n", i+1);
	scanf("%i", &A[i]);
}
printf("El valor de A es %i \n",A[1]);
int* R=(int*) malloc(N*sizeof(char));
if (R==NULL){
	printf("Error en la asignacion de memoria\n");
	return 1;
}
for(i=0;i<N;i++){
	R[i] = A[i]%N;
	printf("El resto de la division numero %d es %d \n", i, R[i]);
}
int max, min;
max = min = R[0];
for(i=0;i<N;i++){
	if (R[i]>max){
		max = R[i];
	}
	if (R[i]<min){
		min = R[i];
	}
}
printf("El resto maximo es: %d\n", max);
printf("El resto minimo es: %d\n", min);

}