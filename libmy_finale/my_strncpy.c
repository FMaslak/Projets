/*
** my_strncpy.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strncpy
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 10:15:18 2015 MASLAK Franck
** Last update Thu Mar 26 18:04:28 2015 MASLAK Franck
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int i;

  i = 0;
  while ((*(src + i) != '\0') && (i < n))
    {
      *(dest + i) = *(src + i);
      i ++;
    }
  while (i < n)
    {
      *(dest + i) = '\0';
      i ++;
    }
  return (dest);
}
