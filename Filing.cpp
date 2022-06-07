#include <iostream>
#include <fstream>
using namespace std;
void input()
{
	//ifstream fin("input.txt);
	ifstream fin;	
	
	fin.open("Any.txt");
	char arr[1000];
	if (fin.is_open())
	{
		while (fin.eof()==false)
		{
			fin.getline(arr, 1000,' ');
			cout<<arr<<" ";
			
		}
        fin.close();
	}
	else
		cout<< "file not opened\n";	
	
}
void main()
{
	input();
	system("pause");
}
