/*
** my_strncat.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strncat
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 13:46:56 2015 MASLAK Franck
** Last update Thu Mar 26 15:41:09 2015 MASLAK Franck
*/

char	*my_strncat(char *str1, char *str2, int n)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (*(str1 + i) != '\0')
    i ++;
  while (j < n)
    {
      *(str1 + i) = *(str2 + j);
      i ++;
      j ++;
    }
  return (str1);
}
