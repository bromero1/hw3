#define MAX 1000

/*
getline1: read a line into s
          return length of line (not including '\0')
          see K&R
*/
int getline1(char s[], int lim);

/*
power: raise base to n-th power; n >= 0
      see K&R
*/
int power(int base, int n);

/*
 * Determines if a character is a valid octal digit. Mirrors the behavior of
 * the library functions isdigit and isxdigit for checking decimal and hex
 * digits.
 * Args    : c (the character to examine, an ascii code)
 * Returns : 1 if c is 0 - 7
 *           0 otherwise
 */
int isodigit(int c);

/*
 * Returns the decimal value of a digit (can be octal, decimal, hex).
 * Args    : c (the character to examine, an ascii code, assumed to be a digit)
 * Returns : the decimal value of c
 */
int decimal_value(int c);

/*
 * Returns the base of the number stored in line (a string storing a number).
 * The base is determined by looking at the initial characters in the number
 * string for the following:
 *   if the first character is 0, the second character is checked
 *     if the second character is x or X, the base is 16
 *     otherwise the base is 8
 *   if the first character is a nonzero decimal digit, the base is 10
 * Args    : line (an array of characters holding a number)
 * Returns : 16 (if line holds a hex value)
 *            8 (if line holds an octal value)
 *           10 (if line holds a decimal value)
 *            0 (if line starts with an invalid character; i.e., anything
 *               other than 0x, 0X, or 0-9)
 */
int find_base(char line[]);

/*
 * Converts input character array to a decimal value.
 * For an input array to be valid, the following must be true:
 *   -the array must contain only a number and newline character
 *   -the number must be in octal, decimal, or hex
 * The line's value is found by:
 *   1. determine the base (do nothing if the base is not valid)
 *   2. determine where in the number string the value starts
 *      e.g., in a hex value the number starts at index 2 (0 is 0, 1 is x or X)
 *   3. determine the index of the last digit of the number
 *   4. loop through the array from the last digit to the first digit
 *      converting each digit to a decimal value and multiplying it by the
 *      place value (8, 10, or 16 to some power) and adding it to a
 *      running total
 * Args    : line (an array of characters holding a number)
 * Returns : the decimal value of the number in line
 *           -1 if the line does not hold a valid number
 */
int line_value(char line[]);
