#ifndef _TIME_H_
#define _TIME_H_

#include "types.h"
struct timeval {
	time_t tv_sec;
	suseconds_t tv_usec;
};

struct timespec {
	time_t	tv_sec;		/* seconds */
	long	tv_nsec;	/* and nanoseconds */
};

#endif