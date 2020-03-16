#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
char *armut[70];

if(strcmp(argv[1], "kapat")==0) {

strcpy( armut, "echo set disassembly-flavor intel > ~/.gdbinit" );
printf("Peda Eklentisi Devre Disi! \n");
}else if (strcmp(argv[1], "ac")==0)
{
strcpy(armut, "echo source ~/peda/peda.py > ~/.gdbinit");
printf("Peda Eklentisi Aktif ! \n");
}

system(armut);
	return 0;
}
