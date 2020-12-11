#include <iostream>
using namespace std;

unsigned long int triangle(int n){
	unsigned long int result = n + 1;
	result = n * result;
	result = result / 2;
	return result;
}

unsigned long int pentagon(int n){
	unsigned long int result = 3 * n;
	result = result - 1;
	result = result * n;
	result = result / 2;
	return result;
}

unsigned long int hexagon(int n){
	unsigned long int result = 2 * n;
	result = result - 1;
	result = n * result;
	return result;
}

int main(){
	int tri = 286;
	int pen = 166;
	int hex = 144;
	while(true){
		cout<<"TRI:"<<triangle(tri)<<" PEN:"<<pentagon(pen)<<" HEX:"<<hexagon(hex)<<"\r";
		if(triangle(tri) == pentagon(pen)){
			if(pentagon(pen) == hexagon(hex)){
				cout<<endl<<tri<<" "<<pen<<" "<<hex<<endl;
				cout<<triangle(tri)<<" "<<pentagon(pen)<<" "<<hexagon(hex)<<endl;
				return 0;
			}
		}
		tri++;
		while(triangle(tri)>pentagon(pen))
			pen++;
		while(pentagon(pen)>hexagon(hex))
			hex++;
	}
	return 0;
}