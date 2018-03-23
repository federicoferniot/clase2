#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define CANTIDAD_NUMEROS 3


int main()
{

    //Comentario
    int i;
    int numeroUsuario;
    int acumulador = 0;
    float resultado;
    int maximo = INT_MIN;
    int minimo = INT_MAX;

    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        printf("Dame el Numero %d\n",i+1);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;
        if(numeroUsuario>maximo)
        {
            maximo = numeroUsuario;
        }
        if(numeroUsuario<minimo)
        {
            minimo = numeroUsuario;
        }
    }
    resultado = (float)acumulador / CANTIDAD_NUMEROS;
    printf("Resultado %.2f\n",resultado);
    printf("El maximo fue %d y el minimo %d\n", maximo, minimo);
    return 0;
}
