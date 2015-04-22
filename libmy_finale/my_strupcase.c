/*
** my_strupcase.c for  in /home/maslak_f/SVNJ06/maslak_f/my_strupcase
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Tue Mar 24 12:10:16 2015 MASLAK Franck
** Last update Tue Mar 24 15:40:43 2015 MASLAK Franck
*/

void	my_putchar(char c);

char	*my_strupcase(char str[])
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 97) && (str[i] <= 122))
	{
	  str[i] = str[i] - 32;
	}
      i ++;
    }
  return (str);
}
