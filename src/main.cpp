#include "testload.h"
#include "testwork.h"

struct quest test[10];
int right_answers[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int score = 0;

int main()
{
    setlocale(LC_ALL, "Rus");
    bool pass = true;

    while (pass == true) {
        system("clear");
        cout << "\t Добро пожаловать в систему проведения тестов QuizRunner"
             << endl;
        cout << "\t       Здесь доступны тесты по 4м направлениям!" << endl;
        cout << "\t   1.Математика 2.Русский язык 3.История 4.География"
             << endl;

        int answer = 0;
        while ((answer != 1) && (answer != 2) && (answer != 3)
               && (answer != 4)) {
            cout << "\tВыберете нужное вам направление, введя соответсвующий "
                    "номер"
                 << endl;
            char buf[256];
            cin >> buf;
            if (atoi(buf) != 0) {
                answer = atoi(buf);
            }
        }
        testwork(answer);
        system("clear");
        cout << "\tПравильных ответов " << score << endl;
        cout << "\tВаши ответы:" << endl << "\t";
        for (int i = 0; i < 10; i++) {
            cout << right_answers[i] << " ";
        }
        cout << endl << " ";
        cout << "\tПравильные ответы:" << endl << "\t";
        for (int i = 0; i < 10; i++) {
            cout << test[i].right_index << " ";
        }
        cout << endl << "\t ";
        for (int i = 0; i < 10; i++) {
            cout << test[i].right_index << ") ";
            switch (test[i].right_index) {
            case 1:
                cout << test[i].first_answer << "\t ";
                break;
            case 2:
                cout << test[i].second_answer << "\t ";
                break;
            case 3:
                cout << test[i].third_answer << "\t ";
                break;
            case 4:
                cout << test[i].fourth_answer << "\t ";
                break;
            }
        }
        cout << endl;
        answer = 0;
        while ((answer != 1) && (answer != 2)) {
            cout << "Хотите пройти другой тест? (1 - да, 2 - нет) " << endl;
            char buf[256];
            cin >> buf;
            if (atoi(buf) != 0) {
                answer = atoi(buf);
            }
        }
        if (answer == 2) {
            cout << "Завершение сеанса " << endl;
            pass = false;
        }
    }
    return 0;
}
