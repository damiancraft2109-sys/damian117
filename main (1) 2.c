#include <stdio.h>

#ifndef OPERACIONES_H
#define OPERACIONES_H

#include operaciones.h


#define PI 3.1416

int sumar (int a, int b){
    return a + b;
calcularAreaCuadrado(int lado);
    return lado * lado;
}
void mostrarVector(int v [], int tam){
    printf("I");
    for(int i = 0; i < tam; i ++){
        printf("%d", v[i]);
    }
    printf("]\n");
}
void mostrarPantalla(const char * )

#endif
int main(){
    
    int resultadoSuma = sumar(10, 5);
    int area = calcularAreaCuadrado (4);
    
    int misDatos[3] = {10, 20, 30};
    
    printf("La suma es: %d\n", resultadoSuma);
    printf("El area del cuadrado e: %d\n", area);
    
    printf("Mostrar vector usando la libreria:\n");
    mostrarVector(misDatos, 3);
    
    
    
#!/bin/bash

gcc main.c operaciones.c -o programa

if [ $? -eq 0 ]; then
    echo "Compilación exitosa"
    ./programa
else
    echo "Error al compilar el programa"
fi

    
    return 0;
}

#endif

