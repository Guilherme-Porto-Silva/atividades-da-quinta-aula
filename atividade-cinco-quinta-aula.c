/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main (void)
{
  char nome[], sobrenome[], uniao[], inicial[1];
  printf ("Qual eh o primeiro nome dessa pessoa?\n");
  gets (nome);
  printf ("Qual eh o sobrenome dessa pessoa?\n");
  gets (sobrenome);
  uniao = strcat (sobrenome, nome);
  int qtdchar = strlen (uniao);
  fgets (inicial, sizeof (1), stdin) = uniao;
  printf
	("O nome completo dessa pessoa eh %s, que tem %d caracteres e comeca com %s.",
	 uniao, qtdchar, inicial);

  return 0;
}
