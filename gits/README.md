
# Biblioteca String em C

Este projeto implementa uma estrutura `String` personalizada em C, com funcionalidades básicas para manipulação de strings, incluindo criação, concatenação, comparação, conversão de case, e reversão.

---

## Estrutura String

```c
typedef struct {
    char *data;
    size_t length;
} String;
```

---

## Funções Disponíveis

- `String createString(const char *data);`  
  Cria uma nova `String` a partir de uma C-string.

- `void setString(String *str, const char *data);`  
  Altera o valor da `String`, liberando a memória anterior.

- `void concatString(String *str, const char *data);`  
  Concatena uma C-string ao final da `String`.

- `void toUpperCase(String *str);`  
  Converte todos os caracteres da `String` para maiúsculo.

- `void toLowerCase(String *str);`  
  Converte todos os caracteres da `String` para minúsculo.

- `int compareString(String *strOne, String *strTwo);`  
  Compara duas `String`s. Retorna 1 se iguais, 0 caso contrário.

- `int startWith(String *str, const char *prefix);`  
  Verifica se a `String` começa com o prefixo dado.

- `void reverseString(String *str);`  
  Reverte o conteúdo da `String`.

- `void print(String *str);`  
  Imprime o conteúdo da `String`.

- `void freeMemory(String *str);`  
  Libera a memória usada pela `String`.

---

## Exemplo de Uso

```c
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

```

---

## Como compilar

```bash
cl /Fe:programa.exe main.c string.c
```
*vai gerar um programa executavel com o nome 'programa'*
---

## Nota

Este código é uma implementação simples para fins didáticos e pode ser aprimorada para produção.

---

