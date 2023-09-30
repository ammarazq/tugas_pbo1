import java.util.Scanner;

public class java {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        //variable dan tipe data
        int nilai = 75;
        //if statement
        if (nilai > 75) {
            System.out.println("selamat, nilai anda diatas kkm");
        } else {
            System.out.println("rajin belajar lagi ya");
        }
        System.out.println();
        //array multidimensi
        int[][] test = {{2, -5},
                {4, 0},
                {9, 1}};
        //for loop
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 2; ++j) {
                System.out.println("indeks ke - [" + i + "][" + j + "] = " + test[i][j]);
            }
        }
        System.out.println();
        System.out.println();

        //do while loop
        int i = 1;
        do {
            System.out.println("Selamat datang di isekai");
            System.out.println("semoga bertemu naruto");
            i++;
        } while (i <= 5);
        System.out.println();
        System.out.println();

        //ini adalah komen
        /*komen baris 1
        komen baris 2
        komen baris 3
        */

        //while loop
        int a = 1;
        while (a <= 3) {
            System.out.println("Kamu pacarnya naomi");
            a++;
        }
        System.out.println();
        //array satu dimensi
        char[] huruf = {'a', 'b', 'c', 'd', 'e'};
        System.out.println("Huruf: " + huruf[3]);
        System.out.println();

        //input dan output
        //input
        String nama;
        System.out.print("masukkan nama anda : ");
        nama = input.nextLine();
        //output
        System.out.println("nama anda yaitu : " + nama);
    }
}