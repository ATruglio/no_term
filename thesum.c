#include <stdio.h>

int main()
{
  int sum = 0;
  int valore = 0;

 FILE *f = fopen("sum.dat", "r");
  if (!f) {
    fprintf(stderr, "Impossibile aprire il file sum.dat\n");
    fprintf(stdout, "Il file sum.dat non esiste,\n"
                "verra' creato in fase di salvataggio dei dati.\n");
    sum = 0;
  } else {
    printf("Lettura del file sum.dat in corso ...\n");
    fscanf(f, "%d", &sum);
    fclose(f);
  }
  printf("Valore corrente: %d\n\n", sum);

  printf("Inserisci il valore da sommare: ");
  scanf("%d", &valore);

  sum += valore;

  printf("\nNuovo valore: %d\n", sum);

  printf("Salvataggio nel file sum.dat in corso ...\n");
  f = fopen("sum.dat", "w");
  fprintf(f, "%d\n", sum);
  fclose(f);

  return 0;
}