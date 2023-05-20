#include <iostream>
#include "kalkulator.cc"
using namespace std;


int main(){
	Kalkulator k;
	int pilih;
	char pil;
	
menu:
	cout<<"0.Exit"<<endl;
	cout<<"1.Tambah"<<endl;
	cout<<"2.Kurang"<<endl;
	cout<<"3.Bagi"<<endl;
	cout<<"4.Kali"<<endl;
	cin>>pilih;
	switch(pilih){
		case 0: 
			goto keluar;
			break;
		case 1:
			k.inputan();
			cout<<"hasil : "<<k.tambah()<<endl;
			break;
        case 2:
			k.inputan();
			cout<<"hasil : "<<k.kurang()<<endl;
			break;
        case 3:
			k.inputan();
			cout<<"hasil : "<<k.bagi()<<endl;
			break;
        case 4:
			k.inputan();
			cout<<"hasil : "<<k.kali()<<endl;
			break;
		default:
			cout<<"pilihan salah"<<endl;
			break;
		}
		cout<<"ingin mengulangi? (y/t)";
		cin>>pil;
		if ((pil == 'y')||(pil=='Y'))
        {
			goto menu;
		}
        else if ((pil=='t')||(pil=='T'))
        {
			goto keluar;
		}
keluar:
	cout<<"thanks"<<endl;
	return 0;
}