/*
** my_getnbr.c for  in /home/maslak_f/SVNJ09/maslak_f/my_getnbr
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Fri Mar 27 15:35:48 2015 MASLAK Franck
** Last update Mon Mar 30 19:07:56 2015 MASLAK Franck
*/

int negat (int neg)
{
  if (neg == 0)
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int bol;
  int i;
  int res;
  int neg;
  int chif;

  i = 0;
  res = 0;
  bol = 1;
  neg = 0;
  chif = 0;
  while ((*(str + i) != '\0') && (bol == 1))
    {
      if ((*(str + i) >= 48) && (*(str + i) <= 57))
	{
	  chif = 1;
	  res = (res * 10) + (*(str + i) - 48);
	}
      else if (((*str + i) < '0') || (*(str + i) > '9'))
	if ((chif == 0) && ((*(str + i) == '+') || (*(str + i) == '-')))
	  i = i;
	else
	  bol = 0;
      if (((*(str + i) == 45) && (res == 0)) && (chif == 0))
	neg = negat(neg);
      i ++;
    }
  if (neg == 1)
    return (-res);
  return (res);
}
