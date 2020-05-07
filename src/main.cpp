#include "testload.h"
#include "testwork.h"

struct quest test[10];
int score = 0;

int main()
{
    setlocale(LC_ALL, "Rus");
    bool test = true;

    while (test == true) {
        system("clear");
        cout << "\t Добро пожаловать в систему проведения тестов QuizRunner"
             << endl;
        cout << "\t       Здесь доступны тесты по 4м направлениям!" << endl;
        cout << "\t   1.Математика 2.Русский язык 3.История 4.География"
             << endl;
        cout << "\tВыберете нужное вам направление, введя соответсвующий номер"
             << endl;
        int answer = 0;
        // cin >> answer;
        // answer = 0;
        // cout << answer;
        while ((answer != 1) && (answer != 2) && (answer != 3)
               && (answer != 4)) {
            cin >> answer;
            // cout << answer;
        }
        testwork(answer);
        test = false;
    }
    return 0;
}
