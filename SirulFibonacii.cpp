#include <iostream>
#include <fstream>

using namespace std;

ifstream in("fibo.in.txt");
ofstream out("fibo.out.txt");

int main()
{
    int answer1;
    in >> answer1;
    if(answer1 == 1){
int i,n,f,a,b;
//cout<<"Aici, introduceti numarul de elemente: ";
in>>n;
//n=22;
a=0;
b=1;
out<<a<<" "<<b<<" ";
for(i=3;i<=n;i++)
    {
    f=b+a;
    out<<f<<" ";
    a=b;
    b=f;
    }
    } else if(answer1 == 2){
long n,i,a,b,c;
in >> n;
 if(n==1){out<<"0";
 } else if(n==2 || n==3){
     out << "1";
 } else {
        a=0;
        b=1;
        for(int i=3;i<=n;++i)
        {
            c=a+b;
            a=b;
            b=c;
        }
       out<<c;
 }
 
    } else {
        out << "Error on line 1 in fibo.in.txt.\n Raspunsul 1 este pentru a afisa cate elemente vrei, si pot sa introduci numarul pe linia 2\niar pentru raspunsul 2, programul va afisa al catelea element vrei, de unde il citeste de pe linia 2..." << endl;
    }
}
