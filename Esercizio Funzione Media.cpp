#include<iostream>
using namespace std;


void media (double x, double y)
{


	double media;	 
	media=(x+y)/2;
	cout<<"il risultato e\'"<<media<<endl;
	return media;
}

int main()

{
double x;
double y;
double media;
cout<<"inserisci un numero"<<endl;
cin>>x;
cout<<"inserisci un altro numero"<<endl;
cin>>y;

media(x,y);
}

