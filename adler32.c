#include <zlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 1024

int main(){
	char buf[MAX];

	uLong result = 0;
	uLong adler = adler32(0L, Z_NULL, 0);

	// set the buffer
	sprintf(buf, "foobarbaz", 9);

	result = adler32(adler, buf, strlen(buf));

	printf("Result: %x and %x\n", result, adler);

	return 0;
}

