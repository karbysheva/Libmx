#include "libmx.h"

void mx_pop_back(t_list **head) {
	if (!head || !(*head)) 
		return;
	
	if ((*head)->next == NULL) { 
		(*head)->data = NULL;
		free(*head);
		*head = NULL;
		return;
	} else {
		t_list *node = *head; 
		while (node->next->next != NULL) 
			node = node->next;
		node->next->data = NULL;
		free(node->next);
		node->next = NULL;
	}
}

