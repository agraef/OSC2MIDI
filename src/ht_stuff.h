//Spencer Jackson
//ht_stuff.h

//everything implementation specific dealing with the hash table
//see ht_stuff.c for much more info

#ifndef HT_STUFF_H
#define HT_STUFF_H

#include"hashtable.h"

int strkey(table tab, char* path, char* argtypes, int* nkeys);
table init_table();
void free_table(table tab);

#endif
