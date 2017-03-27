/* tain_now.c
** tain: TAI timestamp with nanosecond precision
** wcm, 2008.01.08 - 2009.07.27
** ===
*/

#include <stdlib.h>
#include <time.h>

#include "tain.h"

struct tain *
tain_now(struct tain *t)
{
  struct timespec now;

  clock_gettime(CLOCK_REALTIME, &now);
  tain_load_utc(t, now.tv_sec);
  t->nsec = now.tv_nsec;

  return t;
}


/* EOF (tain_now.c) */
