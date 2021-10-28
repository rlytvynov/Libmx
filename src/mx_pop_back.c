#include "../inc/libmx.h"

void mx_pop_back(t_list**list)
{
	if (*list == NULL || list == NULL) return;

	t_list *temp = *list;
	t_list *prev = NULL; 
    while (temp -> next){
    	prev = temp;
    	temp = temp -> next;
    }
    free(prev->next);
    prev->next = NULL;
    temp = NULL;
}

