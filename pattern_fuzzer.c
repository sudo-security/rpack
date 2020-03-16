#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
char *armut[200];


strcpy(armut, "`locate pattern_create` -l 1000 > fuzzer.in");
system(armut);

}
