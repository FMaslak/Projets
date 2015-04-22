/*
** my_putchar.c for  in /home/maslak_f/SVNJ05/maslak_f/my_putchar
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Mon Mar 23 09:49:28 2015 MASLAK Franck
** Last update Mon Mar 23 11:07:52 2015 MASLAK Franck
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
