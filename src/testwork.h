#ifndef TESTWORK_H
#define TESTWORK_H

#include "testload.h"

extern struct quest test[10];
extern int score;
extern int right_answers[10];

int answer_convert(char* buf);
void testwork(int answer);
void write_answers(int subject, int index);
int rightcheck(int i, int lesson);

#endif
