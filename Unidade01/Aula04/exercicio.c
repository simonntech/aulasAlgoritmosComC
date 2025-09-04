#include <stdio.h>

int main() {

    int tv_2020, tv_2021, tv_2022;

    printf("Quantidade TV 2020: ");
    scanf("%d", &tv_2020);
    printf("Quantidade TV 2021: ");
    scanf("%d", &tv_2021);
    printf("Quantidade TV 2022: ");
    scanf("%d", &tv_2022);


    int noteb_2020, noteb_2021, noteb_2022;

    printf("Quantidade Notebook 2020: ");
    scanf("%d", &noteb_2020);
    printf("Quantidade Notebook 2021: ");
    scanf("%d", &noteb_2021);
    printf("Quantidade Notebook 2022: ");
    scanf("%d", &noteb_2022);


    int smart_2020, smart_2021, smart_2022;

    printf("Quantidade Smartphones 2020: ");
    scanf("%d", &smart_2020);
    printf("Quantidade Smartphones 2021: ");
    scanf("%d", &smart_2021);
    printf("Quantidade Smartphones 2022: ");
    scanf("%d", &smart_2022);

    float media_2020 = (tv_2020 + noteb_2020 + smart_2020)/3;
    float media_2021 = (tv_2021 + noteb_2021 + smart_2021)/3;
    float media_2022 = (tv_2022 + noteb_2022 + smart_2022)/3;

    printf("Média 2020: %f", media_2020);
    printf("Média 2021: %f", media_2021);
    printf("Média 2022: %f", media_2022);

    return 0;
}