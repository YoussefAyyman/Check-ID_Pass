#include <stdio.h>

void CHECK_PASS();
void CHECK_ID();

char name1 [] = "Ahmed", name2 [] = "Amr", name3 [] = "Wael";
int id, ID1 = 1234, ID2 = 5678, ID3 = 9870;
int pass, PASS1 = 7788, PASS2 = 5566, PASS3 = 1122;
int i = 0;

void CHECK_ID()
{
    printf("Please Enter Your ID: ");
    scanf("%d", &id);

    if (id == ID1)
    {
        CHECK_PASS();
    }

    else if (id == ID2)
    {
        CHECK_PASS();
    }

    else if (id == ID3)
    {
        CHECK_PASS();
    }

    else if (id != ID1 && id != ID2 && id != ID3)
    {
        printf("You are not registered!\n");
    }
}

void CHECK_PASS()
{
    printf("Please enter Your Password: ");
    scanf("%d", &pass);

    if (pass == PASS1)
    {
        printf("Welcome %s!\n",name1);
    }

    else if (pass == PASS2)
    {
        printf("Welcome %s!\n",name2);
    }

    else if (pass == PASS3)
    {
        printf("Welcome %s!\n",name3);
    }

    else if (pass != PASS1 && pass != PASS2 && pass != PASS3)
    {
        do
        {
            printf("Try Again : ");
            scanf("%d", &pass);
            i++;
        } while (i < 2);
    }
    printf("Incorrect password for 3 times, No more treis");
}

int main()
{
    CHECK_ID();
    return 0;
}
