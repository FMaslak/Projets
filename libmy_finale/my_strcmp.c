/*
** my_strcmp.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strcmp
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 10:37:01 2015 MASLAK Franck
** Last update Mon Mar 30 19:13:58 2015 MASLAK Franck
*/

int	my_strcmp(char *s1, char *s2)
{
  int i;
  int val;

  i = 0;
  val = 0;
  while ((*(s1 + i) != '\0') && (*(s2 + i) != '\0'))
    {
      val = *(s1 + i) - *(s2 + i);
      if (val != 0)
	{
	  if (val > 0)
	    return (1);
	  else
	    return (-1);
	}
      i ++;
    }
  val = *(s1 + i) - *(s2 + i);
  if (val != 0)
    if (val > 0)
      return (1);
    else if (val <0)
      return (-1);
    else
      return (0);
}
