#include <stdlib.h>
#include <string.h>
#include "reverse.h"
#include "fibonacci.h"

int main(int argc, char *argv[]) {
	
	int i=1;	
	#ifdef REVERSE
		
		if (i < argc) {
			reverse(argv[i], strlen(argv[i]));
			i++;
		}

	#elif FIBONACCI
		
		if (i < argc) {
			print_fib(atoi(argv[i]));
			i++;
		}

	#else

		if (i < argc) {
			print_fib(atoi(argv[i]));
			i++;
		}		
	
		if (i < argc) {
			reverse(argv[i], strlen(argv[i]));
			i++;
		}
	#endif
		

	return 0;
}