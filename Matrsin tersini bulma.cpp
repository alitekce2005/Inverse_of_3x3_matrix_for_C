#include <iostream>

using namespace std;

int main(){
	float matris [3][3];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			cout << "Matrisin a" << i+1 << k+1 << ". elemaini giriniz : " << " " ;
			cin >> matris[i][k];
		}
	}
	cout << endl;
	 cout << "Girilen matris: " << endl;
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cout << matris[i][k] << " ";
        }
        cout << endl;
    }
	//detA//
	float a11, a12, a13, deta;
    a11 = matris[0][0] * ((matris[1][1] * matris[2][2]) - (matris[1][2] * matris[2][1]));
    a12 = matris[0][1] * ((matris[1][0] * matris[2][2]) - (matris[1][2] * matris[2][0]));
    a13 = matris[0][2] * ((matris[1][0] * matris[2][1]) - (matris[1][1] * matris[2][0]));
    deta = a11 - a12 + a13; 
	 
     if (deta == 0) {
        cout << "Matrisin tersi yoktur, determinant 0!" << endl;
        return 0;
    }
	//detA//
	//ek matris//
	float b11,b12,b13,b21,b22,b23,b31,b32,b33;
	b11 = (1) * ((matris[1][1] * matris[2][2]) - (matris[1][2] * matris[2][1]));
    b12 = (-1) * ((matris[1][0] * matris[2][2]) - (matris[2][0] * matris[1][2]));
    b13 = (1) * ((matris[1][0] * matris[2][1]) - (matris[2][0] * matris[1][1]));
	
    b21 = (-1) * ((matris[0][1] * matris[2][2]) - (matris[2][1] * matris[0][2]));
    b22 = (1) * ((matris[0][0] * matris[2][2]) - (matris[2][0] * matris[0][2]));
    b23 = (-1) * ((matris[0][0] * matris[2][1]) - (matris[2][0] * matris[0][1]));

    b31 = (1) * ((matris[0][1] * matris[1][2]) - (matris[1][1] * matris[0][2]));
    b32 = (-1) * ((matris[0][0] * matris[1][2]) - (matris[1][0] * matris[0][2]));
    b33 = (1) * ((matris[0][0] * matris[1][1]) - (matris[0][1] * matris[1][0]));
	//ek matris//
	//transpoz//
	float ektranspoz[3][3] = {
        {b11, b21, b31},
        {b12, b22, b32},
        {b13, b23, b33}
    };
	//transpoz//
	//ters hesaplama//
	float matristersi[3][3];
	for(int i=0;i<3;i++){
		for(int k=0;k<3;k++){
			matristersi[i][k]=ektranspoz[i][k] / deta;
		}
	}
	//ters hesaplama//
	cout << endl;
	cout << "Matrisin tersi: " << endl;
    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            cout << matristersi[i][k] << " ";
        }
        cout << endl;
    }
	return 0;
	}
