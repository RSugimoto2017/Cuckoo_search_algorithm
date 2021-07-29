#include "NestSet.h"
#include "Nest.h"

int main()
{
  int i;
  NestSet *ns;

  srand((unsigned int)time(NULL));

  char fname[] = "sampledata.csv";
  ns = new NestSet(fname);
  for (i = 1; i <= GEN_MAX; i++)
  {
    ns->alternate();
    printf("%d回目：最良評価値%f\n", i, ns->nest[0]->value);
  }
  ns->printResult();
  delete ns;

  return 0;
}