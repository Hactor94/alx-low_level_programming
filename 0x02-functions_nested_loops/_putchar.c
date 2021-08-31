#include <unistd.h>

/**
<<<<<<< HEAD
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
=======
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
>>>>>>> 90b1751c727d28528e797dac244c41ee6de48da4
int _putchar(char c)
{
	return (write(1, &c, 1));
}
