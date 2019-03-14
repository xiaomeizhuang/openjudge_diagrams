#include <iostream>
using namespace std;

char boy;
int function(char str[],int i){
	int n=0;
	if(str[i]!=boy)
	{
		return i;
	}
	else
	{
		n=function(str,i+1);
		cout << i << ' ' << n << endl;
		return function(str,n+1);
	}
}
int main() {
	char line[101]={0};
	cin >> line;
	boy = line[0];
	int n=function(line,1);
	cout << "0 " << n << endl;
	return 0;
}