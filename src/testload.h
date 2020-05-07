#ifndef TESTLOAD_H
#define TESTLOAD_H

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string.h>
using namespace std;

struct quest{
  string question;
  string first_answer;
  string second_answer;
  string third_answer;
  string fourth_answer;
  int right_index = 0;
};

extern struct quest test[10];

int loadfiles(char *filename);


#endif
