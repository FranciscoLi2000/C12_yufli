#include "ft_list.h"
t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*head;
	t_list	*new_node;
	int	i;

	str_list = NULL;
	i = 0;
	while (i < size)
	{
		/* 创建新节点并插入链表头部 */
		new_node = ft_create_elem(strs[i]);
		if (!new_node)
			return (NULL);
		new_node->next = head;/* 新节点指向当前头节点 */
		head = new_node;/* 更新头节点为新节点 */
		i++;
	}
	return (head);
}
