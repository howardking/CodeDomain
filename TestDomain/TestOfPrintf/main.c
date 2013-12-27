#include <stdio.h>
#include <stdlib.h>

int main()
{
    char * str = "skjahdfkjsha\
    djkfhwuihfasjkdflkjasdhfk\
    skajdhfuwhafjkhwiufhsjdf\
    lkjsadhfuiwhfjaksdnfhljkas\
    hdfkljhasjkdfhjkasdffsadff";
    int max = 10;

    printf("%.*s!\n",max,str);

    return 0;
}
