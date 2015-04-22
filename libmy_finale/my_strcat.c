/*
** my_strcat.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strcat
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 13:35:53 2015 MASLAK Franck
** Last update Thu Mar 26 13:46:20 2015 MASLAK Franck
*/

char	*my_strcat(char *str1, char *str2)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (*(str1 + i) != '\0')
    i ++;
  while (*(str2 + j) != '\0')
    {
      *(str1 + i) = *(str2 + j);
      i ++;
      j ++;
    }
  *(str1 + i) = '\0';
  return (str1);
}
