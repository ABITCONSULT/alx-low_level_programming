#ifndef _FUNCTION_LIKE_MACRO_
#define _FUNCTION_LIKE_MACRO_

#define ABS(x) x
#if x < 1
(x) = (-x)
#elif x >= 1
 (x) = (x)
#endif

#endif
