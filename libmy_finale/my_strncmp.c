/*
** my_strncmp.c for  in /home/maslak_f/SVNJ08/maslak_f/my_strncmp
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Thu Mar 26 11:07:31 2015 MASLAK Franck
** Last update Mon Mar 30 19:13:31 2015 MASLAK Franck
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int i;
  int val;

  i = 0;
  val = 0;
  while (((*(s1 + i) != '\0') && (*(s2 + i) != '\0')) || (i < n))
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
  return (0);
}
