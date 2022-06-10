#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }
 
int main(){
	int opcion1,opcion2,opcion3,codigo1,codigo2,codigosabor;
	string cine,sede,pelicula,popc,gaseo,sabor;
	for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
	gotoxy(50,2);cout<<"ELIJA EL CINE";
	for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
	for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
		do{		
			gotoxy(40,3);{
			cout<<endl<<endl<<endl<<"1. Cineplanet"<<endl;
			cout<<"2. Cinemark"<<endl;
			cout<<"3. CineStar"<<endl;
			cout<<"4. Cinepolis"<<endl;
			cout<<"5. UVK"<<endl;
			cout<<"-----> ";
			cin>>opcion1;
			}
			if(opcion1!=1 && opcion1!=2 && opcion1!=3 && opcion1!=4 && opcion1!=5){
				cout<<"ERROR. Ingrese una opcion valida"<<endl;
			system("pause");
			}system("cls");
		}while(opcion1!=1 && opcion1!=2 && opcion1!=3 && opcion1!=4 && opcion1!=5);
		system("cls");
		if(opcion1==1){
			cine="Cineplanet";
		}
		else if(opcion1==2){
			cine="Cinemark";
		}
		else if(opcion1==3){
			cine="CineStar";
		}
		else if(opcion1==4){
			cine="Cinepolis";
		}
		else if(opcion1==5){
			cine="UVK";
		}
		for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
		gotoxy(50,2);cout<<cine<<endl<<endl;
		for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
		switch(opcion1){
			case 1:{
				do{
				cout<<endl<<endl<<endl<<"Elija el local:\n"<<endl;
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
				if(opcion2==1){
					sede="Brasil";
				}
				else if(opcion2==2){
					sede="Centro";
				}
				else if(opcion2==3){
					sede="Mall del Sur";
				}
				else if(opcion2==4){
					sede="Angamos";
				}
				break;
			}
			case 2:{
				do{
					cout<<endl<<"Elija el local:\n"<<endl;
					cout<<"1. Cinemark Angamos"<<endl;
					cout<<"2. Cinemark Comas"<<endl;
					cout<<"3. Cinemark Jockey Plaza"<<endl;
					cout<<"4. Cinemark Mega Plaza"<<endl;
					cout<<"\nIngrese la opcion deseada ---> ";
					cin>>opcion2;
					if(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4){
					cout<<"ERROR. Ingrese una opcion valida"<<endl;
					}
				}while(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4);
				system("cls");
					if(opcion2==1){
						sede="Angamos";
					}
					else if(opcion2==2){
						sede="Comas";
					}
					else if(opcion2==3){
						sede="Jockey Plaza";
					}
					else if(opcion2==4){
						sede="Mega Plaza";
					}
				break;
			}
			case 3:{
				do{
					cout<<endl<<"Elija el local:\n"<<endl;
					cout<<"1. CineStar Benavides"<<endl;
					cout<<"2. CineStar San Juan"<<endl;
					cout<<"3. CineStar Brenia"<<endl;
					cout<<"4. CineStar Comas"<<endl;
					cout<<"\nIngrese la opcion deseada ---> ";
					cin>>opcion2;
					if(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4){
					cout<<"ERROR. Ingrese una opcion valida"<<endl;
					}
				}while(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4);
				system("cls");
					if(opcion2==1){
						sede="Benavides";
					}
					else if(opcion2==2){
						sede="San Juan";
					}
					else if(opcion2==3){
						sede="Brenia";
					}
					else if(opcion2==4){
						sede="Comas";
					}
				break;
			}
			case 4:{
				do{
				cout<<endl<<"Elija el local:\n"<<endl;
				cout<<"1. Cinepolis Plaza Norte"<<endl;
				cout<<"2. Cinepolis Santa Anita"<<endl;
				cout<<"3. Cinepolis Santa Catalina"<<endl;
				cout<<"\nIngrese la opcion deseada ---> ";
				cin>>opcion2;
				if(opcion2!=1 && opcion2!=2 && opcion2!=3){
					cout<<"ERROR. Ingrese una opcion valida"<<endl;
				system("pause");
				}system("cls");
				}while(opcion2!=1 && opcion2!=2 && opcion2!=3 );
				system("cls");
				if(opcion2==1){
					sede="Plaza Norte";
				}
				else if(opcion2==2){
					sede="Santa Anita";
				}
				else if(opcion2==3){
					sede="Santa Catalina";
				}
				break;
			}
			case 5:{
				do{
				cout<<endl<<"Elija el local:\n"<<endl;
				cout<<"1. UVK San Martin"<<endl;
				cout<<"2. UVK Platino Basadre"<<endl;
				cout<<"3. UVK Platino Panorama"<<endl;
				cout<<"4. UVK El Agustino"<<endl;
				cout<<"\nIngrese la opcion deseada ---> ";
				cin>>opcion2;
				if(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4){
					cout<<"ERROR. Ingrese una opcion valida"<<endl;
				system("pause");
				}system("cls");
				}while(opcion2!=1 && opcion2!=2 && opcion2!=3 && opcion2!=4);
				system("cls");
				if(opcion2==1){
					sede="San Martin";
				}
				else if(opcion2==2){
					sede="Basadre";
				}
				else if(opcion2==3){
					sede="Panorama";
				}
				else if(opcion2==4){
					sede="El Agustino";
				}
				break;
			}
		}
		for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
				gotoxy(50,2);cout<<cine<<endl<<endl;
		for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
				if(opcion2==1 || opcion2==2|| opcion2==3 || opcion2==4){
				do{
					cout<<endl<<"PELICULAS EN CARTELERA:\n"<<endl;
					cout<<"1. El rey Leon"<<endl;
					cout<<"2. Matrix"<<endl;
					cout<<"3. Avengers"<<endl;
					cout<<"4. Forrest Gump"<<endl;
					cout<<"5. Harry Potter"<<endl;
					cout<<"Ingrese la opcion deseada: "<<endl;
					cin>>opcion3;
					if(opcion3!=1 && opcion3!=2 && opcion3!=3 && opcion3!=4 && opcion3!=5){
					cout<<"Error. Ingrese una opcion valida"<<endl;
					}
					system("cls");
				}while(opcion3!=1 && opcion3!=2 && opcion3!=3 && opcion3!=4 && opcion3!=5);
				}
				if(opcion3==1){
					pelicula="El rey Leon";
				}
				else if(opcion3==2){
					pelicula="Matrix";
				}
				else if(opcion3==3){
					pelicula="Avengers";
				}
				else if(opcion3==4){
					pelicula="Forrest Gump";
				}
				else if(opcion3==5){
					pelicula="Harry Potter";
				}
				system("cls");
				for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
				gotoxy(45,2);cout<<"Dulceria "<<cine<<endl<<endl;
				for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
				do{
					cout<<endl<<"Pop Corn: "<<endl;
					cout<<endl<<"Codigo\t\t Producto"<<endl;
					cout<<"1.\t\t Pop Corn Grande"<<endl;
					cout<<"2.\t\t Pop Corn Mediano"<<endl;
					cout<<"3.\t\t Pop Corn Pequenio"<<endl;
					cout<<"4. No deseo ninguno de los productos"<<endl;
					cout<<"Elija el codigo deseado: ";
					cin>>codigo1;
					if(codigo1!=1 && codigo1!=2 && codigo1!=3 && codigo1!=4){
						cout<<"ERROR. Elija un codigo deseado";
					}
					system("cls");
				}while(codigo1!=1 && codigo1!=2 && codigo1!=3 && codigo1!=4);
				if(codigo1==1){
					popc="Grande";	
				}
				else if(codigo1==2){
					popc="Mediano";
				}
				else if(codigo1==3){
					popc="Pequenio";
				}
				for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
				gotoxy(50,2);cout<<"Dulceria "<<cine<<endl<<endl;
				for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
				do{
					cout<<endl<<"Gaseosa: "<<endl;
					cout<<"Codigo\t\t Producto"<<endl;
					cout<<"1.\t\t Gaseosa Grande"<<endl;
					cout<<"2.\t\t Gaseosa Mediana"<<endl;
					cout<<"3.\t\t Gaseosa Pequenia"<<endl;
					cout<<"4.No deseo ninguno de los productos"<<endl;
					cout<<"Elija el codigo deseado:";
					cin>>codigo2;
					if(codigo2!=1 && codigo2!=2 && codigo2!=3 && codigo2!=4){
						cout<<"ERROR. Elija un codigo deseado";
					}
				}while(codigo2!=1 && codigo2!=2 && codigo2!=3 && codigo2!=4);
				system("cls");
				if(codigo2==1){
					gaseo="Grande";
				}
				else if(codigo2==2){
					gaseo="Mediana";
				}
				else if(codigo2==3){
					gaseo="Pequenia";
				}
				for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
				gotoxy(50,2);cout<<"Sabor de la gaseosa"<<endl<<endl;
				for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
				for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
				if(codigo2==1 || codigo2==2 || codigo2==3){
					do{
					cout<<endl<<"Elija su sabor preferido:"<<endl;
					cout<<"1. Inka Cola"<<endl;
					cout<<"2. Coca Cola"<<endl;
					cout<<"3. Fanta"<<endl;
					cout<<"4. Sprite"<<endl;
					cout<<"Elija su sabor preferido: ";
					cin>>codigosabor;
					if(codigosabor!=1 && codigosabor!=2 && codigosabor!=3 && codigosabor!=4){
						cout<<"ERROR. Elija una opcion valida";
					}
					}while(codigosabor!=1 && codigosabor!=2 && codigosabor!=3 && codigosabor!=4);
					if(codigosabor==1){
						sabor="Inka Cola";
					}
					else if(codigosabor==2){
						sabor="Coca Cola";
					}
					else if(codigosabor==3){
						sabor="Fanta";
					}
					else if(codigosabor==4){
						sabor="Sprite";
					}
					system("cls");
				}
	system("cls");
	for(int i=0;i<=100;i++){
				gotoxy(10+i,0);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(10,0+i);
				cout<<"*";
				}
				gotoxy(50,2);cout<<"Eleccion Finalizada"<<endl<<endl;
	for(int i=0;i<=100;i++){
				gotoxy(10+i,5);
				cout<<"*";
				}
		for(int i=0;i<6;i++){
				gotoxy(110,0+i);
				cout<<"*";
				}
	cout<<endl<<"Cine elegido: "<<cine<<endl;
	cout<<"Local elegido de "<<cine<<": "<<sede<<endl;
	cout<<"Pelicula elegida: "<<pelicula<<endl;
	if(codigo1==4 && codigo2!=4){
			cout<<"\tDulceria:"<<endl;
			cout<<"Gaseosa "<<gaseo<<" de sabor "<<sabor<<endl;
	}
	else if(codigo2==4 && codigo1!=4){
			cout<<"\tDulceria:"<<endl;
			cout<<"Pop Corn "<<popc;
	}
	else if(codigo1==4 && codigo2==4){
			cout<<"\tDulceria:"<<endl;
			cout<<"No hubo producto elegido";
	}
	else if(codigo1!=4 && codigo2!=4){
			cout<<"\tDulceria:"<<endl;
			cout<<"Pop Corn "<<popc<<endl;
			cout<<"Gaseosa "<<gaseo<<" de sabor "<<sabor;
	}
	return 0;
}
