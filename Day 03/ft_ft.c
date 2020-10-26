/*
    Jhoan Esteban Raigoza Agudelo
    Codigo: 1007753137                Universidad Tecnologica de pereira.
    Profesor: PhD Ricardo Moreno Laverde

*/

#include <stdio.h>
void ft_ft (int *); //Prototipo de la función

void ft_ft (int *nbr){
    *nbr=42; //A la direccion de memoria donde apunta nbr,
    // que es la misma a donde apunta la variable a en la función main
}
int main()
{
    int a=0;
    ft_ft (&a); // &a = Dirección de memoria a donde apunta la variable a
    printf("%i",a); //al ejecutarse esta linea de codigo, deberia imprimirse en pantalla el número 42
    return 0;
}