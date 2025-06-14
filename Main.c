#include <stdio.h>
#include "String.h"

int main(int argc, char const *argv[])
{
    String nome = createString("halley");
    String teste= createString("halley");
  
    printf("%s \n", nome.data);
    setString(&nome, "zard");
    printf("new name is: \n%s\n", nome.data);
    concatString(&nome, " vancete");
    toUpperCase(&nome);
    printf("apos concat: \n%s", nome.data);
    toLowerCase(&nome);
    printf("apos lower: \n%s", nome.data);
    int resultado = compareString(&teste, &nome);
    printf("sao iguais? \n %i \n", resultado);
    print(&teste);
    freeMemory(&nome);
    return 0;
}
