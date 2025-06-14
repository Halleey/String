#ifndef STRING_H
#define STRING_H
#include <stddef.h>

typedef struct 
{
    char * data;
    size_t length;
}String;

String createString(const char * data);
void freeMemory(String * str);
#endif