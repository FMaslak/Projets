/*
** main.c for  in /home/maslak_f/sujet_colle
** 
** Made by MASLAK Franck
** Login   <maslak_f@etna-alternance.net>
** 
** Started on  Sat Mar 28 09:32:48 2015 MASLAK Franck
** Last update Sat Mar 28 11:56:47 2015 MASLAK Franck
*/
#include <stdlib.h>
#include <time.h>

char	*readLine();
int	my_getnbr(char *str);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_nbr(int n);
char	my_select_tab(char *str, int i);

int	main()
{
  char *cont;
  char continu;
  int wallet;
  char *bet;
  int betn;
  char *nbrbet;
  int nbrbetn;
  int res;
  int gain;

  system( "clear" );
  srand (time (NULL));
  wallet = 200;
  my_putstr("Bienvenue à la Roulette ETNA");
  my_putchar('\n');
  my_putstr("Votre gain actuel est de :");
  my_put_nbr(wallet);
  my_putchar('\n');
  continu = 'y';
  while (continu == 'y')
    {
      my_putstr("--> Quel est le montant de votre mise?");
      my_putchar('\n');
      bet = readLine();
      betn = my_getnbr(bet);
      while ((betn > wallet) || (betn < 0))
	{
	  my_putstr("Vous devez saisir une valeur entre 0 et votre gain actuel!");
	  my_putchar('\n');
	  bet = readLine();
	  betn = my_getnbr(bet);
	}
      my_putstr("--> Sur quel chiffre misez vous? (1 a 36)");
      my_putchar('\n');
      nbrbet = readLine();
      nbrbetn = my_getnbr(nbrbet);
      while ((nbrbetn > 36) || (nbrbetn < 1))
	{
	  my_putstr("Vous devez saisir un chiffre entre 1 et 36");
	  my_putchar('\n');
	  nbrbet = readLine();
	  nbrbetn = my_getnbr(nbrbet);
	}
      my_putstr("Les jeux sont fait ...\n");
      res = (rand() % 36) + 1;
      my_putstr("Le resultat est :");
      my_put_nbr(res);
      my_putchar('\n');
      if (res == nbrbetn)
	{
	  my_putstr("Vous avez gagne. Vos gains augmentent de ");
	  gain = 3 * betn;
	  my_put_nbr(gain);
	}
      else if ((res % 2 == 0) && (nbrbetn % 2 == 0))
	{
	  my_putstr("Votre mise est de la meme couleur. Vos gains augmentent de ");
	  gain =  betn / 2;
	  my_put_nbr(gain);
	}
      else if ((res % 2 ==1) && (nbrbetn % 2 == 1))
	{
	  my_putstr("Votre mise est de la meme couleur. Vos gains augmentent de ");
	  gain = betn / 2;
	  my_put_nbr(gain);
	}
      else
	{
	  my_putstr("Vous n'avez rien gagne. Vous perdez donc votre mise.");
	  wallet = wallet - betn;
	  my_putchar('\n');
	  if (wallet == 0)
	    {
	      my_putstr("Vous n'avez plus d'argent vous avez perdu");
	      my_putstr("Merci de votre participation a la roulette ETNA");
	      my_putchar('\n');
	      return (0);
	    }
	}
      my_putchar('\n');
      wallet = wallet + gain;
      my_putstr("Votre gain actuel est de :");
      my_put_nbr(wallet);
      my_putchar('\n');
      my_putstr("Voulez vous continuer? (y,n)");
      my_putchar('\n'); 
      cont = readLine();
      continu = my_select_tab(cont,0);
      if (continu == 'n')
	{
	  my_putstr("Merci de votre participation a la roulette ETNA");
	  return (1);
	}
      while ((continu != 'y') && (continu !='n'))
	{
	  my_putstr("Vous devez taper uniquement y ou n");
	  my_putchar('\n');
	  cont = readLine();
	  continu = my_select_tab(cont,0);
	  if (continu == 'n')
	    {
	      my_putstr("Merci de votre participation a la roulette ETNA");
	      my_putchar('\n');
	      return (2);
	    }
	}
      my_putchar('\n');
    }
}
