#ifndef __YOTTA_BUILD_INFO_H__
#define __YOTTA_BUILD_INFO_H__
// yotta build info, #include YOTTA_BUILD_INFO_HEADER to access
#define YOTTA_BUILD_YEAR 2019 // UTC year
#define YOTTA_BUILD_MONTH 12 // UTC month 1-12
#define YOTTA_BUILD_DAY 23 // UTC day 1-31
#define YOTTA_BUILD_HOUR 15 // UTC hour 0-24
#define YOTTA_BUILD_MINUTE 45 // UTC minute 0-59
#define YOTTA_BUILD_SECOND 6 // UTC second 0-61
#define YOTTA_BUILD_UUID 13ee0a55-6561-42ea-9fef-7ed3738b35ad // unique random UUID for each build
#define YOTTA_BUILD_VCS_ID c3b02564fd8082f3bf80472e679aa2f9b707c7c2 // git or mercurial hash
#define YOTTA_BUILD_VCS_CLEAN 0 // evaluates true if the version control system was clean, otherwise false
#define YOTTA_BUILD_VCS_DESCRIPTION v2.1.1 // git describe or mercurial equivalent
#endif // ndef __YOTTA_BUILD_INFO_H__