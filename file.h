#ifndef FILE_H
# define FILE_h

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                t_list;

#endif