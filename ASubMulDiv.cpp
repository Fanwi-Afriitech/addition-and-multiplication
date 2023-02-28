#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int myadd(int x, int y){
	int c;
	c=x+y;
	return c;
	
}
int mysub(int x, int y){
	int d;
	d=x-y;
	return d;
}
int mymul(int x, int y){
	int e;
	e=x*y;
	return e;
}
int mydiv(int x, int y){
	int f;
	f=x/y;
	return f;
}

int main() {
	
	int a,b,c;
	string t;
	do{
	
	cout<<"which operation do u wish to perform ? enter 1 for +,2 for -,3 for *,4 for / \n";
	cin>>c;
	
	cout<<"enter a number \n";
	cin>>a;
	cout<<"enter another number \n";
	cin>>b;
	if(c==1){
		int z = myadd(a,b);
		cout<<"The sum is "<<z<< "\n";
		
	}
	 else if(c==2){
		int y = mysub(a,b);
		cout<<"The sub is "<<y <<"\n";
		
	}
	else if(c==3){
		int y = mymul(a,b);
		cout<<"The product is "<<y<<"\n";
		
	}
	else{
		int y = mydiv(a,b);
		cout<<"The div is "<<y;
		
	}
	cout<<"Do you wish to perform another operation \n";
	cin>>t;
}
while(t=="yes");
	
}