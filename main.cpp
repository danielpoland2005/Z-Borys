#include<iostream>
#include<windows.h>

using namespace std;

void wypiszTablice(char T[6][6]){
	system("cls");
	for(int i = 0; i <  6; i++){
		for(int j = 0; j < 6; j++){
			cout<<T[i][j]<<" ";
		}cout<<endl;
	}
	Sleep(500);
}

void tura(char T[6][6], int pozycja[2], int kierunek){
	if(T[pozycja[0]][pozycja[1]] == '.'){	
		T[pozycja[0]][pozycja[1]] = 'x';		
	}else T[pozycja[0]][pozycja[1]] = '.';
		
	if(kierunek == 1){
		if(pozycja[1] == 5){
			pozycja[1] = 0;
		}else pozycja[1]++;
	}else if(kierunek == 2){
		if(pozycja[0] == 5){
			pozycja[0] = 0;
		}else pozycja[0]++;
	}else if(kierunek == 3){
		if(pozycja[1] == 0){
			pozycja[1] = 5;
		}else pozycja[1]--;
	}else if(kierunek == 4){
		if(pozycja[0] == 0){
			pozycja[0] = 5;
		}else pozycja[0] --;
	}
}

int main(){
	
	char T[6][6] = {'.', '.', '.', '.', '.', '.',
					'.', '.', '.', '.', '.', '.',
					'.', '.', '.', '.', '.', '.',
					'.', '.', '.', '.', '.', '.',
					'.', '.', '.', '.', '.', '.',
					'.', '.', '.', '.', '.', '.',};
	int pozycja[2] = {2, 2}; 
	int kierunek = 4;
	
	while(true){
		wypiszTablice(T);
		
		if(T[pozycja[0]][pozycja[1]] == '.'){
			if(kierunek <= 1){
			kierunek = 4;
			}else kierunek --;
		}else{
			if(kierunek >= 4){
			kierunek = 1;
			}else kierunek ++;
		}
		
		tura(T, pozycja, kierunek);	
	}
	
	return 0;
}
