#include "testload.h"


int loadfiles(char *filename)
{
      FILE* f = fopen(filename, "r");
      if (f == NULL) {
          perror("Error opening question file");
          return -1;
          char* buf;
          int number = 0;
          while (!feof(f)) {
              if (fgets(buf, 4096, f) > 0 && 0 != strcmp(buf, "")) {
                if(buf[0]=='#'){
                  strcpy(test[number].question,buf);
                }
              }
          }
      }

}
