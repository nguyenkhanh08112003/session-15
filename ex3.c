#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(int argc, char *argv[]) {
	incre();
	incre();
	incre();
}
incre()
{
	static char var = 75;
	printf("\nGia tri luu tru trong var la : %c", var++);
}
