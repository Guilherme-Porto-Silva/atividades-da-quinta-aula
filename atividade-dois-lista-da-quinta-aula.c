/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main (void)
{
  char string1, string2;
  printf ("Forneca duas strings");
  gets (string1);
  gets (string2);
  int resultado = strcmp (string1, string2);

  if (resultado > 0)
	{
	  printf ("%s eh maior que %s\n", string1, string2);
	  strcat (string1, string2);
	  fputs (string1, stdout);
	}
  else if (resultado < 0)
	{
	  printf ("%s eh maior que %s\n", string2, string1);
	  strcat (string2, string1);
	  fputs (string2, stdout);
	}
  else
	{
	  printf ("strings iguais");
	}
  return 0;
}
