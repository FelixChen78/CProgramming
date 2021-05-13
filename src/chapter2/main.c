#include <stdio.h>
#include <limits.h>

void rangeOfData() //Ex 2-1
{
    printf("CHAR_MIN = %d, CHAR_MAX = %d \n", CHAR_MIN, CHAR_MAX);
    printf("INT_MIN = %d, INT_MAX = %d \n", INT_MIN, INT_MAX);
    printf("LONG_MIN = %ld, LONG_MAX = %ld \n", (long) LONG_MIN, (long) LONG_MAX);
    printf("SCHAR_MIN = %d, SCHAR_MAX = %d \n", SCHAR_MIN, SCHAR_MAX);
    printf("SHRT_MIN = %d, SHRT_MAX = %d \n", SHRT_MIN, SHRT_MAX);
    printf("UCHAR_MIN = %d, UCHAR_MAX = %d \n", 0, UCHAR_MAX);
    printf("UINT_MIN = %d, UINT_MAX = %d \n", 0, (unsigned int)UINT_MAX);
    printf("ULONG_MIN = %d, ULONG_MAX = %lu \n", 0, (unsigned long) ULONG_MAX);
    printf("USHRT_MIN = %d, USHRT_MAX = %d \n", 0, (unsigned short) USHRT_MAX);

}
/** Driver Code */
int main()
{
    rangeOfData();
    return 0;
}

