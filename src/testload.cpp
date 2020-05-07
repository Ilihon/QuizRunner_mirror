#include "testload.h"


int loadfiles(char *filename)
{
      FILE* f = fopen(filename, "r");
      if (f == NULL) {
          perror("Error opening question file");
          return -1;
      }
      char* buf;
      buf  = new char[4096];
      int number = 0;
      while (!feof(f)) {
          if (fgets(buf, 4096, f) > 0 && 0 != strcmp(buf, "")) {
            cout << buf <<endl;
            if(buf[0]=='#'){
              test[number].question = buf;
              test[number].question[0] = ' ';
              number++;
            }
          }
      }
      return 0;

}
