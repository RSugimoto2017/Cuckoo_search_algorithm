#include "Dataset.h"
class Nest;

class NestSet
{

public:
  NestSet(char *fileName);
  ~NestSet();
  void alternate();   //世代交代する
  void printResult(); //結果を表示

  Dataset *dataset; //データセット
  Nest **nest;      //巣の集合のメンバ

private:
  void sort(int lb, int ub); //巣を良い順にソート
};