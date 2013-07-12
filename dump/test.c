#define INCL_BASE
#define INCL_DOSEXCEPTIONS
#include <os2.h>
#include "expt.h"

int foo(void);

int main(void)
{
   INSTALLEXPT("Main");

   LOGFUNCNAME;

   LOG_Write("Assigning NULL now");

   foo();

   DEINSTALLEXPT;
   return 0;
}

int foo(void)
{
   int *p=0;
   *p = 1;
}
