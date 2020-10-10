/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: esauzavaleta
 *
 * Created on 20 de septiembre de 2020, 08:10 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
 * adivina el numero con 10 intentos
 */
int main(int argc, char** argv) {

 int hora=time(NULL);
    int x,num,intentos,intentos2=10,jugar;
    srand(hora);
    
    printf("Juguemos un momento.\n");
    printf("Adivina el numero que estoy pensando entre 1 y 1000 \n");
    printf("Tienes 10 intentos\n");
    do{
        x = rand() % 1000;
        intentos = intentos2;
    do{
        if(jugar == 1){
            printf("\nTienes %d intentos\n", intentos);
        }
        jugar -=1;
        scanf("%d", &num);
        if(num > x)
            printf("\nMás abajo\n");
        if(num < x)
            printf("\nMás arriba\n");
        intentos -=1;
    }while((num != x) && (intentos != 0));
    
    if(num != x){
        printf("\nSe te acabaron los intentos :(\n");
        printf("El número que estaba pensando era: %d\n", x);
        intentos2 +=1;
    }else{
        printf("\nMuy bien!!. Encontraste el numero\n");
        intentos2 -=1;
    }
    
    printf("\n¿Quieres volver a juga?\n");
    printf("1. Si\n\n");
    printf("2. No\n\n");
    scanf("%d", &jugar);
    }while(jugar==1);
    
    return (EXIT_SUCCESS);
}

