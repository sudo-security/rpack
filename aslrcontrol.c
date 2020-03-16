#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
char *armut[70];

if(strcmp(argv[1], "kapat")==0) {

strcpy( armut, "echo 0 > /proc/sys/kernel/randomize_va_space" );
printf("ASLR Devre Disi! \n");
}else if (strcmp(argv[1], "ac")==0)
{
strcpy(armut, "echo 2 > /proc/sys/kernel/randomize_va_space");
printf("ASLR Aktif ! \n");
}

system(armut);
	return 0;
}
