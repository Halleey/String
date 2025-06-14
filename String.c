#include <stdlib.h> //malloc e afins
#include "String.h"


String createString(const char *text) {
    String str;
    str.length = my_strlen(text);
    str.data = malloc(str.length + 1);
    if (str.data != NULL) {
        my_copyString(text, str.data);
    }
    return str;
}

size_t my_strlen(const char *text) {
    size_t length = 0;
    while (text[length] != '\0') length++;
    return length;
}

size_t my_copyString(const char *origem, char *destino) {
    size_t length = 0;
    while (origem[length] != '\0') {
        destino[length] = origem[length];
        length++;
    }
    destino[length] = '\0';
    return length;
}

void freeMemory(String * str){
    free(str->data);
    str->data = NULL;    
    str->length = 0;


}