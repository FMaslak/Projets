/*
** my_swap.c for  in /home/maslak_f/SVNJ07/maslak_f/my_swap
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Wed Mar 25 11:10:18 2015 MASLAK Franck
** Last update Mon Mar 30 19:06:56 2015 MASLAK Franck
*/

void	my_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
