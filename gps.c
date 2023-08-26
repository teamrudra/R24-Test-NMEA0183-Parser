#include "gps.h"
#include <string.h>

enum {
  SENTENCE_GGA = 0,
  SENTENCE_GLL = 1,
  SENTENCE_GSA = 2,
  SENTENCE_GSV = 3,
  SENTENCE_MSS = 4,
  SENTENCE_RMC = 5,
  SENTENCE_VTG = 6,
  SENTENCE_UNKNOWN,
};
const char* sentence_prefix[] = { "GGA", "GLL", "GSA", "GSV",
                                    "MSS", "RMC", "VTG" };
struct gps_instance_t
{};

void gps_update(gps_t gps_instance, const char* sentence, int len) {
gps_error_code_t gps_update(gps_t gps_instance, const char* sentence, int len) {
  if (verify_checksum(sentence, len) == 0) return GPS_INVALID_CHECKSUM;
  int current_sentence = SENTENCE_UNKNOWN;
  for (int i = 0; i < SENTENCE_UNKNOWN; i++) {
    if (strncmp(sentence+2, sentence_prefix[i], 3) == 0) {
      current_sentence = i;
      break;
    }
  }
  if (current_sentence == SENTENCE_UNKNOWN) {
    // return error code
  }
}
