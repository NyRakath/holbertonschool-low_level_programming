#ifndef HAVE_ABS
#define HAVE_ABS
#define ABS(x) (((x) < 0) ? (-(x)) : (x)) /* (-(x)) == ((x) * (-1)) law of signs... math logic */
#endif