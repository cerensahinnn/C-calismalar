#include <stdio.h>
#include <stdlib.h>


void meanAndMin(int arr[], int size, float *mean, int *min) 
{
    int sum = 0;
    *min = arr[0]; // İlk elemanı başlangıçta minimum olarak kabul ediyoruz

    for (int i = 0; i < size; i++) 
    {
        sum= sum+ arr[i]; // Dizinin elemanlarını toplar
        if (arr[i] < *min) 
        {
            *min = arr[i]; // Eğer dizinin elemanı mevcut min değerden küçükse, min değeri günceller
        }
    }

    *mean = (float)sum / size; // Ortalamayı hesaplıyoruz
}

int main() 
{
    int arr[] = {3, 9, 1, 5, 7}; // Örnek bir dizi
    int size = sizeof(arr) / sizeof(arr[0]); // Dizinin boyutu
    float mean; // Ortalama değeri
    int min; // Minimum değeri

    meanAndMin(arr, size, &mean, &min); // Fonksiyonu çağırıyoruz

    printf("Mean: %.2f\n", mean);
    printf("Min: %d\n", min);

    return 0;
}
