#include "testload.h"

struct quest test[10];


int main(){
  loadfiles("files/russian.txt");
  cout << test[0].question;
  return 0;
}
