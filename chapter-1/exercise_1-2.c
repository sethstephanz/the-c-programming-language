// Exercise 1-2. Experiment to find out what happens when printf's argument
// string contains \c, where c is some character not listed above.

#include <stdio.h>

main()
{
    printf("hello, world\c");
}

//Output:
// main.c:3:1: warning: type specifier missing, defaults to 'int' [-Wimplicit-int]
// main()
// ^
// main.c:5:23: warning: unknown escape sequence '\c' [-Wunknown-escape-sequence]
//   printf("hello, world\c");
//                       ^~
// 2 warnings generated.
//  ./main
// hello, worldc