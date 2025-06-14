#include <stdio.h>
#include "String.h"

int main(int argc, char const *argv[])
{
    String nome = createString("halley");
    printf("%s", nome.data);
    freeMemory(&nome);
    return 0;
}
