/*
** my_put_nbr.c for  in /home/maslak_f/SVNJ09/maslak_f/my_put_nbr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Fri Mar 27 14:16:16 2015 MASLAK Franck
** Last update Fri Mar 27 15:21:34 2015 MASLAK Franck
*/

void	my_putchar(char c);

void	my_put_nbr(int n)
{
  if (n < 0)
    {
      my_putchar('-');
      n = n * (-1);
    }
  if (n >= 10)
    {
      my_put_nbr(n / 10);
      my_putchar((n % 10) + 48);
    }
  else 
    my_putchar(n + 48);
}
