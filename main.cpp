#include <stdio.h>

typedef struct USERDATA
{
    int nAge;
    char szName[32];
    void(*Print)(struct USERDATA *);
} USERDATA;

void PrintData(USERDATA *pUser)
{
    printf("%d, %s\n",pUser->nAge,pUser->szName);
}

int main(void)
{
    USERDATA user = {20,"chulsu",PrintData};
    user.Print(&user);

    return 0;
}