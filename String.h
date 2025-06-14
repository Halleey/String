#ifndef STRING_H
#define STRING_H
#include <stddef.h>

typedef struct 
{
    char * data;
    size_t length;
}String;

String createString(const char * data);
void setString(String * str, const char * data);
void concatString(String * str, const char * data);
void toUpperCase(String *str);
void toLowerCase(String *str);
void freeMemory(String * str);
size_t my_copyString(const char *origem, char *destino);
size_t my_strlen(const char *text);
#endif