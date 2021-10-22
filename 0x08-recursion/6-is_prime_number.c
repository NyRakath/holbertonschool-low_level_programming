#include "main.h"
/**
 * is_prime_number - not is a number prime
 * @n: input
 * Return: value True is_prime 
 */
int is_prime_number(int n)
{
    if(n < 2)
    {
         return (0);
    }
    return (is_prime(n, 2));
}
/**
 * is_prime - is a number prime
 * @n: input
 * @i: 2
 * Return: conditions for a number prime
 */
int is_prime(int n, int i)
{
  if(n != 2 && n % i == 0)
  {
      return (0);
  }
  
  if(i > n / 2)
  {
      return (1);    
  }
return(is_prime(n, i + 1));
}