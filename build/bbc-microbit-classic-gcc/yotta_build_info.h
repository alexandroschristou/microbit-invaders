#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 12 // UTC month 1-12
#define YOTTA_BUILD_DAY 30 // UTC day 1-31
#define YOTTA_BUILD_HOUR 19 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 48 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 30 // UTC second 0-61
#define YOTTA_BUILD_UUID 2baa1403-60f4-483b-9b3c-4b47bffaccfb // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID c3b02564fd8082f3bf80472e679aa2f9b707c7c2 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION v2.1.1 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__
