#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int Hour0,min0,sec0,Hour1,min1,sec1,finhour0,finmin0,finsec0,time0;

    printf("�п�J�_�l�ɶ�:");

    scanf("%d:%d:%d", &Hour0, &min0, &sec0);

    printf("�п�J�����ɶ�:");

    scanf("%d:%d:%d", &Hour1, &min1, &sec1); 

    finhour0 = Hour0-Hour1;

    finmin0  = min0-min1;

    finsec0  = sec0-sec1;

finhour0 = abs(finhour0);

    finmin0 = abs(finmin0);

    finsec0 = abs(finsec0);

    time0 = finhour0 * 3600 + finmin0 * 60 + finsec0;

    printf("\n��Ӯɶ������Ƭ�: %d\n", time0);

    system("pause");

    return 0;

}
