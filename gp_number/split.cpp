#include<bits/stdc++.h>
using namespace std;
string data;
ifstream infile;

void split(string filename)
{
    ofstream outfile;
    outfile.open(filename.c_str());
    long long c = 1000000;
    while(c--)
    {
        infile>>data;
        data="017"+data;
        outfile<<data<<endl;
    }
    outfile.close();
}
int main ()
{
    infile.open("phone.txt");
    char t[10];
    for(int i=1;i<=100;i++)
    {
        sprintf(t,"%d",i);
        string num;
        ostringstream convert;
        convert << i;
        num = convert.str();
        string filename = "gp_num"+num+".txt";
        split(filename);
    }
}


