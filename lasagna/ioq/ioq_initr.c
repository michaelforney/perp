/* ioq_initr.c
** wcm, 2004.04.21 - 2009.08.02
** ===
*/
#include "uchar.h"
#include "ioq.h"

void ioq_initr(ioq_t *ioq, int fd, uchar_t *buf, size_t len, ssize_t (*op)(int, void *, size_t))
{
  ioq->fd   = fd;   /* file descriptor */
  ioq->buf  = buf;  /* internal buffer */
  ioq->n    = len;  /* length of buffer */
  ioq->p    = 0;    /* position */
  ioq->op.r = op;   /* io operation */
}

/* eof: ioq_initr.c */
