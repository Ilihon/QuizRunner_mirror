#include "testload.h"

struct quest test[10];

int main()
{
    system("clear");
    srand(time(NULL));
    loadfiles("files/russian.txt");
    for (int i = 0; i < 10; i++) {
        cout << endl
             << i << endl
             << test[i].question << test[i].first_answer
             << test[i].second_answer << test[i].third_answer
             << test[i].fourth_answer << test[i].right_index << endl;
    }

    setlocale(LC_ALL, "Rus");
    bool test = true;
    int score = 0;
    while (test == true) {
        system("clear");
        cout << "\t Добро пожаловать в систему проведения тестов QuizRunner"
             << endl;
        cout << "\t       Здесь доступны тесты по 4м направлениям!" << endl;
        cout << "\t   1.Математика 2.Русский язык 3.История 4.География"
             << endl;
        cout << "\tВыберете нужное вам направление, введя соответсвующий номер"
             << endl;
        char answer;
    }
    return 0;
}
