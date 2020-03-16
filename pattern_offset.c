#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
char *armut[300];
snprintf(armut, 300, "`locate pattern_offset` -q %s" , argv[1]);
system(armut);

}
