#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
#define fileA "char.dat"
#define fileB "alphabetically.dat"

void openFile(char [], FILE *);
void sortArray(char *, const int, int(*)(char, char));
int ascending(char, char);
int descending(char, char);
void writeFile(char [], FILE *);

int i=0;
int j;

int main()
{
    int choice;
    char a[SIZE];
    FILE *rfPtr;
    FILE *wfPtr;

    openFile(a, rfPtr);
menu:
    printf("\nMENU'\n"
           "1 - Sort in ascending order\n"
           "2 - Sort in descending order\n"
           "3 - Exit\n\n"
           "> ");
    scanf("%d", &choice);
    switch(choice){
        case 1: sortArray(a, i, ascending); break;
        case 2: sortArray(a, i, descending); break;
        case 3: exit(1);
        default:
            puts("Enter integers in the range 1-3 (3 to end)");
            goto menu; break;
    }
    writeFile(a, wfPtr);

    return 0;
}

void openFile(char vett[], FILE *readFilePtr)
{
    if((readFilePtr=fopen(fileA, "r"))==NULL) perror("");
    else{
        while(fscanf(readFilePtr, "%c", &vett[i])!=EOF)
        i++;
    }
    fclose(readFilePtr);
}

void sortArray(char *work, const int size, int (*compare)(char, char))
{
    int pass, count;
    void swap(char *, char *);

    for(pass=1; pass<=size-1; pass++)
        for(count=0; count<=size-2; count++)
            if((*compare)(work[count], work[count+1]))
                swap(&work[count], &work[count+1]);
}

void swap(char *element1Ptr, char *element2Ptr)
{
    int temp;

    temp=*element1Ptr;
    *element1Ptr=*element2Ptr;
    *element2Ptr=temp;
}

int ascending(char a, char b)
{
    return a>b;
}

int descending(char a, char b)
{
    return a<b;
}

void writeFile(char vett[], FILE *writeFilePtr)
{
    if((writeFilePtr=fopen(fileB, "w"))==NULL) perror("");
    else{
        for(j=0; j<i; j++)
            fprintf(writeFilePtr, "%c ", vett[j]);
    }
    fclose(writeFilePtr);
}
