/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main (void)
{
  printf
	("A funcao gets() eh utilizada para ler uma string da entrada padrao e armazena-la numa variavel especifica. A funcao le caracteres da entrada padrao ateh encontrar\n um caractere de nova linha (/n) ou ateh que o vetor esteja cheio. O caractere de nova linha eh automaticamente adicionado, no final da string, ao vetor.\n");
  char demonstragets[10];
  gets (demonstragets);

  printf ("\n%s\n", demonstragets);
  printf
	("fputs() eh utilizada para escrever uma string para um fluxo de saida especificado. A funcao escreve os caracteres da string no fluxo de saida e, em seguida,\n adiciona um caractere de nova linha.\n");
  char demonstrafputs[14] = "Hello, world!\n";

  fputs (demonstrafputs, stdout);
  printf
	("\nA funcao strlen() eh utilizada para calcular o comprimento de uma string, nao sendo atoa que len eh, literalmente, comprimento em ingles. A funcao retorna o numero\n de caracteres na string, excluindo o caractere nulo (\0) no final da string.\n");
  char demonstrastrlen[] = "Hello, world!";

  int comprimento = strlen (demonstrastrlen);

  printf ("O comprimento da string eh %d\n", comprimento);
  printf
	("\nstrcpy(), pela vez dela, parece um copo sendo virado sobre outro copo: usamos para copiar uma string para outra string.\n");
  char copocheio[14] = "Hello, world!";
  char copovazio[14];

  strcpy (copovazio, copocheio);

  printf ("%s\n", copovazio);
  printf
	("\nstrcmp() compara duas strings e retorna 1 ou 0, depende se a primeira string eh maior que a segunda ou nao.\n");
  char string1[7] = "Hello";
  char string2[7] = "World";

  int resultado = strcmp (string1, string2);

  if (resultado > 0)
	{
	  printf ("%s eh maior que %s\n", string1, string2);
	}
  else if (result < 0)
	{
	  printf ("%s eh menor que %s\n", string1, string2);
	}
  else
	{
	  printf ("%s eh igual a %s\n", string1, string2);
	}
  printf
	("Por ultimo, mas, nao menos importante, strcat() prega duas strings, passa cola na bunda de uma e mete na cara da outra. De forma mais expecifica, ela copia os\n caracteres da segunda string para o final da primeira string, e o caractere nulo (\0) da segunda string nao eh copiado.\n");
  char cara[7] = "Hello";
  char bunda[7] = ", world!";

  strcat (cara, bunda);

  printf ("%s\n", cara);
  return 0;
}
