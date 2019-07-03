#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
	int x , Fahrenheit;
	cout<<"Enter Celsius temperature : "<<endl;
	cin>> x ;
	Fahrenheit = (1.8 * x) + 32 ;
	cout<< "Fahrenheit = "<< (1.8 * x) + 32 << endl;
	cout<< ((Fahrenheit>70)? "Now weather in Thailand is Hot\n" : "Now weather in Thailand is Cool\n" );
	return(0);
}