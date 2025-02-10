#include "ft_list.h"
void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		f(begin_list->data);/* 应用函数 f 处理当前节点的数据 */
		begin_list = begin_list->next;/* 移动到下一个节点 */
	}
}
