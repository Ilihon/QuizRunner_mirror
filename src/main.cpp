#include "testload.h"

struct quest test[10];


int main()
{
  system("clear");
  srand(time(NULL));
  loadfiles("files/russian.txt");
  for(int i = 0; i <10;i++){
    cout << endl << i << endl << test[i].question << test[i].first_answer<< test[i].second_answer << test[i].third_answer << test[i].fourth_answer << test[i].right_index <<endl;
  }
  return 0;
}
