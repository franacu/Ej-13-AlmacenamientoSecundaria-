//
// Created by Fran on 11/11/2024.
//

#include "helper.h"
char decifrado(char letra,int valor)
{
    if(letra>='a' && letra<='z')
    {
        return (char)((letra-'a'-valor+26)%26+'a');
    }else
        {
            if(letra>='A' && letra<='Z')
            {
                return (char)((letra-'a'-valor+26)%26+'a');
            }
        }
    return letra;
}