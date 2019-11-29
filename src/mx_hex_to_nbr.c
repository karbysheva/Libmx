#include "libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
	long numHex = 16;
	long result = 0;
	long lengh = 0;

    while (hex[lengh]) {
        lengh++;
    }
    long walk = lengh - 1;
    for (long i = 0; i < lengh; i++) {
    		
    	long asci = hex[i];
    	long number = 0;
    	if (asci >= 48 && asci <= 57) {
    		number = hex[i] - '0';
    	} else if (asci >= 65 && asci <= 70) {
    		number = asci - 65 + 10;
    	} else if (asci >= 97 && asci <= 102) {
    		number = asci - 97 + 10;
    	}

    	long pow = 1;
    	if (walk > 0) {
	    	for (long n = 0; n < walk; n++) {
	    		pow = pow * numHex;
	    	}
	    	walk--;
    	} else if (walk == 0) {
    		pow = 1;
    	}

    	long temp = pow * number;
    	result += temp;
    }
    return result;
}

