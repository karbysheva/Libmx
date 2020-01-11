#include "libmx.h"

t_list *mx_sort_list(t_list *lst, bool (*cmp)(void *, void *)) {
    void *wrap;

    if (!lst && !cmp)
        return NULL;
    
    for (t_list *i = lst; i->next; i = i->next)
        for (t_list *j = i->next; j; j = j->next)
            if (cmp(i->data, j->data)) {
                wrap = i->data;
                i->data = j->data;
                j->data = wrap;
            }
    return lst;
}

