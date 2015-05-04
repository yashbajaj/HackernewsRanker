#include <cstring>
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	FILE* fp = fopen("test_dataset.txt","r");
	FILE* op = fopen("weka_train_dataset.txt","w");
	int a,b,c,d,e,f;
	int cnt=0;
	a=1;c=1;e=1;f=1;
	while(!feof(fp))
	{
		cnt++;
		printf("%d\n",cnt);
		fscanf(fp,"%d %d",&b,&d);
		fprintf(op,"%d,%d,%d,%d,%d,%d\n",a,b,c,d,e,cnt);
	}

	fclose(fp);
	fclose(op);
	return 0;
}
