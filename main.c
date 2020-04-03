#include <stdio.h>
#include <stdlib.h>

struct client
{
    int data;
    struct* pPrev;
    struct* pNext;

} *pHead, *pTail;



int main()
{
    printf("Hello world!\n");
    return 0;
}


void createClient(int data)
{

    struct* pClient= (struct*)malloc(sizeof(struct client));

    if (pHead  == NULL) // first client
    {
        pHead = pTail = pClient;
        pClient -> data= data;

    }
    else
    {

        pClient -> pPrev= pTail;
        pTail= pClient;
        pClient -> pPrev -> pNext= pClient;
        pClient -> data= data;

    }


}
