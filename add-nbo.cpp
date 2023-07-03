#include<stdlib.h>
#include <stdio.h>

void usage() {
	printf("syntax : add-nbo <file1> <file2>\n");
	printf("sample : add-nbo a.bin c.bin\n");
}

int main(int argc, char *argv[])
{
	if (argc != 3) {
		usage();
		exit(EXIT_FAILURE);
	}
	FILE *fp = fopen(argv[1], "rb");
	if (fp == nullptr) {
		fpri
	}
}
