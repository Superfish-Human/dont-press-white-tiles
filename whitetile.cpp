#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
string tiles[4]={"¡ö¡õ¡õ¡õ","¡õ¡ö¡õ¡õ","¡õ¡õ¡ö¡õ","¡õ¡õ¡õ¡ö"};
int tmp[8]={0,1,2,3,0,1,2,3};
int control=0;
int score=0;
void initGame(){
	tmp[0]=rand()%4;
	tmp[1]=rand()%4;
	tmp[2]=rand()%4;
	tmp[3]=rand()%4;
	tmp[4]=rand()%4;
	tmp[5]=rand()%4;
	tmp[6]=rand()%4;
	tmp[7]=rand()%4;
	return;
}
void printGame(){
	for(int i=7;i>=0;i--){
		cout<<tiles[tmp[i]]<<endl;
	}
	return;
}
void updateGame(){
	tmp[0]=tmp[1];
	tmp[1]=tmp[2];
	tmp[2]=tmp[3];
	tmp[3]=tmp[4];
	tmp[4]=tmp[5];
	tmp[5]=tmp[6];
	tmp[6]=tmp[7];
	tmp[7]=rand()%4;
	return;
}
void playGame(){
	system("cls");
	cout<<"Don't press the white tile!"<<endl;
	cout<<"Controls: 1 2 3 4"<<endl;
	printGame();
	//cout<<tmp[0];
	system("pause>nul");
	if(GetKeyState('1') & 0x8000){
		control=0;
	}
	if(GetKeyState('2') & 0x8000){
		control=1;
	}
	if(GetKeyState('3') & 0x8000){
		control=2;
	}
	if(GetKeyState('4') & 0x8000){
		control=3;
	}
	if(control==tmp[0]){
		score=score+1;
		updateGame();
		playGame();
	}else{
		return;
	}
}
int main(){
	system("color f0");
	srand((unsigned) time(0));
	cout<<"Don't press the white tile!"<<endl;
	cout<<"Controls: 1 2 3 4"<<endl;
	system("pause");
	initGame();
	playGame();
	cout<<"Score: "<<score<<endl;
	cout<<"Written by Superfish in C++"<<endl;
	system("pause");
	return 0;
}
