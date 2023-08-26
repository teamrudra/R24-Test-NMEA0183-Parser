#ifndef GPS_H
#define GPS_H
struct gps_instance_t;
typedef struct gps_instance_t* gps_t;
void gps_update(gps_t gps_instance, const char* sentence, int len);
#endif
