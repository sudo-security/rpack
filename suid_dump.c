#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
char *armut[70];

if(strcmp(argv[1], "kapat")==0) {

strcpy( armut, "echo 1 > /proc/sys/fs/suid_dumpable" );
printf("Suid_Dumpable Devre Disi! \n");
}else if (strcmp(argv[1], "ac")==0)
{
strcpy(armut, "echo 0 > /proc/sys/fs/suid_dumpable");
printf("Suid_Dumpable Aktif ! \n");
}

system(armut);
	return 0;
}
