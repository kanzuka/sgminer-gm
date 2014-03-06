#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <inttypes.h>

/* Describes the Scrypt parameters and hashing functions used to mine
 * a specific coin.
 */
typedef struct _algorithm_t {
    char    name[20]; /* Human-readable identifier */
    uint8_t nfactor;  /* N factor (CPU/Memory tradeoff parameter) */
} algorithm_t;

/* Set default parameters based on name. */
void set_algorithm(algorithm_t* algo, const char* name);

/* Set to specific N factor. */
void set_algorithm_nfactor(algorithm_t* algo, const uint8_t nfactor);

#endif /* ALGORITHM_H */
