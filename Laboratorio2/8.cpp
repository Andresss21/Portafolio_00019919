#include <iostream>
#include <iostream>
using namespace std;
int contador=3,y=0;
int valor;
int main()
{
	int matriz[5][5];
	for (int i=0;i<5;i++){
    	for(int j=0;j<5;j++){
    	matriz[i][j]=0;
    	}
	}
	for(int x=0;x<5;x++){
	y=0;
	cout<<"y" <<y<<endl;
	    cout<<"x "<<x<<endl;
	for(int y;y<5-contador;y++){
	    cout<<"ingresa el valor a introducir : ";
	    cin>>valor;
	    matriz[x][y]=valor;
	    cout<<"y" <<y<<endl;
	    cout<<"x "<<x<<endl;
	    }
	}

	for(int l=0;l<5;l++){
	    for(int d=0;d<5;d++){
	     	cout<<matriz[l][d];
	  }
 cout<<endl;
 }
}
