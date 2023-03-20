/* Nama File            : JumFrekBilTabel.c */
/* Deskripsi            : jumlmah dari nilai yang frekuensinya lebih dari 1 */
/* Pembuat              : Rona Realita Najma - 24060122140124 */
/* Tanggal pembuatan    : 2 Maret 2023*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int T[10]={7,4,5,7,6,5,3,5,1,4};
    int count;
    int i,j;
    int jum=0;

    //Algoritma
    for(i=0; i<10; i++){
        count=0;
        for(j=0; j<10; j++){
            if ((count == 0) && (T[i]==T[j]) && (i != j)){
                //T[j]=0;
                count += 1;
                jum += T[i];
            }
       }
    }
    printf("%d", jum);
    return 0;
}
