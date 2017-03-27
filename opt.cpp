#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(int argc, char* argv[]){
	int x,y;
	char *z = NULL;
	char ch;
	while((ch = getopt(argc,argv,"a:b:c:")) != EOF){
		switch(ch){
			case 'a':
				x = atoi(optarg);
				break;
			case 'b':
				y = atoi(optarg);
				break;
			case 'c':
				z = optarg;
				break;
			default:
				fprintf(stderr,"unknow option %s\n",optarg);
				return 1;
		}
	}
	fprintf(stdout,"a=%d\nb=%d\nc=%s\n",x,y,z);
	if(!strcmp(z,"add")){
		fprintf(stdout,"%d + %d = %d\n",x,y,x+y);
		return x+y;
	}
	if(!strcmp(z,"sub")){	
		fprintf(stdout,"%d - %d = %d\n",x,y,x-y);
		return x-y;
	}
	if(!strcmp(z,"mul")){	
		fprintf(stdout,"%d * %d = %d\n",x,y,x*y);
		return x*y;
	}
	if(!strcmp(z,"div")){	
		fprintf(stdout,"%d / %d = %d\n",x,y,x/y);
		return x/y;
	}
	
	return 0;
}

