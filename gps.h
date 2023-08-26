#ifndef GPS_H
#define GPS_H
struct gps_instance_t;
typedef struct gps_instance_t* gps_t;
typedef enum {
  GPS_NO_ERROR = 0,
  GPS_INVALID_CHECKSUM,
  GPS_UNKNOWN_PREFIX,
  GPS_UNIMPLEMENTED,
  GPS_PARSE_ERROR,
} gps_error_code_t;
gps_error_code_t gps_update(gps_t gps_instance, const char* sentence, int len);
#endif
