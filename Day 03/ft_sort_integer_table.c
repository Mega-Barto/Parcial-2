#include <stdio.h>

void ft_sort_integer_table(int *, int);
void ft_sort_integer_table(int *tab, int size){
    int tem;
    for (int x = 0; x < size; x++) {
        for (int i = 0; i < size-x-1; i++){
            if(tab[i] > tab[i+1]){
                int temp = tab[i+1];
                tab[i+1] = tab[i];
                tab[i] = temp;
            }
        }
    }
    for(int i = 0; i < size; i++) printf("%i ", tab[i]);
}


int main(){
    int tabla[6] = {1,3,4,30,2,5};
    ft_sort_integer_table(tabla, 6);
    return 0;
}