#include <stdio.h>

int main(){
    // Daftar film & harga tiket
    char films[4][50] = {"Fast and Furious: X", "Insidious 4", 
                        "Comic 8: Kasino", "Cek Toko Sebelah"};
    int prices[10] = {50000, 45000, 40000, 30000};

    // Jam tayang setiap film
    char schedule[10][100] = {
        "10:00 AM, 2:00 PM, 6:00 PM",
        "11.00 AM, 3:00 PM, 7:00 PM",
        "9:30 AM, 1:30 PM, 5:30PM"
    };

    // Pilihan film, jam tayang, dan jumlah tiket
    int filmChoice, scheduleChoice, numTickets;

    printf("\n\nSelamat datang di bioskop!\n");

    do {
        printf("Pilih film yang ingin ditonton (0 untuk keluar):\n");
        printf("1. Fast and Furious: X\n");
        printf("2. Insidious 4\n");
        printf("3. Comic 8: Kasino\n");
        printf("4. Cek Toko Sebelah\n");
        printf("Masukkan nomor film: ");
        scanf("%d", &filmChoice);

        if (filmChoice == 0) {
            printf("Terima kasih atas kunjungannya. Sampai jumpa!\n\n");
            return 0; // Keluar dari program
        }

        if (filmChoice < 0 || filmChoice > 4) {
            printf("Pilihan film tak valid. Silakan coba lagi.\n\n\n");
        }
        
    } while (filmChoice < 0 || filmChoice > 4);

    // Tampilkan jam tayang yang tersedia
    do {
    printf("\nJam tayang untuk '%s':\n", films[filmChoice - 1]);
    printf("%s\n", schedule[filmChoice - 1]);
    printf("(Input 0 untuk keluar)\n");
    printf("Masukkan nomor jam tayang: \n");
    scanf("%d", &scheduleChoice);
    

    if (scheduleChoice < 0 || scheduleChoice > 3){
        printf("Jam tayang tidak valid, silakan coba lagi\n");
    }
    else if (scheduleChoice == 0) {
        printf("Terima kasih anda sudah keluar..\n");
        return 0;
    }
    else{
        printf("\n");
    }
   
} while (scheduleChoice < 0 || scheduleChoice > 4);


// perhitungan jumlah tiket
    do {
        printf("Masukkan jumlah tiket yang ingin dibeli: ");
        scanf("%d", &numTickets);

        if (numTickets <= 0){
            printf("Jumlah tiket tidak valid. Silakan coba lagi.\n");
        }    
     } while (numTickets <= 0 );

     // Hitung total pembayaran
     int totalPrice = prices[filmChoice - 1] * numTickets;

     // Tampilkan rincian pembelian
     printf("\nRincian Pembelian\n");
     printf("Film: %s\n", films[filmChoice - 1]);
     printf("Jam tayang: %s\n", schedule[filmChoice - 1]);
     printf("Jumlah tiket: %d\n", numTickets);
     printf("Total Pembayaran: Rp %d\n", totalPrice);

     printf("Selamat menikmati filmnya!\n\n");

     return 0;
        
    }
    

