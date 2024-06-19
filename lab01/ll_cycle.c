#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    node* tortoise = head;
    node* hare = head;
    while(hare!=NULL){
    	hare = hare->next;
    	tortoise = tortoise->next;
    	if(hare == NULL)break;
    	hare = hare->next;
    	if(hare == NULL)break;
    	if(hare == tortoise)break;	
    }
    if(hare == NULL)return 0;
    return 1;
}


