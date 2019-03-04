#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

int rajz(int x,int y, int h, int w)
{
    for(int i=1;i<=x;i++)
    {
	cout<<"X";
	for(int j=1;j<=w;j++)
	{
		cout<<" ";
	}
	cout<<" X"<<endl;
    }
    cout<<"X";
    for(int i=0;i<y;i++)
    {
	cout<<" ";
    }
    cout<<"o";
    for(int i=y;i<w;i++)
    {
	cout<<" ";
    }
    cout<<"X"<<endl;
    for(int i=x;i<h;i++)
    {
	cout<<"X";
	for(int j=1;j<=w;j++)
	{
		cout<<" ";
	}
	cout<<" X"<<endl;
    }

    return 0;
}

int main()
{
    int x=0,y=0;
    int width,height;

    cout<<"Adja meg a terulet magassagat es szelesseget, amin szeretne, hogy a labda pattogjon! (Ctrl + Z-vel lehet majd kilepni) \n";
    cin>>height>>width;
    while(true)
    {
        system("clear");
	cout<<" ";
	for(int i=0;i<width+1;i++)
	{
		cout<<"X";
	}
	cout<<endl;
        rajz(abs(height-(x++%(height*2))),abs(width-(y++%(width*2))),height,width);
	cout<<" ";
	for(int i=0;i<width+1;i++)
	{
		cout<<"X";
	}
	cout<<endl;
        usleep(50000);
    }
    return 0;
}

