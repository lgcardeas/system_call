#include <lib.h>
#include <unistd.h>
PUBLIC pid_t change_pid(pid_t pid_act, pid_t pid_chang)
{
  message m;
  m.m1_i1 = pid_act;
  m.m1_i2 = pid_chang;
  return(_syscall(MM,CHANGE_PID,&m));
}
