#ifndef RECODE_H
#define RECODE_H

#include <fcommon.h>

VOID recodeToInternalCharset( CHAR *string);
VOID recodeToTransportCharset( CHAR *string);
INT getctab(CHAR **dest,  CHAR *charMapFileName);

extern CHAR intab[], outtab[];

#endif
