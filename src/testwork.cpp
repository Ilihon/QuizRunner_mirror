#include "testwork.h"

int answer_convert(){
  char buf[256];
  cin >> buf;
  int answer =0;
  if (atoi(buf) != 0) {
      answer = atoi(buf);
  }
  return answer;
}
void testwork(int answer)
{
    system("clear");
    srand(time(NULL));
    int score = 0;
    switch(answer){
      case 1:
        loadfiles("files/math.txt");
        cout << "Вы выбрали тест по математике! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            write_answers(1,i);
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
        return;
      case 2:
        loadfiles("files/russian.txt");
        cout << "Вы выбрали тест по русскому языку! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            write_answers(2,i);
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
        return;
      case 3:
        loadfiles("files/history.txt");
        cout << "Вы выбрали тест по истории! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            write_answers(3,i);
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
        return;
      case 4:
        system("clear");
        srand(time(NULL));
        loadfiles("files/geography.txt");
        cout << "Вы выбрали тест по географии! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            write_answers(4,i);
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
        return;
    }
    return;
}

void write_answers(int subject,int index)
{
  switch(subject){
    case 1:
    case 2:
    case 4:
      cout << endl << index + 1 << " вопрос:" << endl << test[index].question << "1)" << test[index].first_answer << "2)"
      << test[index].second_answer << "3)" << test[index].third_answer << "4)" << test[index].fourth_answer << endl;
      return;
    case 3:
      cout << endl << index + 1 << " вопрос:" << endl << test[index].question << "1)" << test[index].first_answer << "2)"
      << test[index].second_answer << "3)" << test[index].third_answer << endl;
      return;
  }
  return;
}

int rightcheck(int i, int lesson)
{
    int answer = 0;
    if (lesson == 3) {
        while ((answer != 1) && (answer != 2) && (answer != 3)) {
            cout << "\nВведите ваш ответ:" << endl;
            answer = answer_convert();
        }
    } else {
        while ((answer != 1) && (answer != 2) && (answer != 3)
               && (answer != 4)) {
            cout << "\nВведите ваш ответ:" << endl;
            answer = answer_convert();
        }
    }
    right_answers[i] = answer;
    if (answer == test[i].right_index) {
        score += 1;
    }
    return score;
}
