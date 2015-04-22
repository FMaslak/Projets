/*
** my_strcpy.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strcpy
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 09:36:23 2015 MASLAK Franck
** Last update Thu Mar 26 18:13:11 2015 MASLAK Franck
*/

char	*my_strcpy(char *dest, char *src)
{
  int i;

  i = 0;
  while (*(src + i) != '\0')
    {
      *(dest + i) = *(src + i);
      i ++;
    }
  *(dest + i) = '\0';
  return (dest);
}
