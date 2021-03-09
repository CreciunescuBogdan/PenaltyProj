
#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int kgmove()
{
int n=0;
srand((unsigned)time(0));
n=(rand()%3)+1;
return n;
}


int updown()
{
int m=0;
srand((unsigned)time(0));
m=(rand()%2)+4;
return m;
}

int kgmoveLvl2()
{
int p=0;
srand((unsigned)time(0));
p=(rand()%2)+1;
return p;
}



int main()
{

int b,a;
int Score=0;

cout<<"Welcome to the Penalty Shootout Game by Creciunescu Bogdan!"<<endl;
cout<<"\n";
cout<<"Select between 1 = Left, 2 = Center, 3 = Right and 4 = Down, 5 = Up!"<<endl;
while(Score<=9 && Score>=0){
cin>>b>>a;
    if (b<=3 && a>=4 && a<=5){


        if ((b==kgmove())&& (a==updown()))
        {
        cout<<"You missed!"<<endl;
        Score-=1;
        cout<<"Your Score is: " <<Score<<endl;
        }
        else {
                cout<<"You Scored a goal!"<<endl;
                Score+=1;
                cout<<"Your Score is: " <<Score<<endl;
            }
            }
    else {
        cout<<"You must choose between 1, 2, 3 for direction (Left, Center, Right) and between 4 / 5 for Down or Up!"<<endl;
        cout<<"Try again!"<<endl;
        }
         if(Score<=0){
				cout<<"\n";
                cout<<"Game Over!"<<endl;
                    }

}
cout<<"\n";
cout<<"Congratulations!"<<endl;
cout<<"\n";
cout<<"You reach Level 2!"<<endl;
cout<<"\n";
cout<<"Now you must choose between 1/2 for Left or Right and between 4/5 for Up or Down!"<<endl;

while(Score<=19 && Score>=0){
cin>>b>>a;

                if (b<=2 && a>=4 && a<=5){


                    if ((b==kgmoveLvl2())&& (a==updown()))
                    {
                        cout<<"You missed!"<<endl;
                        Score-=2;
                        cout<<"Your Score is: " <<Score<<endl;
                    }
                    else {
						cout<<"\n";
                        cout<<"You Scored a goal!"<<endl;
                        Score+=2;
                        cout<<"Your Score is: " <<Score<<endl;
                        }
                                            }
                else {
				cout<<"\n";
                cout<<"You must choose between 1/2 for Left or Right and between 4 / 5 for Down or Up!"<<endl;
				cout<<"\n";
                cout<<"Try again!"<<endl;

                    }
                         }
						cout<<"\n";
                        cout<<"Congratulations!"<<endl;
						cout<<"\n";
                        cout<<"You reach level 3!"<<endl;
						cout<<"\n";
                        cout<<"Now you must choose between 1/2 for Left or Right!"<<endl;

                        while(Score<=35 && Score>=0){
                                cin>>b;

                            if (b<=2)
                                     {


                                if (b==kgmoveLvl2())
                                {
                                    cout<<"You missed!"<<endl;
                                    Score-=3;
                                    cout<<"Your Score is: " <<Score<<endl;
                                }
                                else {
                                    cout<<"You Scored a goal!"<<endl;
                                    Score+=3;
                                    cout<<"Your Score is: " <<Score<<endl;
                                    }
                                        }


                            else {
                                cout<<"You must choose between 1/2 for Left or Right!"<<endl;
                                cout<<"Try again!"<<endl;
                                }}
                                if(Score>=35){
									cout<<"\n";
                                    cout<<"Congratulations!"<<endl;
									cout<<"/n";
                                    cout<<"You finished the game!"<<endl;
									
                                }
                                if(Score<=0){
                                    cout<<"Game Over!"<<endl;
									cout<<"\n";
									cout<<"Now you can try again! Good Luck! ;)";
                                    }


}



