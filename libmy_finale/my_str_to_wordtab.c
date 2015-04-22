/*
** my_str_to_wordtab.c for  in /home/maslak_f/SVNJ10/maslak_f/my_str_to_wordtab
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Mon Mar 30 13:38:24 2015 MASLAK Franck
** Last update Wed Apr  1 10:14:51 2015 MASLAK Franck
*/
#include <stdlib.h>

char	*my_strncpy(char *dest, char *src, int n);

char	**my_str_to_wordtab(char *str)
{
  char **tab;
  int i;
  int sizword;
  int nword;
  int pos;

  i = 0;
  nword= 0; 
  tab = malloc(sizeof(*tab) * 100);
  while (*(str + i) != '\0')
    {
      while (((*(str + i) < 'a') || (*(str + i) > 'z')) && ((*(str + i) < 'A') || (*(str + i) > 'Z')))
	i ++;
      pos = i;
      while (((*(str + (i - 1)) >= 'a') && (*(str + (i - 1)) <= 'z')) || ((*(str + (i - 1)) >= 'A') && (*(str + (i - 1)) <= 'Z')))
	i ++;
      sizword = i - pos;
      nword ++;
      tab[nword] = malloc(sizword * sizeof(char*));
      my_strncpy(tab[nword], str + pos, sizword);
    }
  tab[nword + 1] = NULL;
  return (tab);
}
