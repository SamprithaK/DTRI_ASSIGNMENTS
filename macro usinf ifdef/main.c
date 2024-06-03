#include <stdio.h>
#define DEBUG_EN//defining a macro
# define BUG1_EN//defining a macro
int main()
{
    #ifdef DEBUG_EN//checking if debug_en macrro is present
    printf("Hello world!\n");//if true print
    #endif//closing by e
    #ifndef BUG_EN//checking if bug_en is present
    printf("BUG1_EN is present");//printing
    #endif // BUG_EN//ending
    return 0;
}
