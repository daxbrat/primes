#include "std_lib_facilities.h"

int main()
{
	
	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= i; j++) {
			if (i == 1) {
				continue;
			}
			if (j % i == 0) {
				break;
			}
			
			}
		}

	}
}
