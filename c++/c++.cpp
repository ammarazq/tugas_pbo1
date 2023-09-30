#include <iostream>
using namespace std;
//main
int main() {
	//variable dan tipe data
	int nilai = 75;
	
	//if statement
    if(nilai>75){
    	cout<<"selamat, nilai anda diatas kkm"<<endl;
	}else{
		cout<<"rajin belajar lagi ya"<<endl;;
	}
	cout<<endl;
	//array multidimensi
    int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};
    //for loop                  
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::cout << "indeks ke - [" << i << "][" << j << "] = " << test[i][j] << std::endl;
        }
    }
    
     cout<<endl;
     cout<<endl;
     //do while loop
     int i = 1;
	do {
        std::cout << "Selamat datang di isekai" << std::endl;
        std::cout << "semoga bertemu naruto" << std::endl;
        i++;
    } while (i <= 5);
    cout<<endl;
    cout<<endl;
    
    //ini adalah komen
    /*komen baris 1
    komen baris 2 
    komen baris 3
    */
    
    //while loop
    int a = 1;
  	while (a <= 3){
    cout << "Kamu pacarnya naomi" << endl;
    a++;
  }
  cout<<endl;
  //array satu dimensi
    char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Huruf: " << huruf[3] << endl;
	cout<<endl;
	
	//input dan output
	//input
	string nama;
	cout<<"masukkan nama anda : ";
	cin>>nama;
	//output
	cout<<"nama anda yaitu : "<<nama;

    return 0;
}
