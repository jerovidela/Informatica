#include <stdio.h>
#include <ctype.h>
#include <math.h>

//Punto 1

// int main() {
//     int contador;

//     printf("Bucle for:\n");
//     for (contador = 1; contador <= 10; contador++) {
//         printf("%d ", contador);
//     }
//     printf("\n");

//     printf("Bucle while:\n");
//     contador = 1;
//     while (contador <= 10) {
//         printf("%d ", contador);
//         contador++;
//     }
//     printf("\n");

//     printf("Bucle do while:\n");
//     contador = 1;
//     do {
//         printf("%d ", contador);
//         contador++;
//     } while (contador <= 10);
//     printf("\n");

//     return 0;
// }

//Punto 2

// int main() {
//     char letra;
//     int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0, consonantes = 0;

//     printf("Ingrese 10 letras (separadas por enter):\n");
    
//     for (int i = 0; i < 10; i++) {
//         scanf(" %c", &letra);
//         letra = tolower(letra); 

//         switch (letra) {
//             case 'a': vocalA++; break;
//             case 'e': vocalE++; break;
//             case 'i': vocalI++; break;
//             case 'o': vocalO++; break;
//             case 'u': vocalU++; break;
//             default: 
//                 if (isalpha(letra)) 
//                     consonantes++;
//                 break;
//         }
//     }

//     printf("Cantidad de vocales:\n");
//     printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", vocalA, vocalE, vocalI, vocalO, vocalU);
//     printf("Cantidad de consonantes: %d\n", consonantes);

//     return 0;
// }

//Punto 3

// int main() {
//     char letra;
//     int vocalA = 0, vocalE = 0, vocalI = 0, vocalO = 0, vocalU = 0, consonantes = 0;

//     printf("Ingrese 10 letras (separadas por enter):\n");

//     for (int i = 0; i < 10; i++) {
//         scanf(" %c", &letra);
//         letra = tolower(letra); 

//         if (letra == 'a') {
//             vocalA++;
//         } else if (letra == 'e') {
//             vocalE++;
//         } else if (letra == 'i') {
//             vocalI++;
//         } else if (letra == 'o') {
//             vocalO++;
//         } else if (letra == 'u') {
//             vocalU++;
//         } else if (isalpha(letra)) { 
//             consonantes++;
//         }
//     }

//     printf("Cantidad de vocales:\n");
//     printf("A: %d\nE: %d\nI: %d\nO: %d\nU: %d\n", vocalA, vocalE, vocalI, vocalO, vocalU);
//     printf("Cantidad de consonantes: %d\n", consonantes);

//     return 0;
// }

//Punto 4

// int esPrimo(int numero) {
//     if (numero <= 1) {
//         return 0;
//     }
    
//     for (int i = 2; i * i <= numero; i++) {
//         if (numero % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     int limite;

//     printf("Ingrese un número: ");
//     scanf("%d", &limite);

//     printf("Números primos desde 1 hasta %d:\n", limite);
//     for (int i = 2; i <= limite; i++) {
//         if (esPrimo(i)) {
//             printf("%d ", i);
//         }
//     }
//     printf("\n");

//     return 0;
// }

//Punto 5

// int main() {
//     int num, mayor, menor;

//     printf("Ingrese 5 números:\n");
//     for (int i = 0; i < 5; i++) {
//         scanf("%d", &num);

//         if (i == 0) {  
//             mayor = menor = num;
//         } else {
//             if (num > mayor) {
//                 mayor = num;
//             }
//             if (num < menor) {
//                 menor = num;
//             }
//         }
//     }

//     printf("Mayor: %d\n", mayor);
//     printf("Menor: %d\n", menor);

//     return 0;
// }


// int main() {
//     int num1, num2, andBits, orBits;

//     printf("Ingrese el primer número: ");
//     scanf("%d", &num1);
//     printf("Ingrese el segundo número: ");
//     scanf("%d", &num2);

//     andBits = num1 & num2;
//     printf("Número con bits en 1 en ambos números: %d\n", andBits);

//     orBits = num1 | num2;
//     printf("Número con bits en 1 en alguno de los números: %d\n", orBits);

//     return 0;
// }

//Punto 6

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double areaTriangulo(double a, double b, double c) {
    double s = (a + b + c) / 2; 
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double calcularAngulo(double a, double b, double c) {
    return acos((b*b + c*c - a*a) / (2*b*c)) * (180.0 / M_PI);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double ladoA, ladoB, ladoC;
    double anguloA, anguloB, anguloC, area;
    
    printf("Ingrese las coordenadas del primer punto (X1 Y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Ingrese las coordenadas del segundo punto (X2 Y2): ");
    scanf("%lf %lf", &x2, &y2);
    printf("Ingrese las coordenadas del tercer punto (X3 Y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    ladoA = distancia(x2, y2, x3, y3); 
    ladoB = distancia(x1, y1, x3, y3); 
    ladoC = distancia(x1, y1, x2, y2); 
    
    area = areaTriangulo(ladoA, ladoB, ladoC);
    
    anguloA = calcularAngulo(ladoA, ladoB, ladoC);
    anguloB = calcularAngulo(ladoB, ladoA, ladoC);
    anguloC = calcularAngulo(ladoC, ladoA, ladoB);
    
    printf("Área del triángulo: %.2lf\n", area);
    printf("Ángulo en el vértice A (X1 Y1): %.2lf grados\n", anguloA);
    printf("Ángulo en el vértice B (X2 Y2): %.2lf grados\n", anguloB);
    printf("Ángulo en el vértice C (X3 Y3): %.2lf grados\n", anguloC);

    return 0;
}
