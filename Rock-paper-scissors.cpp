#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

	int rock = 1 ;
	int papr = 2;
	int sccr = 3;
	int plyr,ai,sum,d=0,w=0,l=0,g=0;
	

	double seed = time(0);

	srand(seed);
	
	cout<<"ROCK PAPER SCISSORS"<<endl;
	
	
	do {
		cout<<endl<<"1)Rock\n2)Paper\n3)Scissors\n4)Quit"<<endl;
		cout<<"\nPick a number : ";
		cin>>plyr;
		//validate input
		if(plyr<=0||plyr>=5){
			cout<< "Invalid number."<< endl;
			return 5;
		}else if (plyr==4){
			cout<<"Quitting now..."<< endl;
		}else {
			cout<<"AI chose : ";
			g++;
		}
		//ai choice
		ai = rand()%3+1;
		cout<< ai;
		// draw
		if(plyr==ai){
			
			cout<<endl<<endl<<"It's a Draw"<<endl;
			d++;
		
		}
		
		sum=ai+plyr;
		cout<<endl;
		
		if(sum==3 || sum==5){
			if(plyr==1){
				if(ai==2){
					//ai win
					cout<<endl<<"You Lose"<<endl;
					l++;
				}else{
					//plyr win
					cout<<endl<<"You Win"<<endl;
					w++;
				}
			}else if(plyr==2){
				if(ai==3){
					//ai win
					cout<<endl<<"You Lose"<<endl;
					l++;
				}else{
					//plyr win
					cout<<endl<<"You Win"<<endl;
					w++;
				}
			}else if(plyr==3){
				if(ai==1){
					//ai win
					cout<<endl<<"You Lose"<<endl;
					l++;
				}else{
					//plyr win
					cout<<endl<<"You Win"<<endl;
					w++;
				}
			}	
			
		}
	}while(plyr!=4);
	
	
	cout<<endl<<"Out of "<<g<<" games;"<<endl;
	cout<<endl<<"Win : "<<w;
	cout<<endl<<"Draw : "<<d;
	cout<<endl<<"Lose : "<<l;
	

	return 0;
}
