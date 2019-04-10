#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int Hour0,min0,sec0,Hour1,min1,sec1,finhour0,finmin0,finsec0,time0;

    printf("請輸入起始時間:");

    scanf("%d:%d:%d", &Hour0, &min0, &sec0);

    printf("請輸入結束時間:");

    scanf("%d:%d:%d", &Hour1, &min1, &sec1); 

    finhour0 = Hour0-Hour1;

    finmin0  = min0-min1;

    finsec0  = sec0-sec1;

finhour0 = abs(finhour0);

    finmin0 = abs(finmin0);

    finsec0 = abs(finsec0);

    time0 = finhour0 * 3600 + finmin0 * 60 + finsec0;

    printf("\n兩個時間間格秒數為: %d\n", time0);

    system("pause");

    return 0;

}
