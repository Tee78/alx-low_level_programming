#include <stdio.h>
#include 'lists.h'

/**
 *print_list - prints all the elements in the list linked
 *@h: pointer to the list_t list to print
 *
 *Return: the number of nodes that have been printed based on what was said above
 */
size_t print_list(const list_t*h)
{
size_t s= 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else 
h = h->next;
s++
}

return (s)
}
