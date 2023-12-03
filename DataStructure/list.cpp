#include "list.h"

static void CopyToNode(Item item, Node* pnode);

/* 操作： 初始化一个列表 */
/* 操作前：plist 指向一个列表 */
/* 操作后：该列表被初始化为空列表 */
void InitializeList(List* plist)
{
	*plist = NULL;
}

/* 操作： 确定列表是否为空列表 */
/* 操作前：plist 指向一个已经初始化的列表 */
/* 操作后：如果该列表为空，则返回true;否则返回false */
bool ListIsEmpty(const List* plist)
{
	if (*plist == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}

}
