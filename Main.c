#include <stdio.h>
#include "String.h"

int main(int argc, char const *argv[])
{
    String nome = createString("halley");
    printf("%s \n", nome.data);
    setString(&nome, "zard");
    printf("new name is: \n%s\n", nome.data);
    concatString(&nome, " vancete");
    printf("apos concat: \n%s", nome.data);
    freeMemory(&nome);
    return 0;
}
