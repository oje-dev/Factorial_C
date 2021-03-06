/*
 * factorial.c - the implementation of factorial functions.
 *
 * This is the file you edit.
 *
 * Note: all of the factorial functions will cause int overflow for large
 * enough n.
 */
#include <errno.h>
#include "factorial.h"

/*
 * See factorial.h for the specification of this iterative factorial
 * function.
 *
 * You have to implement this function.
 */
int factorial(int n) {
    if (n < 0) {
        errno = EINVAL;
        return -1;

    }else if (n == 0) {
        return 1;

    }else{
        unsigned long fact = 1;
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        return fact;
    }
}

/*
 * See factorial.h for the specification of this recursive factorial
 * function.
 *
 * THIS FUNCTION IS IMPLEMENTED FOR YOU.
 */
int rfactorial(int n) {
    if (n < 0) {
        errno = EINVAL;
        return -1;
    }

    if (n == 0)
        return 1;

    return rfactorial(n - 1) * n;
}

/*
 * See factorial.h for the specification of this tail-recursive factorial
 * function.
 *
 * You have to implement this function.
 */
int trfactorial(int n, int fac) {
    if (n < 0) {
        errno = EINVAL;
        return -1;

    }else if (n == 0) {
        return 1;

    }else {
        if (n == 1) {
            return fac;
        }
        return trfactorial(n - 1, fac * n);
    }
}
