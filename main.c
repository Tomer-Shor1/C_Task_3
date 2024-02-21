#include "StrList.h"
#include <stdio.h>
#include <string.h>



int main(){


printf("how many words\n");
StrList * list = StrList_alloc();
int number_of_words = scanf("%d", &number_of_words);  
char story[1000];
printf("enter a string\n");
scanf("%s", story);
tokenize_and_add(list, story);
StrList_print(list);




}