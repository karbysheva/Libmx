#include "libmx.h"

void mx_push_front(t_list **list, void *data) {
	t_list *list1 = mx_create_node(data);
	
	list1 -> next = *list;
	*list = list1;
}

