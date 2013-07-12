test.exe: test.obj \
          fltdump.lib \
          test.def \
          test.mak
  icc @<<
  /B"/NOD /NOE /M /L"
  test.obj
  fltdump.lib
  ..\runtime\fltrun.lib
  os2386.lib
  test.def
<<

test.obj: test.c \
          expt.h \
          test.mak
  icc /Ti /Q /C /Gn /Gm test.c
