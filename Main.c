#include <stdio.h>
#include "String.h"

int main(int argc, char const *argv[])
{
     String nome = createString("zard vancete");
    printf("e real ? \n%i\n", starstWith(&nome, "za"));   // Vai imprimir 1 (true)
    printf("e real ? \n%i\n", starstWith(&nome, "zan"));    // Vai imprimir 0 (false)

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
    reverseString(&nome);
    printf("\n apos reverter %s\n", nome.data);
    freeMemory(&nome);
    return 0;
}
