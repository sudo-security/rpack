#include <stdio.h>
union s{
	int n;
	char b;
}x;
void main(){
	x.n = 0x4142;
	if(x.b == 0x42){
		printf("Your Sysetem : Little Endian\n");
	}
	else{
		printf("Your Sysetem : Big Endian\n");
	}
}
