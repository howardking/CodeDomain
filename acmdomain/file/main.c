#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    FILE *file2;

    file = fopen64("source.txt","r");
    if (NULL==file){
        printf("Fail to open source.txt!\n");
        return -1;
    }
    file2 = fopen64("dest.txt","w");
    if (NULL==file){
        printf("Fail to open dest.txt!\n");
        return -1;
    }
    char szName[30],szGender[30];
    int nId, nBirthYear, nBirthMonth, nBirthDay;
    float fGPA;
    while( fscanf( file, "%s%d%s%d%d%d%f", szName, & nId, szGender, & nBirthYear,& nBirthMonth, & nBirthDay, & fGPA) != EOF) {
        fprintf(file2, "%s %d %s %d %d %d %g\r\n", szName, nId, szGender, nBirthYear,nBirthMonth, nBirthDay, fGPA);

    }
    fclose(file);
    fclose(file2);
    return 0;
}
