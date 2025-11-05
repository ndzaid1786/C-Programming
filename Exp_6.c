// Name :- Zaid Badarpura 
// Class : Computer Enginnering
// Division :- D
// UIN :- 251P127 

#include <stdio.h>

void Counter()
{
    static int count = 0;
    count++;
    printf("Count = %d\n", count);
}

int main()
{
    Counter();
    Counter();
    Counter();

    return 0;
}
