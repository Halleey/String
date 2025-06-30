#include <stdio.h>
#include "String.h"

int main(int argc, char const *argv[])
{
    
    String nome = createString("zard vancete");
    String teste = createString("halley");

    printf("A string \"%s\" comeca com \"za\"? %s\n", nome.data, startWith(&nome, "za") ? "Sim" : "Nao");
    printf("A string \"%s\" comeca com \"zan\"? %s\n", nome.data, startWith(&nome, "zan") ? "Sim" : "Nao");

    printf("String original: %s\n", nome.data);

    setString(&nome, "zard");
    printf("Novo valor da string: %s\n", nome.data);

    concatString(&nome, " vancete");
    printf("Apos concatenacao: %s\n", nome.data);

    toUpperCase(&nome);
    printf("Apos toUpperCase: %s\n", nome.data);

    toLowerCase(&nome);
    printf("Apos toLowerCase: %s\n", nome.data);

    int resultado = compareString(&teste, &nome);
    printf("As strings \"%s\" e \"%s\" sao iguais? %s\n", teste.data, nome.data, resultado ? "Sim" : "Nao");

    printf("Conteudo da string 'teste': ");
    print(&teste);

    reverseString(&nome);
    printf("Apos reverter 'nome': %s\n", nome.data);

    freeMemory(&nome);
    freeMemory(&teste);

    return 0;
}
