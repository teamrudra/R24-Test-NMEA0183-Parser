#include "crc.h"
#include <string.h>
#include "unity.h"

void test_checksum_over_examples(void) {
  const char* examples[] = {
    "$GPGSV,2,1,08,02,74,042,45,04,18,190,36,07,67,279,42,12,29,323,36*77",
    "$GPGSV,2,2,08,15,30,050,47,19,09,158,,26,12,281,40,27,38,173,41*7B"
  };
  TEST_ASSERT_EQUAL(1, verify_checksum(examples[0], strlen(examples[0])));
  TEST_ASSERT_EQUAL(1, verify_checksum(examples[1], strlen(examples[1])));
}

void setUp() {}
void tearDown() {}

int main(void)
{
UNITY_BEGIN();
RUN_TEST(test_checksum_over_examples);
return UNITY_END();
}
