#include <iostream>
using namespace std;
int main(){
	int a,unik,nim; //nim
	char pertama,kedua,ketiga;//inputan y/n
	string nama,asal_sklh,prodi; // daftar mandiri
	
	nim = 23456;
	
	cout <<"selamat datang di universitas merdeka"<<endl;
	cout <<"jika tidak punya kode mahasiswa bisa gunakan jalur mandiri"<<endl;
	cout <<"ketik 0000 di terminal,untuk pendaftaran mandiri"<<endl;
	cout << "masukan kode mahasiswa: ";
	cin >> a;
	if (a==123){
		
	cout << "NAMA = ILHAM"<<endl; 
	cout << "PRODI = PERTANIAN" <<endl;
	cout << "KODE = 123" <<endl;
	cout << "NIM = 1001" <<endl;


	} else if (a==456){
		
	cout << "NAMA = KURNIAWAN"<<endl; 
cout << "PRODI = PERTANIAN" <<endl;
cout << "KODE = 456" <<endl;
cout << "nim = 1110"<<endl;	
cout << "NIM = 1002" <<endl;



	}else	if (a==789){
		
cout << "NAMA = JOKO"<<endl;
cout << "PRODI = KEHUTANAN" <<endl;
cout << "KODE = 1011" <<endl;
cout << "nim = 1111"<<endl;	


	}else if (a==1011){
		
cout << "NAMA = windi"<<endl;
cout << "PRODI =PENDIDIKAN" <<endl; 
cout << "KODE = 1011" <<endl;
cout << "nim = 1112"<<endl;
} else	if (a==1213){
cout << "NAMA = LAURA"<<endl;
cout << "PRODI =DOKTER" <<endl; 
cout << "KODE = 1213" <<endl;
cout << "nim = 1113"<<endl;	
	} else{
		cout << "anda ingin menggunakan jalur mandiri? (y/n): ";
		cin >> pertama;
		switch(pertama){
			case'y':
				cout<<"kamu menggunakan sistem mandiri"<<endl;
				cout <<"====cara daftar===="<<endl;
				cout << "gunakan garis bawah(_) jika lebih dari satu"<<endl;
				cout <<"nama : lorem_ipsum"<<endl;
				cout <<"====================="<<endl;
				cout << "masukan nama: ";
				cin >> nama;
				cout <<"asal sekoalah: ";
				cin >> asal_sklh;
				cout << "pilih prodi: ";
				cin >> prodi;
				cout << "untuk biaya awal 500.000RP"<<endl;
				cout <<"nama: "<<nama<<endl;
				cout <<"asal sekolah: "<<asal_sklh<<endl;
				cout <<"prodi: "<<prodi<<endl;
			cout <<"==============="<<endl;
			break;
		}
		cout << "anda ingin membayar (y/n): ";
		cin >> kedua;
		switch(kedua){
			case 'y':
			cout << "silahkan bayar ke rekening 73830293792 A/N lorem ipsum"<<endl;
			cout << "anda sudah membayar(y/n): ";
			cin >> ketiga;
			switch(ketiga){
				case 'y':
					cout << "jika sudah membayar maka akan mendapatkan kode unik,inputkan kode unik dibawah"<<endl;
					cout << "masukan kode unik: ";
					cin >> unik;
					switch(unik){
						case 8787:
							cout <<"=================="<<endl;
							cout<<"selamat kamu berhasil daftar mandiri,dan selamat datang di bagian kami"<<endl;
							cout <<"=================="<<endl;
							cout <<"nama: "<<nama<<endl;
							cout <<"asal sekolah: "<<asal_sklh<<endl;
							cout <<"prodi: "<<prodi<<endl;
							cout << "nim = "<<nim<<endl;
						
					}
					break;			
					case 'n':
						cout << "terimaksih telah berkunjung";
				}
			}
		
		
						
	}}
