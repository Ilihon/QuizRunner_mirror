#ifndef TESTWORK_H
#define TESTWORK_H

#include "testload.h"

extern struct quest test[10];
extern int score;
extern int right_answers[10];

void testwork(int answer);
int rightcheck(int answer);

#endif
