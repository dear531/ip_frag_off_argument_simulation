#include <stdio.h>

int main(int argc, char *argv[])
{
	short tot_len	= 0xffff;
	short tmp	= 0;
	tmp = tot_len;
	printf("old tmp:%04x\n", (unsigned short)tmp);
	tmp = tot_len & ~(0x7 << 13);
	printf("0x7 << 13 tmp:%0x\n", tmp);
	tmp = tot_len & ~(0x3 << 14);
	printf("0x3 << 14 tmp:%0x\n", tmp);
	tmp = tot_len & ~(0x1 << 15);
	printf("0x1 << 15 tmp:%0x\n", tmp);
	return 0;
}
