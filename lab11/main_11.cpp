#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

void labor11();
string toLower(string word);

int main() {
    labor11();

    return 0;
}

string toLower(string word)
{
    string newS;
    for(char i:word)
    {
        newS+= tolower(i);
    }
    return newS;
}
void labor11()
{


    ifstream f("bemenet.txt");

    if(!f)
    {
        cout<<"File ERROR!\n";
        return;
    }

    map<string,vector<int>> words{};
    string rows;

    bool world_key=true;
    int index=1;

    while(getline(f,rows))
    {
        if(rows == "\0")
        {
            world_key=false;
            continue;
        }

        if(world_key)
        {
            words.insert({toLower(rows),{}});
        }
        else
        {
            string help{};
            for(char c:toLower(rows) + '\n')
            {
                if(c == ' ' || c == '\n' )
                {
                    if(words.find(help) != words.end())
                    {
                        if(find(words[help].begin(), words[help].end(), index) == words[help].end())
                        {
                            words[help].push_back(index);
                        }
                    }
                    help="";
                    continue;
                }
                if(c>='a' && c<='z')
                {
                    help+=c;
                }
            }
            index++;
        }
        rows=" ";
    }
    int b=-2;
    for(auto x:words)
    {
        cout<<x.first<<" ";
        for(auto w:x.second)
        {
            if(w==b+1)
            { cout<<"- "<<w<<" ";}
             else cout<<w<<" ";
            b=w;
        }
        cout<<endl;
    }

    f.close();
}




