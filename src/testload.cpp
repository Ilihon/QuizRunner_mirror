#include "testload.h"

int loadfiles(char* filename)
{
    FILE* f = fopen(filename, "r");
    if (f == NULL) {
        perror("Error opening question file");
        return -1;
    }
    char* buf;
    buf = new char[4096];
    int number = -1;
    int answer_count = -1;
    int choose_rand = rand() % 2;
    int rand_count = 0;
    int rand_check = 0;
    int sec_quest_ban = 0;
    while (!feof(f)) {
        if (fgets(buf, 4096, f) > 0 && 0 != strcmp(buf, "")) {
            if (buf[0] == '#') {
                if (rand_count == choose_rand + rand_check) {
                    rand_check += 2;
                    choose_rand = rand() % 2;
                    number++;
                    test[number].question = buf;
                    test[number].question[0] = ' ';
                    answer_count = 0;
                    sec_quest_ban = 1;
                }
                rand_count++;
            }
            if (buf[0] == '@' && sec_quest_ban == 1) {
                buf[0] = ' ';
                test[number].question += buf;
            }
            if (buf[0] == '*') {
                buf[0] = ' ';
                switch (answer_count) {
                case 0:
                    test[number].first_answer = buf;
                    answer_count++;
                    sec_quest_ban = 0;
                    break;
                case 1:
                    test[number].second_answer = buf;
                    answer_count++;
                    break;
                case 2:
                    test[number].third_answer = buf;
                    answer_count++;
                    break;
                case 3:
                    test[number].fourth_answer = buf;
                    answer_count++;
                    break;
                }
            }
            if (buf[0] == '-') {
                buf[0] = ' ';
                test[number].right_index = atoi(buf);
            }
        }
    }
    return 0;
}
