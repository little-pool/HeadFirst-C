#include<stdio.h>
#include<unistd.h>
int main(int argc,char* argv[]){
	int a,b,c;
	puts("output:");
	FILE *middle = fopen("middleDATA","w");
	while(scanf("%d,%d,%d",&a,&b,&c)==3){
		if(a > 3){
			fprintf(middle,"a=%d,b=%d,c=%d\n",a,b,c);
		}
		else
			fprintf(stdout,"a=%d,b=%d,c=%d\n",a,b,c);
	}
	fclose(middle);
	return 0;
}
