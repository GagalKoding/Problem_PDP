/*
 * Title    : Membuat Objek dan Behaviour
 * Name     : Rahmat Sabilludin Nurmughni
 * NIM      : A11.2016.09515
 * Class    : A11.4105
 * Compile  : Code::Blocks 16.01 Ubuntu (Linux)
*/


int main () {
/* Kamus */
    char merek[0],warna[0];
    int jmlstr,harga;

/* Program */
    printf ("== Gitar Bass ==\n\n");
    printf ("Merk gitar \n"); scanf ("%s", &merek);
    printf ("Merk gitar bass adalah : %s \n", merek);
    printf ("Warna gitar \n"); scanf ("%s", &warna);
    printf ("Warna gitar bass adalah : %s \n", warna);
    printf ("Jumlah string \n"); scanf ("%d", &jmlstr);
    printf ("Jumlah string adalah : %d \n", jmlstr);
    printf ("Harganya \n"); scanf ("%d", &harga);
    printf ("Kata yang dibaca : %d \n", harga);
    return 0;
}
