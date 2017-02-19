#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char * argv[])
{
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  pid_t temp = change_pid(a,b);
  if (temp >=  0)
  {
	  printf("%d \n",temp);
	  return 0;
  }
  return -1;
}
