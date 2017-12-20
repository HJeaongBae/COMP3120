#include <stdio.h>
int main()
{
	FILE *fp;
	int i;
	int d;

	fp = fopen("commit.txt", "w");

	for(i=0;i<10;i++);{
	fprintf(fp, "%d", i);
	}

	fclose(fp);
	
	fp = fopen("commit.txt","r");
	while(fscanf(fp,"%d",&d) != EOF) {
		printf("%d\n", d);
	}
	fclose(fp);
	return 0;
}
