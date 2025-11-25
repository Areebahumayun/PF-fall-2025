#include<Stdio.h>
#include <stdio.h>

float calculatecost(int pages)
{
    float cost;

    if(pages > 0 && pages <= 100){
        cost = pages * 2;
    }
    else if(pages >= 101 && pages <= 200){
        cost = (100 * 2) + (pages - 100) * 1.5;
    }
    else if(pages >= 201 && pages <= 400){
        cost = (100 * 2) + (100 * 1.5) + (pages - 200) * 1;
    }
    else if(pages > 400){
        cost = (100 * 2) + (100 * 1.5) + (200 * 1) + (pages - 400) * 0.5;
    }
    else {
        cost = 0;   // invalid
    }

    return cost;
}

void printinvoice(int pages, float cost)
{

    printf("Pages printed : %d\n", pages);
    printf("Total Cost    : %.2f\n", cost);
    
}

int main()
{
    int customers;
    int pgs;
    float cost;

    printf("How many customers you want to enter: ");
    scanf("%d", &customers);

    for(int i = 1; i <= customers; i++)
    {
        printf("\nEnter pages for customer %d: ", i);
        scanf("%d", &pgs);

        cost = calculatecost(pgs);
        printinvoice(pgs, cost);
    }

    return 0;
}















