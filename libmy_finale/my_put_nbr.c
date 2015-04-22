/*
** my_put_nbr.c for  in /home/maslak_f/SVNJ09/maslak_f/my_put_nbr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Fri Mar 27 14:16:16 2015 MASLAK Franck
** Last update Mon Mar 30 19:12:16 2015 MASLAK Franck
*/

void	my_putchar(char c);
void    putneg()
{
	char *strneg;
	int i;
	
	strneg = "2147483648";
	i = 0;
	while (*(strneg + i) != '\0')
	{
		my_putchar(*(strneg + i));
		i ++;
	}
}

void	my_put_nbr(int n)
{
  int neg;
  int neglast;

  neglast = 0;
  if (n < 0)
    {
      my_putchar('-');
      if (n == -2147483648)
	{
	  putneg();
	  neglast = 1;
	}
      n = n * (-1);
    }
  if ((n >= 10) && (neglast == 0))
    {
      my_put_nbr(n / 10);
      my_putchar((n % 10) + 48);
    }
  else
    {
      if (neglast == 0)
	my_putchar(n + 48);
    }
}
