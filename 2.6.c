#include <stdio.h>
//
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(void){//set test.
	printf("%u", setbits((unsigned)12,3,2,(unsigned)57));
}

unsigned setbits(unsigned x, int p, int n, unsigned y){//fit criteriam. 
	return (x & ~(~(~0<<n) <<(p+1-n))) | (y & ~(~0<<n)) <<(p+1-n);
}
/*LHS*/
// (x & ~(~(~0<<n) <<(p+1-n)))
// (x & ~(~(~0000 0000 << 2)<<(3+1-2)))
// (x & ~(~(1111 1111 << 2) << (2)))
// (x & ~(0000 0000 << 2) << (2))
// (x & (1111 1111 << 2) << (2))
// (x & (1111 1100) << (2))
// (x & 1111 0000)
// (0000 1100 & 1111 0000)
// (1111 1100)
// return 252 

/*RHS*/
// | (y & ~(~0<<n)) <<(p+1-n)
// (57 & ~(1111 1111 << 2) << (3+1-2))
// (57 & (0000 1100) << (2)
// (0011 1001 & 0000 1100) << 2
// (0000 1000 << 2)
// (0010 0000)
// return 16

/*LHS | RHS*/
// (252 | 16)
// (1111 1100 | 0010 0000)
// (1111 1100)
// return 252