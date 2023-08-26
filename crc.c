#include "crc.h"
#include <stdint.h>
#include <stdlib.h>
int verify_checksum(const char* sentence, int len) {
  uint8_t val = 0;
  for (int i = 0; i < len-2; i++) {
    if (sentence[i] == '$' || sentence[i] == 'I' || sentence[i] == '*') continue;
    val = val ^ sentence[i];
  }
  int expected = strtol(sentence+len-2, NULL, 16);
  if (expected == 0) return 0;
  return val == (uint8_t) expected;
}