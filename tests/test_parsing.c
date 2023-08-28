#include "gps.h"
#include <string.h>
#include "unity.h"
#include "unity_internals.h"

void test_gga_parsing_over_examples(void) {
  const char* examples[] = {
    "$GPGGA,002153.000,3342.6618,N,11751.3858,W,1,10,1.2,27.0,M,-34.2,M,,0000*5E"};
  gps_t handle = gps_init();
  TEST_ASSERT_EQUAL(GPS_NO_ERROR, gps_update(handle, examples[0], strlen(examples[0])));
  int latlon_degmins[2];
  int latlon_minfracs[2];
  gps_get_lat_lon(handle, latlon_degmins, latlon_minfracs);
  TEST_ASSERT_EQUAL(3342, latlon_degmins[0]);
  TEST_ASSERT_EQUAL(6618, latlon_minfracs[0]);
  TEST_ASSERT_EQUAL(11751, latlon_degmins[1]);
  TEST_ASSERT_EQUAL(3858, latlon_minfracs[1]);
}

void setUp() {}
void tearDown() {}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_gga_parsing_over_examples);
  return UNITY_END();
}
