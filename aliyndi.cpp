#include <stdio.h>
#include <conio.h>
main()
{ 

int bulan;
puts("Menentukan nama hari\n");
puts("1 = Januari 2 = Febuari 3 = Maret 4 = April");
puts("5 = Mei 6 = Juni 7 = Juli 8 = Agustus");
puts("9 = September 10 = Oktober 11 = November 12 = Desember");
printf("\nMasukan angka bulan(1-12) : ");
scanf("%d", &bulan);
switch(bulan) {
case 1 : puts("January"); /* kemungkinan pertama */
break;
case 2 : puts("Febuari"); /* kemungkinan kedua */
break;
case 3 : puts("Maret"); /* kemungkinan ketiga */
break;
case 4 : puts("April"); /* kemungkinan keempat */
break;
case 5 : puts("Mei"); /* kemungkinan kelima */
break;
case 6 : puts("Juni"); /* kemungkinan keenam */
break;
case 7 : puts("Juli");
break; /* kemungkinan ketujuh */
case 8 : puts("Agustus"); /* kemungkinan kedelapan */
break;
case 9 : puts("September"); /* kemungkinan Kesembilan */
break;
case 10 : puts("Oktober"); /* kemungkinan 10 */
break;
case 11 : puts("November"); /* kemungkinan 11 */
break;
case 12 : puts("Desember"); /* kemungkinan 12 */
break;
default : puts("Kode bulan yang Anda masukan SALAH");
}
getch();
return 0;

}
