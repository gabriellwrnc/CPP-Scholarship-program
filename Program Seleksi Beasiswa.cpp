#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdlib.h>
using namespace std;

void UN(){
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t     Silahkan masukkan nilai UN\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t    *jika nilai 90 tulis 90.00/90.25\n";
	cout << "\t\t\t    *input nilai dengan teliti karena mempengaruhi penilaian\n";
	cout << "\t\t\t    *apabila mengosongkan dianggap nilai = 0\n";
	cout << "\t\t\t    *apabila apabila nilai anda 100, input 99.99\n\n";
}
void mapel(){
	cout << "\t\t\t    =============================================================\n";
	cout << "\t\t\t\t\tSilahkan pilih mata pelajaran pilihan\n";
	cout << "\t\t\t    =============================================================\n\n";
}
main(){
	
	int tambah, x, y, z, v;
	string username, password, alamat, alamat2, alamat3, alamat4;
	string pilihanawal, inputdadi, inputdadiortu, inputtanggungan, asalsekolah;
	string inputpenghasilan, inputasetrumah, inputkendaraan2, inputkendaraan4;
	string inputasetakhir;
	char c, in;
	int pilihmapel;
	
	char status;
	string pilihjurusan;
	int poin = 0;
	float jumlah, nilai[4];
	
	string mapelIPA[4] = {"", "Biologi", "Fisika", "Kimia"};
	string mapelIPS[4] = {"", "Sosiologi", "Ekonomi", "Geografi"};
	string sekolah, tanggungan, penghasilanortu, asetrumah, asetroda2, asetroda4;
	string inputjurusan, inputmapel;
	string tempatlahir, nisn, agama, nama;
	string tanggallahir, alamatt, namaayah, namaibu;
	string namawali, alamatayah, alamatibu, alamatwali;
	string kerjaayah, kerjaibu, kerjawali;
	
	do {
	menuutama:
	pilihanawal = "";
	system ("cls");	
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t  SELAMAT DATANG DI PROGRAM BEASISWA\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t1. Syarat dan Cara mendaftar\n";
	cout << "\t\t\t2. Login pendaftar\n";
	cout << "\t\t\t3. Tentang beasiswa\n";
	cout << "\t\t\tInput pilihan : ";
	pilihanawal = getche();

	system ("cls");
	if (pilihanawal == "1"){
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tSyarat dan cara pendaftaran\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\tA. Syarat" << endl;
	cout << "\t\t\t1. Warga Negara Indonesia." << endl;
	cout << "\t\t\t2. Telah menyelesaikan studi di SMA/SMK yang akan lulus pada tahun 2019." << endl;
	cout << "\t\t\t3. Memiliki nilai yang sesuai dengan ketentuan." << endl;
	cout << endl;
	cout << "\t\t\tB. Cara pendaftaran Beasiswa" << endl;
	cout << "\t\t\t1. Login dengan akun yang telah dimiliki." << endl;
	cout << "\t\t\t2. Mengisi biodata dengan JUJUR dan selengkap mungkin." << endl;
	cout << "\t\t\t3. Setelah selesai menyelesaikan pengisian biodata dan dokumen-dokumen, " << endl;
	cout << "\t\t\t   peserta diharapkan menunggu proses pengecekkan ditetapkan lulus atau tidak."<< endl;
	cout << endl;
	cout << "\t\t\tTEKAN APASAJA UNTUK KEMBALI KE MENU UTAMA" << endl;
	getch();
	goto menuutama; 
	}
	else if (pilihanawal == "2"){
		goto login;
	}
	else if (pilihanawal == "3"){
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tTentang beasiswa" << endl;
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\tBeasiswa ini diperuntukkan bagi peserta yang memiliki potensi akademik" << endl;
	cout << "\t\t\tdiatas rata-rata dan dianggap kurang mampu, tapi beasiswa ini juga dapat" << endl;
	cout << "\t\t\tdiberikan bagi peserta yang memiliki potensi akademik yang tinggi." << endl ;
	cout << endl;
	cout << "\t\t\tTEKAN APASAJA UNTUK KEMBALI KE MENU UTAMA" << endl;
	getch();
	goto menuutama;
	}
	else{
		goto menuutama;
	}
	login:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tSilahkan lakukan login\n";
	cout << "\t\t\t    ==============================================================\n\n";
	cout << "\t\t\t    Username : "; getline(cin, username);
	cout << "\t\t\t    Password : ";
	while(c != '\r'){ //Looping sampai menekan 'Enter'
		c = getch();
		if(c == '\b'){ //Jika menekan 'Backspace' maka input akan terhapus
			if(password.size() != 0){ // jika string password mengandung data, hapus karakter terakhir
				cout << "\b \b";
				password.erase(password.size()-1, 1);
			}
			continue;
		}
		else if(c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'){
			password += c;
			cout << "*";
		}
		else
			continue;
		}
	if(username == "nurika" && password == "123"){
		system("cls");
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\t\t\t\tSelamat datang " << username << endl;
		cout << "\t\t\t    ==============================================================\n";
		getch();
		system("cls");
		goto biodata;
	}
	else{
		cout << "\n\t\t\t    Maaf Username atau Password salah silahkan coba lagi\n";
		c = 0;
		password = "";
		getch();
		system("cls");
		goto login;
	}
	biodata:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tDaftar Biodata diri\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t    *Diharapkan memasukkan data dengan teliti\n";
	cout << "\t\t\t    *Kesalahan mengisi biodata ditanggung pendaftar\n\n";
	nama:
	cout << "\n\t\t\t(Contoh : Muhammad Rezky)";
	cout << "\n\t\t\tNama\t\t : ";
	getline(cin, nama);
	cout << "\n\t\t\t(Contoh : 0025789271)";
	cout << "\n\t\t\tNISN\t\t : ";
	getline(cin, nisn);
	cout << "\n\t\t\t(Contoh : Jl.Suryanata Perum. Villa Damai No.20 Rt.20 )";
	cout << "\n\t\t\tAlamat\t\t : ";
	getline(cin, alamatt);
	cout << "\n\t\t\t(Contoh : Palembang)";
	cout << "\n\t\t\tTempat Lahir     : ";
	getline(cin, tempatlahir);
	cout << "\n\t\t\t(Contoh : 12 Oktober 2001)";
	cout << "\n\t\t\tTanggal Lahir    : ";
	getline(cin, tanggallahir);
	cout << "\n\t\t\t(Contoh : Islam)";
	cout << "\n\t\t\tAgama\t\t : ";
	getline(cin, agama);
	tanggunganortu1:
	cout << "\n\t\t\tTanggungan Orang Tua : ";
	cout << "\n\t\t\t(Termasuk Pendaftar)";
	cout << "\n\t\t\t1. Kurang dari Sama Dengan 2 Anak";
	cout << "\n\t\t\t2. Lebih dari 2 Anak";
	cout << "\n\t\t\tMasukkan Pilihan : ";
	inputtanggungan = getche();
	if(inputtanggungan == "1"){
		tanggungan = "Kurang dari Sama Dengan 2 Anak";
	}
	else if(inputtanggungan == "2"){
		tanggungan = "Lebih Dari 2 Anak";
	}
	else{
	cout << "\n\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputtanggungan = "";
	goto tanggunganortu1;
	}
	perulanganasalsekolah:
	asalsekolah = "";
	cout << "\n\n\t\t\tAsal sekolah     : ";
	cout << "\n\t\t\t1.SMK";
	cout << "\n\t\t\t2.SMA";
	cout << "\n\t\t\tMasukkan pilihan : ";
	asalsekolah = getche();
	menu:
	if (asalsekolah == "1"){
		system ("cls");
		sekolah = "SMK";
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\t\t\t\tSilahkan input jurusan\n";
		cout << "\t\t\t    ==============================================================\n\n";
		cout << "\t\t\t    Input jurusan : ";
		getline(cin, inputjurusan);
		system("cls");
		cout << "\t\t\t    ========================================================================\n";
		cout << "\t\t\t\t\tSilahkan input mata pelajaran yang diujikan\n";
		cout << "\t\t\t    ========================================================================\n\n";
		cout << "\t\t\t    Mata pelajaran yang diujikan selain (B.indonesia, B.inggris, Matematika)\n";
		cout << "\t\t\t    : ";
		getline(cin, inputmapel);
		system("cls");
		UN();
		cout << "\t\t\t    (Contoh : 89.75))\n";
		cout << "\t\t\t    Bahasa Indonesia : ";

char ch;
int x;
	ch = _getch();
		goto d;
		while(ch != 13){
		ch = _getch();
		d:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
		cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto e;
	while(ch != 13){
	ch = _getch();
	e:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto r;
	while(ch != 13){
	ch = _getch();
	r:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    " << inputmapel << " : ";
		
int v;
ch = _getch();
	goto m;
	while(ch != 13){
	ch = _getch();
	m:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
	}
	else if(asalsekolah == "2"){
		system("cls");
		sekolah = "SMA";
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\t\t\t\tSilahkan pilih jurusan\n";
		cout << "\t\t\t    ==============================================================\n\n";
		cout << "\t\t\t    1. IPA\n";
		cout << "\t\t\t    2. IPS\n";
		cout << "\t\t\t    3. Lainnya\n\n";
		cout << "\t\t\t    Input Menu : ";
		pilihjurusan = "";
		pilihjurusan = getche();
		system("cls");
	jurusan:
	if(pilihjurusan == "1"){
			menuIPA:
			mapel();
			cout << "\t\t\t    1. Biologi\n";
			cout << "\t\t\t    2. Fisika\n";
			cout << "\t\t\t    3. Kimia\n\n";
			cout << "\t\t\t    Input Menu : ";
	string kl;
	kl = getche();
	pilihmapel = atoi(kl.c_str());
			system("cls");
			if(pilihmapel == 1){
				UN();
				cout << "\t\t\t    (Contoh : 89.75))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
				
char ch;
int x;
	ch = _getch();
		goto dd;
		while(ch != 13){
		ch = _getch();
		dd:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto ed;
	while(ch != 13){
	ch = _getch();
	ed:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto rd;
	while(ch != 13){
	ch = _getch();
	rd:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPA[pilihmapel] << "\t\t: ";
				
int v;
ch = _getch();
	goto md;
	while(ch != 13){
	ch = _getch();
	md:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
			}
			else if(pilihmapel == 2){
				UN();
				cout << "\t\t\t    (Contoh : 89.75))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
				
char ch;
int x;
	ch = _getch();
		goto ddd;
		while(ch != 13){
		ch = _getch();
		ddd:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto ea;
	while(ch != 13){
	ch = _getch();
	ea:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto ra;
	while(ch != 13){
	ch = _getch();
	ra:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPA[pilihmapel] << "\t\t: ";
				
int v;
ch = _getch();
	goto ma;
	while(ch != 13){
	ch = _getch();
	ma:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
			}
			else if(pilihmapel == 3){
				UN();
				cout << "\t\t\t    (Contoh : 89.75))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
				
char ch;
int x;
	ch = _getch();
		goto dq;
		while(ch != 13){
		ch = _getch();
		dq:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto eq;
	while(ch != 13){
	ch = _getch();
	eq:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto rq;
	while(ch != 13){
	ch = _getch();
	rq:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPA[pilihmapel] << "\t\t: ";
				
int v;
ch = _getch();
	goto mq;
	while(ch != 13){
	ch = _getch();
	mq:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
			}
			else
			goto menuIPA;
		}
	else if(pilihjurusan == "2"){
			menuIPS:
			mapel();
			cout << "\t\t\t    1. Sosiologi\n";
			cout << "\t\t\t    2. Ekonomi\n";
			cout << "\t\t\t    3. Geografi\n\n";
			cout << "\t\t\t    Input Menu : ";
	string kl;
	kl = getche();
	pilihmapel = atoi(kl.c_str());
			system("cls");
			if(pilihmapel == 1){
				UN();
				cout << "\t\t\t    (Contoh : 89.75))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
				
char ch;
int x;
	ch = _getch();
		goto dw;
		while(ch != 13){
		ch = _getch();
		dw:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto ew;
	while(ch != 13){
	ch = _getch();
	ew:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto rw;
	while(ch != 13){
	ch = _getch();
	rw:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPS[pilihmapel] << "\t\t: ";
				
int v;
ch = _getch();
	goto mw;
	while(ch != 13){
	ch = _getch();
	mw:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
			jumlah = (x+y+z+v)/40;
			}
			else if(pilihmapel == 2){
				UN();
				cout << "\t\t\t    (Contoh : 89.5))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
			
char ch;
int x;
	ch = _getch();
		goto de;
		while(ch != 13){
		ch = _getch();
		de:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto ee;
	while(ch != 13){
	ch = _getch();
	ee:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
	
int z;
ch = _getch();
	goto re;
	while(ch != 13){
	ch = _getch();
	re:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPS[pilihmapel] << "\t\t: ";
			
int v;
ch = _getch();
	goto me;
	while(ch != 13){
	ch = _getch();
	me:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
			}
			else if(pilihmapel == 3){
				UN();
				cout << "\t\t\t    (Contoh : 89.5))\n";
				cout << "\t\t\t    Bahasa Indonesia\t: ";
				
char ch;
int x;
	ch = _getch();
		goto dr;
		while(ch != 13){
		ch = _getch();
		dr:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
				cout << "\n\t\t\t    Bahasa Inggris : ";
	
int y;
ch = _getch();
	goto er;
	while(ch != 13){
	ch = _getch();
	er:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
	
int z;
ch = _getch();
	goto rr;
	while(ch != 13){
	ch = _getch();
	rr:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
				cout << "\n\t\t\t    " << mapelIPS[pilihmapel] << "\t\t: ";
				
int v;
ch = _getch();
	goto mr;
	while(ch != 13){
	ch = _getch();
	mr:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
			}
			else
			goto menuIPS;
	}
	else if(pilihjurusan == "3"){
			system ("cls");
			cout << "\t\t\t    ==============================================================\n";
			cout << "\t\t\t\t\t\tSilahkan input jurusan\n";
			cout << "\t\t\t    ==============================================================\n\n";
			cout << "\t\t\t    Input jurusan : ";
			getline(cin, inputjurusan);
			system("cls");
			cout << "\t\t\t    =============================================================\n";
			cout << "\t\t\t\t\tSilahkan input mata pelajaran pilihan\n";
			cout << "\t\t\t    =============================================================\n\n";
			cout << "\t\t\t    Input mata pelajaran pilihan : ";
			getline(cin, inputmapel);
			system("cls");
			UN();
			cout << "\t\t\t    (Contoh : 89.5))\n";
			cout << "\t\t\t    Bahasa Indonesia : ";

char ch;
int x;
	ch = _getch();
		goto df;
		while(ch != 13){
		ch = _getch();
		df:
		if(ch == '\b'){
        	if(alamat.size() != 0){
      			cout << "\b \b";
          		alamat.erase(alamat.size() - 1, 1);
				if(alamat.size() == 2){
						cout << "\b \b";
						alamat.erase(alamat.size() - 1, 1);
					}
           		}
  	    	continue;
      	}
	    else if(ch >= '0' && ch <= '9'){
			if(alamat.size() <= 4){
				alamat += ch;
				cout << ch;
				if(alamat.size() == 2){
					alamat += ch;
					cout << ".";
					x=atoi(alamat.c_str());
				}
				else
					continue;
				}
				continue;	
           	}
       		else
           		continue;
       	}
		cout << "\n\t\t\t    Bahasa Inggris : ";
		
int y;
ch = _getch();
	goto ef;
	while(ch != 13){
	ch = _getch();
	ef:
	if(ch == '\b'){
       	if(alamat2.size() != 0){
    		cout << "\b \b";
        	alamat2.erase(alamat2.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat2.erase(alamat2.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat2.size() <= 4){
				alamat2 += ch;
				cout << ch;
				if(alamat2.size() == 2){
					alamat2 += ch;
					cout << ".";
					y=atoi(alamat2.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    Matematika : ";
		
int z;
ch = _getch();
	goto rf;
	while(ch != 13){
	ch = _getch();
	rf:
	if(ch == '\b'){
       	if(alamat3.size() != 0){
    		cout << "\b \b";
        	alamat3.erase(alamat3.size() - 1, 1);
			if(alamat3.size() == 2){
					cout << "\b \b";
					alamat3.erase(alamat3.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat3.size() <= 4){
				alamat3 += ch;
				cout << ch;
				if(alamat3.size() == 2){
					alamat3 += ch;
					cout << ".";
					z=atoi(alamat3.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
		cout << "\n\t\t\t    " << inputmapel << " : ";
		
int v;
ch = _getch();
	goto mf;
	while(ch != 13){
	ch = _getch();
	mf:
	if(ch == '\b'){
       	if(alamat4.size() != 0){
    		cout << "\b \b";
        	alamat4.erase(alamat4.size() - 1, 1);
			if(alamat2.size() == 2){
					cout << "\b \b";
					alamat4.erase(alamat4.size() - 1, 1);
				}
        	}
	   	   	continue;
        }
	    else if(ch >= '0' && ch <= '9'){
			if(alamat4.size() <= 4){
				alamat4 += ch;
				cout << ch;
				if(alamat4.size() == 2){
					alamat4 += ch;
					cout << ".";
					v=atoi(alamat4.c_str());
				}
				else
					continue;
			}
			continue;	
        }
       	else
        	continue;
       	}
       	jumlah = (x+y+z+v)/40;
	}
		else{
		cout << "\t\t\t    Kode yang anda pilih tidak ada\n";
		cout << "\t\t\t    Pastikan kode yang anda masukkan benar\n";
		getch();
		system("cls");
		goto menu;
		}
	}
	else{
		cout << "\n\n\t\t\tKode yang anda pilih tidak ada\n";
		cout << "\t\t\tPastikan kode yang anda masukkan benar";
		asalsekolah = "";
		goto perulanganasalsekolah;
	}
	system("cls");
	perulangandadi:
	inputdadi = "";
	system ("cls");
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\tApakah data diri yang diinput sudah benar\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t    *Akibat dari kesalahan mengisi biodata, ditanggung pendaftar\n\n";
	cout << "\t\t\t    Nama\t  : " << nama << endl;
	cout << "\n\t\t\t    NISN\t  : " << nisn << endl;
	cout << "\n\t\t\t    Tempat Lahir  : " << tempatlahir << endl;
	cout << "\n\t\t\t    Tanggal Lahir : " << tanggallahir << endl;
	cout << "\n\t\t\t    Agama\t  : " << agama << endl;
	cout << "\n\t\t\t    Tanggungan Orang Tua : " << tanggungan << endl;
	cout << "\n\t\t\t    Asal Sekolah  : " << sekolah << endl;
	if(asalsekolah == "1"){
		cout << "\n\t\t\t    Jurusan\t  : " << inputjurusan << endl;
	}
	else if (asalsekolah == "2"){
		if (pilihjurusan == "1"){
		cout << "\n\t\t\t    Jurusan\t  : IPA"  << endl;		
		}
		else if (pilihjurusan == "2"){
		cout << "\n\t\t\t    Jurusan\t  : IPS"  << endl;		
		}
		else if (pilihjurusan == "3"){
		cout << "\n\t\t\t    Jurusan\t  : " << inputjurusan << endl;
		}
		
	}
	cout << "\n\t\t\t    *apabila merasa salah saat menginput nilai UN, input 2" << endl <<endl;
	cout << "\t\t\t    1 . Benar\n";
	cout << "\t\t\t    2 . Salah\n";
	cout << "\t\t\t    Input : ";
	inputdadi = getche();
	system("cls");
	if (inputdadi == "1"){
		goto dataortu;
	}
	else if(inputdadi == "2"){
		jumlah = 0;
		alamat = "";
		alamat2 = "";
		alamat3 = "";
		alamat4 = "";
		goto biodata;
	}
	else {
	cout << "\t\t\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\t\t\tPastikan kode yang anda masukkan benar\n";
	inputdadi = "";
	getch();
	goto perulangandadi;
	}
	
	dataortu:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tData Diri Orang Tua\n";
	cout << "\t\t\t    ==============================================================\n\n";
	cout << "\t\t\t    Note : Isi '-' Jika tidak ada\n";
	cout << "\n\t\t\t(Contoh : Muhammad Rezky)";
	cout << "\n\t\t\t    Nama Ayah : ";
	getline(cin, namaayah);
	cout << "\n\t\t\t(Contoh : Muhammad Rezky)";
	cout << "\n\t\t\t    Nama Ibu : ";
	getline(cin, namaibu);
	cout << "\n\t\t\t(Contoh : Muhammad Rezky)";
	cout << "\n\t\t\t    Nama Wali : ";
	getline(cin, namawali);
	cout << "\n\t\t\t(Contoh : Pegawai Swasta)";
	cout << "\n\t\t\t    Pekerjaan Ayah : ";
	getline(cin, kerjaayah);
	cout << "\n\t\t\t(Contoh : Pegawai Swasta)";
	cout << "\n\t\t\t    Pekerjaan Ibu : ";
	getline(cin, kerjaibu);
	cout << "\n\t\t\t(Contoh : Pegawai Swasta)";
	cout << "\n\t\t\t    Pekerjaan Wali : ";
	getline(cin, kerjawali);
	cout << "\n\t\t\t(Contoh : Jl.Suryanata Perum. Villa Damai No.20 Rt.20 )";
	cout << "\n\t\t\t    Alamat Ayah : ";
	getline(cin, alamatayah);
	cout << "\n\t\t\t(Contoh : Jl.Suryanata Perum. Villa Damai No.20 Rt.20 )";
	cout << "\n\t\t\t    Alamat Ibu : ";
	getline(cin, alamatibu);
	cout << "\n\t\t\t(Contoh : Jl.Suryanata Perum. Villa Damai No.20 Rt.20 )";
	cout << "\n\t\t\t    Alamat Wali : ";
	getline(cin, alamatwali);
	penghasilanortu1:
	cout << "\n\t\t\t    Penghasilan Orang Tua : \n";
	cout << "\t\t\t    (Penghasilan bersih yang diterima oleh kedua orang tua atau wali)\n";
	cout << "\t\t\t    1. Rp.0 - Rp.3.200.000,00\n";
	cout << "\t\t\t    2. Rp.3.200.000,00 - Rp.5.000.000,00\n";
	cout << "\t\t\t    3. Rp.5.000.000,00 ke atas\n";
	cout << "\t\t\t    Input : ";
	inputpenghasilan = "";
	inputpenghasilan = getche();
	if (inputpenghasilan == "1"){
		penghasilanortu = "Rp.0 - Rp.3.200.000,00";
	}
	else if (inputpenghasilan == "2"){
		penghasilanortu = "Rp.3.200.000,00 - Rp.5.000.000,00";
	}
	else if (inputpenghasilan == "3"){
		penghasilanortu = "> Rp.5.000.000,00";
	}
	else {
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputpenghasilan = "";
	getch();
	goto penghasilanortu1;
	}
	
	system("cls");
	perulangandadiortu:
	system("cls");
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\tApakah data diri orang tua yang diinput sudah benar\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t    *Akibat dari kesalahan mengisi biodata, ditanggung pendaftar\n\n";
	cout << "\t\t\t    Nama Ayah\t  : " << namaayah << endl;
	cout << "\n\t\t\t    Nama Ibu\t  : " << namaibu << endl;
	cout << "\n\t\t\t    Nama Wali\t  : " << namawali << endl;
	cout << "\n\t\t\t    Pekerjaan Ayah : " << kerjaayah << endl;
	cout << "\n\t\t\t    Pekerjaan Ibu  : " << kerjaibu << endl;
	cout << "\n\t\t\t    Pekerjaan Wali : " << kerjawali << endl;
	cout << "\n\t\t\t    Alamat Ayah   : " << alamatayah << endl;
	cout << "\n\t\t\t    Alamat Ibu    : " << alamatibu << endl;
	cout << "\n\t\t\t    Alamat Wali   : " << alamatwali << endl;
	cout << "\n\t\t\t    Penghasilan orang tua\t : " << penghasilanortu << endl << endl;
	cout << "\t\t\t    1 . Benar\n";
	cout << "\t\t\t    2 . Salah\n";
	cout << "\t\t\t    Input : ";
	inputdadiortu = "";
	inputdadiortu = getche();
	system("cls");
	if (inputdadiortu == "1"){
		goto atransferturumah;
	}
	else if(inputdadiortu == "2"){
		goto dataortu;
	}
	else{
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputdadiortu = "";
	getch();
	goto perulangandadiortu;
	}
	atransferturumah:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\tAset yang dimiliki keluarga pendaftar\n";
	cout << "\t\t\t    ==============================================================\n\n";
	cout << "\t\t\t    A. Aset rumah\n";
	cout << "\t\t\t    Kepemilikan\n";
	cout << "\t\t\t    1. Sendiri\n";
	cout << "\t\t\t    2. Sewa\n";
	cout << "\t\t\t    3. Menumpang\n";
	cout << "\t\t\t    Input : ";
	inputasetrumah = "";
	inputasetrumah = getche();
	if (inputasetrumah == "1"){
		asetrumah = "Sendiri";
	}
	else if (inputasetrumah == "2"){
		asetrumah = "Sewa";
	}
	else if (inputasetrumah == "3"){
		asetrumah = "Menumpang";
	}
	else  {
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputasetrumah = "";
	getch();
	system("cls");
	goto atransferturumah;
	}
	system ("cls");
	
	atransferturoda2:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\tAset yang dimiliki keluarga pendaftar\n";
	cout << "\t\t\t    ==============================================================\n\n";
	cout << "\t\t\t    B. Aset Kendaraan\n";
	cout << "\t\t\t    Jumlah Kendaraan roda 2 yang dimiliki\n";
	cout << "\t\t\t    1. Tidak Memiliki\n";
	cout << "\t\t\t    2. 1 unit\n";
	cout << "\t\t\t    3. Lebih Dari 1 unit\n";
	cout << "\t\t\t    Input : ";
	inputkendaraan2 = "";
	inputkendaraan2 = getche();
	if (inputkendaraan2 == "1"){
		asetroda2 = "Tidak memiliki";
	}
	else if (inputkendaraan2 == "2"){
		asetroda2 = "1 unit";
	}
	else if (inputkendaraan2 == "3"){
		asetroda2 = "Lebih Dari 1 unit";
	}
	else {
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputkendaraan2 = "";
	getch();
	system("cls");
	goto atransferturoda2;
	}
	system ("cls");
	
	atransferturoda4:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\tAset yang dimiliki keluarga pendaftar\n";
	cout << "\t\t\t    ==============================================================\n\n";
	cout << "\t\t\t    B. Aset Kendaraan\n";
	cout << "\t\t\t    Jumlah Kendaraan roda 4 yang dimiliki\n";
	cout << "\t\t\t    1. Tidak Memiliki\n";
	cout << "\t\t\t    2. 1 unit\n";
	cout << "\t\t\t    3. Lebih Dari 1 unit\n";
	cout << "\t\t\t    Input : ";
	inputkendaraan4 = "";
	inputkendaraan4 = getche();
	if (inputkendaraan4 == "1"){
		asetroda4 = "Tidak memiliki";
	}
	else if (inputkendaraan4 == "2"){
		asetroda4 = "1 unit";
	}
	else if (inputkendaraan4 == "3"){
		asetroda4 = "Lebih dari 1 unit";
	}
	else {
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputkendaraan4 = "";
	getch();
	system("cls");
	goto atransferturoda4;
	}
	system ("cls");
	
	perulanganaset:
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\tApakah Aset yang diinput sudah benar\n";
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t    *Akibat dari kesalahan mengisi biodata, ditanggung pendaftar\n\n";
	cout << "\t\t\t    Aset rumah: Kepemilikan\t  : " << asetrumah << endl;
	cout << "\n\t\t\t    Aset kendaraan; Roda 2 \t  : " << asetroda2 << endl;
	cout << "\n\t\t\t    Aset kendaraan; Roda 4 \t  : " << asetroda4 << endl << endl;
	cout << "\t\t\t    1 . Benar\n";
	cout << "\t\t\t    2 . Salah\n";
	cout << "\t\t\t    Input : ";
	inputasetakhir = "";
	inputasetakhir = getche();
	system("cls");
	if (inputasetakhir == "1"){
	
	}
	else if(inputasetakhir == "2"){
		goto atransferturumah;
	}
	else {
	cout << "\n\t\t\tKode yang anda pilih tidak ada\n";
	cout << "\t\t\tPastikan kode yang anda masukkan benar\n";
	inputasetakhir = "";
	getch();
	system("cls");
	goto perulanganaset;
	}
	int ulang = 0;
	do{
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t Mohon tunggu sebentar data anda sedang di proses " << ulang << "%\n";
	cout << "\t\t\t    ==============================================================\n";
	ulang += 1;
	system ("cls");
	}while(ulang != 100);
	// poin nilai pribadi
	if (jumlah >= 81 && jumlah <= 89){
		poin += 6;
	}
	else if (jumlah <= 80){
		poin += 0;
	}
	else if(jumlah >= 90){
		poin += 8;
	}
	// poin tanggungan
	if (inputtanggungan == "1"){
	 	if (inputpenghasilan == "1"){
		poin += 2;
		}
		else if (inputpenghasilan == "2"){
		poin += 1;	
		}
		else if (inputpenghasilan == "3"){
		poin += 0;	
		}
	}
	
	else if (inputtanggungan == "2"){
		if (inputpenghasilan == "1"){
		poin += 3;
		}
		else if (inputpenghasilan == "2"){
		poin += 2;
		}
		else if (inputpenghasilan == "3"){
		poin += 1;
		}
	}
		
	// poin aset rumah
	if (inputasetrumah == "1"){
		poin += 0;
	}
	else if (inputasetrumah == "2"){
		poin += 1;
	}
	else if (inputasetrumah == "3"){
		poin += 3;
	}
	//poin aset kendaraan
	if (inputkendaraan2 == "1"){
		poin += 2;
	}
	else if (inputkendaraan2 == "2"){
		poin += 1;
	}
	else if (inputkendaraan2 == "3"){
		poin += 0;
	}
	
	if (inputkendaraan4 == "1"){
		poin += 0;
	}
	else if (inputkendaraan4 == "2"){
		poin += -1;
	}
	else if (inputkendaraan4 == "3"){
		poin += -2;
	}
	
	if (poin >=9){
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\t\t\t\tSelamat Anda Lulus\n";
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\tSelamat atas lulusnya pendaftaran program beasiswa\n";
		cout << "\t\t\tPersyaratan - persyaratan untuk mendapatkan beasiswa\n";
		cout << "\t\t\t1. Indeks prestasi harus dari batas minimal\n";
		cout << "\t\t\t2. Mengikuti kegiatan - kegiatan yang diwajibkan oleh pihak kampus\n";
		cout << "\t\t\t3. Tidak melakukan pelanggaran hukum\n";
		cout << "\t\t\t4. Harus lulus kuliah setidaknya 4 tahun\n";
		cout << "\t\t\t5. Tidak melanggar peraturan kontrak beasiswa\n";
		cout << "\t\t\t6. IPK minimal 3.0 tiap semester\n";
		getch();
		system("cls");
	}
	
	else if (poin < 9){
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\t\t\t\tMaaf Anda Tidak lulus\n";
		cout << "\t\t\t    ==============================================================\n";
		cout << "\t\t\tMohon maaf anda tidak lulus pendaftaran program beasiswa\n";
		cout << "\t\t\tCoba lagi lain kali di tahun depan\n\n";
		cout << "\t\t\tSemangat :)\n";
		getch();
		system ("cls");
	}
	cout << "    ==============================================================\n";
	cout << "\t  Apakah anda ingin mengulang program ?[Y=lanjut]\n";
	cout << "    ==============================================================\n";
	status = getche();
	jumlah = 0;
	poin = 0;
	password = "";
	username = "";
	alamat = "";
	alamat2 = "";
	alamat3 = "";
	alamat4 = "";
	c =' ';
	cin.ignore();
	}while (status == 'y' || status =='Y');
	system ("cls");
	cout << "\t\t\t    ==============================================================\n";
	cout << "\t\t\t\t\t\tPROGRAM BY Gabriel D Lawrence\n";	
	cout << "\t\t\t    ==============================================================\n\n";
	return 0;
}
