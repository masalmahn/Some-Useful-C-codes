#include <stdio.h>

int main() {
    // dizi ve degiskenler tanimlandi
    int notes[4][5] = {
        {1,67,76,55},
        {2,34,79,76},
        {3,56,68,57},
        {4,66,89,65}
    }, av=0, max=1, maxId=0;
    // bu dongude satirlari gezmis olduk
    for (int i=0; i<4; i++) {
        // bu dongude sutunleri index 1den 3e kadar gittik onlari toplayip
        for (int k=1;k<4;k++)
            // sutunleri index 1den 3e topladik ki onlari son sutune kaydedelim
            av=av+notes[i][k];
            // burada ortalamayi bulmak icin ve son sutune kaydetmek icin onlarin toplamini 3e bolduk ve son sutune kaydettik
            notes[i][4] = av/3;
            // burada satirlarin ortalamasi karismasin diye sutunler bitip kaydedildikten sonra ortalama degiskeni sifirlandi
            av = 0;
    }

    // burada max ortalama ve ogrencinin kimligi cikartildi
    for (int i=0; i<4; i++) {
        for (int j=i+1; j<4; j++) {
            if (notes[i][4] > notes[j][4]) {
                max = notes[i][4];
                maxId = notes[i][0];
            } else {
                max = notes[j][4];
                maxId = notes[j][0];
            }
        }
    }

    // en yuksek alan ogrencinin hem ortalamasini hemde kimligini ekrana bastik
    printf("The Student With ID %d And Avarage %d Is the Best Student",maxId, max);


    return 0;
}
