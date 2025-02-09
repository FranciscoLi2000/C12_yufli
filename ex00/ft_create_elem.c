#include "ft_list.h"
#include <stdlib.h>
/* 创建一个新节点 */
t_list	*ft_create_elem(void *data)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return (node);
}
