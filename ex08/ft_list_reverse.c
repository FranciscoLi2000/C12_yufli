#include "ft_list.h"
void	ft_list_reverse(t_list **begin_list)
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	previous = NULL;
	current = *begin_list;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;/* 保存下一个节点 */
		current->next = previous;/* 反转指针方向 */
		previous = current;/* 移动 previous 指针 */
		current = next;/* 移动 current 指针 */
	}
	*begin_list = prev;/* 更新头指针*/
}
