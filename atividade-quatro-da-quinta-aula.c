/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main (void)
{
  char palavra[20];
  int letra, ampulheta, aparicoes;
  printf ("Digite uma palavra.\n");
  gets (palavra);
  printf ("\nAgora, digite uma letra.\n");
  scanf ("%c", &letra);
  for (ampulheta = 0, aparicoes = 0; ampulheta < strlen (palavra);
	   ampulheta++)
	{
	  if (palavra[ampulheta] == letra)
		aparicoes++;
	}
  printf ("\nA letra %c aparece %d vezes na palavra digitada.", letra,
		  aparicoes);
  return 0;
}
