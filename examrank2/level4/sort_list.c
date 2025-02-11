
typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;


t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    tmp = lst;
    int a;

    while(lst->next)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            a = lst->data;
            lst->data = lst->next->data;
            lst->next->data = a;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return(lst);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *tmp;
    tmp = lst;
    int a;
    while (lst->next)
    {
        if((*cmp)(lst->data, lst->next->data) == 0)
        {
            a = lst->data;
            lst->data = lst->next->data;
            lst->next->data = a;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return (lst);
}