#include "isogram.h"

bool is_isogram(const char phrase[]){

  int counts[255] = {0};
  int len = strlen(phrase);
  for (int i = 0; i < len; i++) {
    char letter = phrase[i];
    //dont care about chars below 64
    if(letter<64){
      continue;
    }
    //shift for case
    if((letter>96) && (letter<123)){
      letter ^=0x20;
    }
    int code = letter;

    if(counts[code] > 0){
      return false;
    }
    else{
      counts[code]++;
    }
  }
  return true;
}
