#include "testload.h"

struct quest test[10];


int main(){
  loadfiles("files/geography.txt");
  cout << test[0].question;
  return 0;
}
