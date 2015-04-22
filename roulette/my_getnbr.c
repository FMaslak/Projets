/*
** my_getnbr.c for  in /home/maslak_f/SVNJ09/maslak_f/my_getnbr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Fri Mar 27 15:35:48 2015 MASLAK Franck
** Last update Fri Mar 27 17:49:14 2015 MASLAK Franck
*/

int	my_getnbr(char *str)
{
  int bol;
  int i;
  int res;
  int neg;

  i = 0;
  res = 0;
  bol = 1;
  neg = 0;
  while (*(str + i) && (bol == 1))
    {
      if ((*(str + i) >= 48) && (*(str + i) <= 57))
	res = (res * 10) + (*(str + i) - 48);
      if (*(str + i) == 45)
	  if (neg == 0)
	    neg = 1;
	  else
	    neg = 0;
      if (((*(str + i) < 48) || (*(str + i) > 57)))
	if ((*(str + i) != '+') && (*(str + i) != '-'))
	  bol = 0;
      i ++;
    }
  if (neg == 1)
    return (-res);
  return (res);
}
