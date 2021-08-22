#include<iostream>
#include<fstream>
#include<windows.h>
using namespace std;

struct rgbtag{
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

int main(int argc,char *argv[])
{
    if(argc<3)return 0;
    string blockname(argv[1]);string output(argv[2]);
    ifstream fin(blockname,fstream::in|fstream::binary);
    ofstream fout(output);
    char head_two[54];
    fin.read(head_two,54);
    int count_num=0;rgbtag rgb;
    for(int index=0;index!=288;++index){
            for(int index1=0;index1!=48;++index1){
        fin.read((char *)&rgb,3);
        fout<<hex<<"0x"<<int(rgb.r|rgb.g<<8|rgb.b<<16|0x00<<24)<<',';
        }
            fout<<'\n';
        }
    fout.close();
    fin.close();
}
