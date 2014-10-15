// Joseph Goldstein
// October 15, 2014
// Prime Numbers

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prime(int x, int y);

int main(int argc, char * argv[]) {
	if (argc != 3) {
		printf("Usage is ./prime x y\n");
		exit(1);
	}

	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	prime(x, y);

	return 1;
}

void prime(int x, int y) {
	for (int n = x; n < y; n++) {
		int isPrime = 1; //prime until deemed otherwise 
		if (n <= 0) {
			printf("Use positive numbers only, not including 0\n");
			exit(1);
		}
		else if (n == 1) {
			//one is not prime so ignore it
		}
		else if (n > 1) {
			// not prime if even except for 2
			if (n % 2 == 0 && n != 2) {
				isPrime = 0;
			}
			// not even
			else {
				for (int i = 3; i < n; i++) {
					if (n % i == 0) {
						isPrime = 0; //not prime
					}
				}
			}
			if (isPrime == 1) {
				printf("Prime: %i\n", n);
			}
		}
	}
}
