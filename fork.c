#include <stdio.h>
int main(void)
{
  int x = fork();

  if (x == 0) {
		
		printf("This is being printed from the child process\n");
  } else {
		x=100;
		printf("This is being printed in the parent process:\n"
		       " - the process identifier (pid) of the child is %d\n", x);
  }

  return 0;
}

                        

