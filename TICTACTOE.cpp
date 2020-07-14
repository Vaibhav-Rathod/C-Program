#include<iostream>
using namespace std;
 char tik[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
 bool draw=false;
 int c,r,co;
 char turn='X';
 bool gameover(){
 	for(int i=0;i<3;i++)
 		if(tik[i][0]==tik[i][1]&&tik[i][0]==tik[i][2])
		return true;
		else if(tik[i][i]==tik[i+1][i+1]&&tik[i][i]==tik[i+2][i+2]||tik[1][1]==tik[0][2]&&tik[1][1]==tik[2][0])
			return true;
	
		
	 for(int i=0;i<3;i++)
	 	for(int j=0;j<3;j++)
	 		if(tik[i][j]!='X'&&tik[i][j]!='O')
			 return false;
	 
			draw=true;
	return true;
	 
	 
 }
 void player(){
 if(turn=='X' )
 	cout<<"\t PLAYER1 [X] TURN:";
else if(turn=='O')
 		cout<<"\t PLAYER2 [O] TURN:";
	 cin>>c;
 
 	switch(c)
{
	case 1:	r=0;co=0;break;
	case 2:	r=0;co=1;break;
	case 3:	r=0;co=2;break;
	case 4:	r=1;co=0;break;
	case 5:	r=1;co=1;break;
	case 6:	r=1;co=2;break;
	case 7:	r=2;co=0;break;
	case 8:	r=2;co=1;break;
	case 9:	r=2;co=2;break;
	default: cout<<"\tEnter right number\n";
				break;
}
 if(turn=='X' && tik[r][co]!='X' && tik[r][co]!='O'){
 	tik[r][co]='X';
 	turn='O';
 }
 else if(turn=='O' && tik[r][co]!='X' && tik[r][co]!='O'){
 	tik[r][co]='O';
 	turn='X';
 }
 else
 {
 	cout<<"\t\t ********BOX ALREADY FILLED!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
 	player();
 }

 }
 

 void display(){
 	system("cls");
 	cout<<"\t\tT I C  T A K  T O C \t (VAIBHAV) \n \n";	
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t "<<tik[0][0]<<"   |  "<<tik[0][1]<<"  |  "<<tik[0][2]<<"   \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t "<<tik[1][0]<<"   |  "<<tik[1][1]<<"  |  "<<tik[1][2]<<"   \n";
	cout<<"\t\t_____|_____|_____\n";
	cout<<"\t\t     |     |     \n";
	cout<<"\t\t "<<tik[2][0]<<"   |  "<<tik[2][1]<<"  |  "<<tik[2][2]<<"   \n";
	cout<<"\t\t     |     |     \n";

 }
 
 main()
{
while(!gameover())
{

	display();
	player();
	display();
	gameover();
}

	if(turn=='X'&& draw==false)
	cout<<"\t******** PLAYER2 [O] WINS  !!!!!!!!!!!!!!!!!!!!!***************\n";
	 else if(turn=='O'&& draw==false)
	cout<<"\t********** PLAYER1 [X] WINS !!!!!!!!!!!!!!!!!!!!!!!***********\n";
	else 
	cout<<"\t\t ************ GAME DRAW  !!!!!!!!!!!\n";
}
