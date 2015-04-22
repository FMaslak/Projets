/*
** my_strdup.c for  in /home/maslak_f/SVNJ10/maslak_f/my_strdup
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Mon Mar 30 12:08:47 2015 MASLAK Franck
** Last update Wed Apr  1 09:27:04 2015 MASLAK Franck
*/
#include <stdlib.h>

char	*my_strcpy(char *dest, char *src);

char	*my_strdup(char *str)
{
  char *st;
  int i;

  i = 0;
  while (*(str + i) != '\0')
    i ++;
  st = malloc((i + 1) * sizeof(char));
  st = my_strcpy(st, str);
  return (st);
}
