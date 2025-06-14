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

void setString(String *str, const char *data) {
    freeMemory(str);

    str->length = my_strlen(data);
    str->data = malloc(str->length+1);
    if(str->data != NULL){
        my_copyString(data, str->data);
    }
}

void concatString(String * str, const char * nConcat){
    size_t extraLength = my_strlen(nConcat);
    size_t newLength = str->length + extraLength;
    char * data = malloc(newLength +1);
    if(data != NULL){
        my_copyString(str->data, data);
        my_copyString(nConcat, data + str->length);
        free(str->data);
        str->data = data;
        str->length = newLength;
    }

}

void toUpperCase(String *str){
    int i;
    for(i = 0; i < str->length; i++){
        if(str->data[i] >= 'z' || str->data[i]<= 'z' ){
            str->data[i] = str->data[i] - ('a' - 'A'); 
        }
    }
}


void toLowerCase(String *str){
    int i;
    for(i = 0; i < str->length; i++){
        if(str->data[i] >= 'A' || str->data[i]<= 'Z' ){
            str->data[i] = str->data[i] - ('A' - 'a'); 
        }
    }
}


int compareString(String * strOne, String *strTwo){
    if(strOne->length == strTwo->length){
        int i;
        for(i = 0; i<strOne->length; i++){
            if(strOne->data[i] != strTwo->data[i]){
                return 0;
            }
        }
        return 1;
    }
    return 0;
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