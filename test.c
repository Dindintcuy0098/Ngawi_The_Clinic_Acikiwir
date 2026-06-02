#include <stdio.h>

typedef struct {
    char id_pasien[8];
    char nama_pasien[50];
} pasien;

int jumlah_pasien = 0;

void input_data(pasien *data) {
    printf("ID Pasien: ");
    scanf("%7[^\n]", data->id_pasien);
    getchar(); // clears leftover newline from buffer

    printf("Nama Pasien: ");
    scanf("%49[^\n]", data->nama_pasien);
    
    jumlah_pasien += 1;
}

void print_data(pasien data) {
    printf("\n--- Data Pasien ---\n");
    printf("ID   : %s\n", data.id_pasien);
    printf("Nama : %s\n", data.nama_pasien);
}

int main() {
    pasien data;
    input_data(&data);
    print_data(data);
    printf("Jumlah Pasien : %d", jumlah_pasien);
    return 0;
}