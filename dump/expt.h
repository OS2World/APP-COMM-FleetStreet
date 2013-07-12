/* EXPT.H */

typedef struct
{
   EXCEPTIONREGISTRATIONRECORD Reg;
   int tid;
   char pchThreadName[50];
} EXPTBLOCK, *PEXPTBLOCK;

void RegisterExptHandler(PEXPTBLOCK pExptBlock, PCHAR pchThreadName);
void DeregisterExptHandler(PEXPTBLOCK pExptBlock);

/* Macros */

#define INSTALLEXPT(x)  EXPTBLOCK EBlock; RegisterExptHandler(&EBlock, (x))
#define DEINSTALLEXPT  DeregisterExptHandler(&EBlock)

void LOG_Write(char *pchMessage, ...);

#define LOGFUNCNAME LOG_Write("F: %s", __FUNCTION__)

/* Ende EXPT.H */
