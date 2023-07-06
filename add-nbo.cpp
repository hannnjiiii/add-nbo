#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	FILE *fp1 = fopen(argv[2], "r");

	uint32_t a,b;

	fread(&a,sizeof(a),1,fp);
	fread(&b,sizeof(b),1,fp1);

	fclose(fp);
	fclose(fp1);

	a = ntohl(a);
	b = ntohl(b);

	uint32_t c = a+b;
	printf("%d(%x) + %d(%x) = %d(%x)", a,a,b,b,c,c);

	

	return 0;
}

