#include <stdio.h>
#define TAM 12

int main(){

    double m[TAM] [TAM], soma = 0;
    int i, j, aux = 0;
    char op;

    scanf("%c", &op);

    for( i = 0; i < TAM; i++){

        for( j = 0; j < TAM; j++){

            scanf("%lf", &m[i][j]);


        }

    }

     for( i = 1; i < TAM-1; i++){

        if( i == 6 ){
            aux+=1;
        }
        if( i > 6){
            aux+=2;
        }

        for( j = 0; j < i-aux; j++){

            soma += m[i][j];

        }


    }




    if( op == 'S'){
        printf("%.1lf\n",soma);
    }
    else{
        printf("%.1lf\n",soma/30);
    }

    return 0;
}








