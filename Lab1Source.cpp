#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main( )
{
	char argv[50];
	
	
	cout << "Enter File Name. " << endl;
	//input.txt = file name
	cin.getline( argv, 50 );
	string filepath = string( argv );

	cout << filepath << endl;

	ifstream in;
	ofstream out;

	out.open( "output.txt" );
	in.open( filepath );

	int n;
	int sum=0;
	if ( !in.fail() && (!out.fail( )) ){
		while (in >> n) {

			out << n << "\t";
			out << pow(n, 2) << "\t";
			sum = sum + n;
			out << sum << "\t" << endl;
		}
		cout << "You can view data in output.txt" <<endl;
	}

	in.close();
	out.close();
	
	
	return 0;
}

