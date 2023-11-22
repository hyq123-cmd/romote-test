#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	string temp;
	if(argc != 2)
	{
		cout<<"please using: "<<argc[0]<<"<string>"<<endl;
		return -1;
	}

	temp.append(argv[1]);
	cout<<argv[1]<<endl;
	
	return 0;
}
