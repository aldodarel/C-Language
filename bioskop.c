
#include <stdio.h>

int main() {
    // Daftar film dan harga tiket
    char films[3][50] = {"Avengers: Endgame", "Spider-Man: Far From Home", "The Lion King"};
    int prices[3] = {15000, 12000, 10000};

    // Jam tayang untuk setiap film
    char schedule[3][100] = {
        "10:00 AM, 2:00 PM, 6:00 PM",
        "11:00 AM, 3:00 PM, 7:00 PM",
        "9:30 AM, 1:30 PM, 5:30 PM"
    };

    // Pilihan film, jam tayang, dan jumlah tiket
    int filmChoice, scheduleChoice, numTickets;

    printf("Selamat datang di bioskop!\n");

    do {
        printf("Pilih film yang ingin ditonton (0 untuk keluar):\n");
        printf("1. Avengers: Endgame\n");
        printf("2. Spider-Man: Far From Home\n");
        printf("3. The Lion King\n");
        printf("Masukkan nomor film: ");
        scanf("%d", &filmChoice);

        if (filmChoice == 0) {
            printf("Terima kasih atas kunjungannya. Sampai jumpa!\n");
            return 0; // Keluar dari program
        }

        if (filmChoice < 1 || filmChoice > 3) {
            printf("Pilihan film tidak valid. Silakan coba lagi.\n");
        }
    } while (filmChoice < 1 || filmChoice > 3);

    // Tampilkan jam tayang yang tersedia
    printf("Jam Tayang untuk %s:\n", films[filmChoice - 1]);
    printf("%s\n", schedule[filmChoice - 1]);

    do {
        printf("Masukkan nomor jam tayang: ");
        scanf("%d", &scheduleChoice);

        if (scheduleChoice < 1 || scheduleChoice > 3) {
            printf("Pilihan jam tayang tidak valid. Silakan coba lagi.\n");
        }
    } while (scheduleChoice < 1 || scheduleChoice > 3);

    do {
        printf("Masukkan jumlah tiket yang ingin dibeli: ");
        scanf("%d", &numTickets);

        if (numTickets <= 0) {
            printf("Jumlah tiket tidak valid. Silakan coba lagi.\n");
        }
    } while (numTickets <= 0);

    // Hitung total pembayaran
    int totalPrice = prices[filmChoice - 1] * numTickets;

    // Tampilkan rincian pembelian
    printf("\nRincian Pembelian\n");
    printf("Film: %s\n", films[filmChoice - 1]);
    printf("Jam Tayang: %s\n", schedule[filmChoice - 1]);
    printf("Jumlah Tiket: %d\n", numTickets);
    printf("Total Pembayaran: Rp %d\n", totalPrice);

    printf("Selamat menikmati filmnya!\n");

    return 0;
}