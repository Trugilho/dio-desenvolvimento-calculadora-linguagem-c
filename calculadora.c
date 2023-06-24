#include <stdio.h>
main()
{
  float var1, var2, result;
  int opc;
  printf("\nCalculadora Simples\n  ");

  printf("\n 1 - Soma\n  ");

  printf("\n 2 - Subtracao\n  ");

  printf("\n 3 -  Multiplicacao\n  ");

  printf("\n 4 - Divisao\n ");

  printf("\nEscolha uma opcao de calculo\n");
  scanf("%d", &opc);

  printf("Digite o primeiro valor");
  scanf("%f", &var1);

  printf("Digite o segundo valor");
  scanf("%f", &var2);

  if (opc == 1)
    result = var1 + var2;
  if (opc == 2)
    result = var1 - var2;
  if (opc == 3)
    result = var1 * var2;
  if (opc == 4)
    result = var1 / var2;

  if (opc == 4)
  {
    printf("O resultado e: %0.1f", result);
  }
  else
  {
    printf("O resultado e: %0.0f", result);
  }
}