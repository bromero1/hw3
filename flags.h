#define FLAG1 1    /* odd */
#define FLAG2 2    /* divisible by 3 */
#define FLAG3 4    /* divisible by 4 */
#define FLAG4 8    /* divisible by 5 */
#define FLAG5 16   /* divisible by 6 */
#define FLAG6 32   /* divisible by 7 */
#define FLAG7 64   /* divisible by 8 */
#define FLAG8 128  /* divisible by 9 */

/*
 * Generates an unsigned char value with flags set as follows:
 *   FLAG1: set if total is odd.
 *   FLAG2: set if total is divisible by 3.
 *   FLAG3: set if total is divisible by 4.
 *   FLAG4: set if total is divisible by 5.
 *   FLAG5: set if total is divisible by 6.
 *   FLAG6: set if total is divisible by 7.
 *   FLAG7: set if total is divisible by 8.
 *   FLAG8: set if total is divisible by 9.
 * Args    : total (the running total being examined for divisibility)
 * Returns : an unsigned char with the bits set to the above criteria.
 */



unsigned char get_mask(int total);

/*
 * Outputs a message for the parity and divisibility of a value based on the
 * bit pattern set in flag.
 * Args    : flags (an unsigned char with bits set according to divisibility)
 */


void print_flags(unsigned char flags);
