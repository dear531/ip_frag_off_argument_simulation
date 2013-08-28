#include <stdio.h>
/* /usr/src/linux-source-3.5.0/linux-source-3.5.0/include/net/ip.h */
/* IP flags. */
#define IP_CE		0x8000		/* Flag: "Congestion"		*/
#define IP_DF		0x4000		/* Flag: "Don't Fragment"	*/
#define IP_MF		0x2000		/* Flag: "More Fragments"	*/
#define IP_OFFSET	0x1FFF		/* "Fragment Offset" part	*/

int main(int argc, char *argv[])
{
	short frag_off	= 0xffff;
	short tmp	= 0;
	tmp = frag_off;
	printf("old tmp:%04x\n", (unsigned short)tmp);
	tmp = frag_off & ~(0x7 << 13);
	printf("0x7 << 13 tmp:%0x\n", tmp);
	tmp = frag_off & ~(0x3 << 14);
	printf("0x3 << 14 tmp:%0x\n", tmp);
	tmp = frag_off & ~(0x1 << 15);
	printf("0x1 << 15 tmp:%0x\n", tmp);
	printf("IP_OFFSET:%04x\n", IP_OFFSET);
	printf("~(0x7 << 13):%04x\n", (unsigned short)~(0x7 << 13));

	return 0;
}
