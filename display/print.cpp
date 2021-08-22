#include<iostream>
#include<fstream>
#include<string>
#include<sstream>

using namespace std;

int main()
{
    string filenamein,filenameout;
    string variable;
    string canvas;
    string app1=".graphics.";
    string bone="beginFill(";
    string eone="endFill(";
    string mone="moveTo(";
    string lone="lineTo(";
    string cone="curveTo(";
    string end1=");\n";
    string height=".0/900.0*$.height";
    string width=".0/1600.0*$.width";
    char interval=',';
    cout<<"Enter the input file name :\n";
    cin>>filenamein;
    cout<<"Enter the output file name :\n";
    cin>>filenameout;
    cout<<"Enter the variable :";
    cin>>variable;
    cout<<"Enter the Canvas :";
    cin>>canvas;
    ifstream fin(filenamein,fstream::in);
    ofstream fout(filenameout,fstream::out);
    fout<<"var "
            <<variable<<" =$.createShape({lifeTime:time,parent:"
            <<canvas
            <<"});\n";
    fout<<variable<<".transform.matrix3D = null;\n";
    string str;    string rgb1;
    while(getline(fin,str))
    {
        istringstream ost(str);char sign;
        ost>>sign;
        int w1,h1,w2,h2;
        switch(sign){
case 'b' :
    ost>>rgb1;
    fout<<variable<<app1<<bone<<rgb1<<end1;
    break;
    case 'm' :
        ost>>w1>>h1;
        fout<<variable<<app1<<mone
            <<w1<<width<<interval<<h1<<height<<end1;
        break;
    case 'l' :
        ost>>w1>>h1;
        fout<<variable<<app1<<lone
            <<w1<<width<<interval<<h1<<height<<end1;
        break;
    case 'c' :
        ost>>w1>>h1>>w2>>h2;
        fout<<variable<<app1<<cone
                <<w1<<width<<interval<<h1<<height<<interval
                <<w2<<width<<interval<<h2<<height<<end1;
        break;
        }
    }
    fout<<variable<<app1<<eone<<end1;
}
