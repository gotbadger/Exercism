#include "gigasecond.h"

time_t gigasecond_after(time_t dt){
  return dt + pow(10,9);
}
