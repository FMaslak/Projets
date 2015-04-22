/*
** my_putstr.c for  in /home/maslak_f/SVNJ07/maslak_f/my_putstr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Wed Mar 25 09:08:12 2015 MASLAK Franck
** Last update Wed Mar 25 09:18:18 2015 MASLAK Franck
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  int i;

  i = 0;
  while (*(str + i) != '\0')
    {
      my_putchar(*(str + i));
      i ++;
    }
}
