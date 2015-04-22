/*
** my_strlen.c for  in /home/maslak_f/SVNJ07/maslak_f/my_strlen
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Wed Mar 25 09:31:50 2015 MASLAK Franck
** Last update Wed Mar 25 16:08:07 2015 MASLAK Franck
*/

int	my_strlen(char *str)
{
  int i;

  i = 0;
  while (*(str + i) != '\0')
    {
      i ++;
    }
  return (i);
}
