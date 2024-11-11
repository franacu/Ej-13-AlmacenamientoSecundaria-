#include <stdio.h>
#include "helper.h"
#define MAX_LONG 256
int main()
{
    char *archivo1="ejercicio13.txt";
    char *archivo2="ejercicio13copia.txt";
    char linea[MAX_LONG];
    FILE *fp1;
    FILE *fp2;
    int valor=3;
    fp1=fopen(archivo1,"a");
    fp2=fopen(archivo2,"a");

    fprintf(fp1,"cesar");
    fclose(fp1);
    fclose(fp2);
    fp1=fopen(archivo1,"r");
    fp2=fopen(archivo2,"w");

    while (fgets(linea,MAX_LONG,fp1)!=NULL)
    {
        for(int i =0; linea[i] != '\0';i++)
        {
            linea[i]=decifrado(linea[i],valor);
        }
        fprintf(fp2,"%s",linea);
    }

    fclose(fp1);
    fclose(fp2);
    printf("Termino con exito\n");

    return 0;
}
