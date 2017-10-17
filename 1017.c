#include <stdio.h>
int main(){
	char ch;
	int i=0;

	while((ch=getchar())!=EOF){
		puts("");		
		i=0;
		while(i++<ch-48)
			printf("%2d",ch-48);
	}
	
	return 0;
}

