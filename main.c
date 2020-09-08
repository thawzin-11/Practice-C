#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company { GOOGLE, FACEBOOK, XEROX = 10, YAHOO, EBAY, MICROSOFT};

    enum Company xeror = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("The value of xeror is: %d\n", xeror);
    printf("The value of google is: %d\n", google);
    printf("The value of ebay is: %d", ebay);

    return 0;
}
