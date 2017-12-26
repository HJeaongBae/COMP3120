#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv)
{
  int x = fork();
  FILE* fp;
  fp = fopen("fork2.txt", "w");

  if (x == 0) {
		
		char child[] = "Hello World!\n";
		fwrite(child, 1, sizeof(child), fp);
  } else {
		char parent[] = "Hello KNU!\n";
		fwrite(parent, 1, sizeof(parent), fp);
  }
  fclose(fp);
  return 0;
}
