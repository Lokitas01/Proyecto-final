#include <iostream>
using namespace std;
int main(){
	int opcion1,opcion2,opcion3;
	char s,n;
		do{
			cout<<"\t\tELIJA EL CINE\n";
			cout<<"1. Cineplanet"<<endl;
			cout<<"2. Cinemark"<<endl;
			cout<<"3. CineStar"<<endl;
			cout<<"4. Cinepolis"<<endl;
			cout<<"5. UVK"<<endl;
			cout<<"-----> ";
			cin>>opcion1;
			if(opcion1!=1 && opcion1!=2 && opcion1!=3 && opcion1!=4 && opcion1!=5){
				cout<<"ERROR. Ingrese una opcion valida"<<endl;
			system("pause");
			}system("cls");
		}while(opcion1!=1 && opcion1!=2 && opcion1!=3 && opcion1!=4 && opcion1!=5);
		system("cls");
		switch(opcion1){
		case 1: {
			do{
				cout<<"\t\tCINEPLANET\n";
				cout<<"Elija el local:\n"<<endl;
				cout<<"1. Cineplanet Brasil"<<endl;
				cout<<"2. Cineplanet Centro"<<endl;
				cout<<"3. Cineplanet Mall del Sur"<<endl;
				cout<<"4. Cineplanet Angamos"<<endl;
				cout<<"\nIngrese la opcion deseada ---> ";
				cin>>opcion2;
				if(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4){
					cout<<"ERROR. Ingrese una opcion valida"<<endl;
				system("pause");
				}system("cls");
			}while(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4);
			system("cls");
			if(opcion2==1 || opcion2==2|| opcion2==3 || opcion2==4){
				do{
					cout<<"\t\tCINEPLANET\n";
					cout<<"PELICULAS EN CARTELERA:\n"<<endl;
					cout<<"1. El rey Leon"<<endl;
					cout<<"2. Matrix"<<endl;
					cout<<"3. Avengers"<<endl;
					cout<<"4. Forrest Gump"<<endl;
					cout<<"5. Harry Potter"<<endl;
					cout<<"Ingrese la opcion deseada ---> ";
					cin>>opcion3;
					if(opcion3!=1 && opcion3!=2 && opcion3!=3 && opcion3!=4 && opcion3!=5){
					cout<<"Error. Ingrese una opcion valida"<<endl;
					}
					system("cls");
				}while(opcion3!=1 && opcion3!=2 && opcion3!=3 && opcion3!=4 && opcion3!=5);
			}
	break;}
		case 2:{
			break;
		}
		case 3:{
			break;
		}
		case 4:{
			break;
		}
		case 5:{
			break;
		}
	
	}
	return 0;
}
