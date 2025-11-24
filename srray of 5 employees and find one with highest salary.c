#include<stdio.h>
#include<string.h>

struct employee{
    char name[20];
    long Id;
    int salary;
    char department[30];
};

int main(){
    struct employee emp[5];

    for(int i=0;i<5;i++){
        printf("enter the name of employee %d: ",i);
        scanf("%s",emp[i].name);

        printf("enter the Id of employee %d: ",i);
        scanf("%ld",&emp[i].Id);

        printf("enter the salary of employee %d: ",i);
        scanf("%d",&emp[i].salary);

        printf("enter the department of employee %d: ",i);
        scanf("%s",emp[i].department);
    }

    int maxindex = 0;

    for(int i=1;i<5;i++){   
        if(emp[i].salary > emp[maxindex].salary){
            maxindex = i;
        }
    }

    printf("\nEmployee with highest salary:\n");
    printf("name: %s\n", emp[maxindex].name);
    printf("ID: %ld\n", emp[maxindex].Id);
    printf("salary: %d\n", emp[maxindex].salary);
    printf("department: %s\n", emp[maxindex].department);

    return 0;
}

	 
	 
	 
	 
