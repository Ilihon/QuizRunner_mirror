#include "testwork.h"

int testwork(int answer)
{
    system("clear");
    srand(time(NULL));
    int score = 0;
    if (answer == 1) {
        loadfiles("files/math.txt");
        cout << "Вы выбрали тест по маьематике! Вот ваши вопросы:" << endl;
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << test[i].right_index
                 << endl;
            score = rightcheck(i);
            if (score == 10) {
                return score;
            }
        }
    } else if (answer == 2) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/russian.txt");
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << test[i].right_index
                 << endl;
            score = rightcheck(i);
            if (score == 10) {
                return score;
            }
        }
    } else if (answer == 3) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/history.txt");
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << test[i].right_index
                 << endl;
            score = rightcheck(i);
            if (score == 10) {
                return score;
            }
        }
    } else if (answer == 4) {
        system("clear");
        srand(time(NULL));
        loadfiles("files/geography.txt");
        for (int i = 0; i < 10; i++) {
            cout << endl
                 << i + 1 << " вопрос:" << endl
                 << test[i].question << "1)" << test[i].first_answer << "2)"
                 << test[i].second_answer << "3)" << test[i].third_answer
                 << "4)" << test[i].fourth_answer << test[i].right_index
                 << endl;
            score = rightcheck(i);
            if (score == 10) {
                return score;
            }
        }
    }
    return score;
}

int rightcheck(int i)
{
    cout << "\nВведите ваш ответ:" << endl;
    int answer;
    cin >> answer;
    if (answer == test[i].right_index) {
        right_answers[score] = test[i].right_index;
        score += 1;
    }
    cout << score << endl;
    return score;
}
