#include<bits/stdc++.h>
using namespace std;
class About{
public:

    string Alias;
    string RealName;
    int age;
    list<string> InterestedGames;
};
int main(){
    About Personal_abt;

    Personal_abt.Alias = Goku;
    Personal_abt.RealName = Gokul;
    Personal_abt.age = 20;
    Personal_abt.IneterestedGames = {"Call of Duty","SpiderMan","GodOfWar"};

    cout<<"Alias"<<Personal_abt.Alias<<endl;
    cout<<"Real Name"<<Personal_abt.<<endl;
    cout<<"Alias"<<Personal_abt.Alias<<endl;
    for(string games: Personal_abt.InterestedGames){
        cout<<games<<endl;
    }
}