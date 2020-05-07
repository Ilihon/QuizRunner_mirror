#include "testwork.h"

void testwork(int answer)
{
    system("clear");
    srand(time(NULL));
    int score = 0;
    if (answer == 1) {
        loadfiles("files/math.txt");
        cout << "Вы выбрали тест по математике! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << endl;
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
    } else if (answer == 2) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/russian.txt");
        cout << "Вы выбрали тест по русскому языку! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << endl;
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
    } else if (answer == 3) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/history.txt");
        cout << "Вы выбрали тест по истории! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << endl;
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
    } else if (answer == 4) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/geography.txt");
        cout << "Вы выбрали тест по географии! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << endl;
            score = rightcheck(i, answer);
            if (score == 10) {
                break;
            }
            system("clear");
        }
    }
}

int rightcheck(int i, int lesson)
{
    int answer = 0;
    if (lesson == 3) {
        while ((answer != 1) && (answer != 2) && (answer != 3)) {
            cout << "\nВведите ваш ответ:" << endl;
            char buf[256];
            cin >> buf;
            if (atoi(buf) != 0) {
                answer = atoi(buf);
            }
            // cout << answer;
        }
    } else {
        while ((answer != 1) && (answer != 2) && (answer != 3)
               && (answer != 4)) {
            cout << "\nВведите ваш ответ:" << endl;
            char buf[256];
            cin >> buf;
            if (atoi(buf) != 0) {
                answer = atoi(buf);
            }
            // cout << answer;
        }
    }
    right_answers[i] = answer;
    if (answer == test[i].right_index) {
        score += 1;
    }
    return score;
}
