#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <iostream>

using namespace std;

ifstream fin ("george.txt");

void upperCase (std::string &characters) {
    for (int i = 0; i < characters.length (); i++)
        if (characters[i] >= 'A' && characters[i] <= 'Z')
            characters[i] = characters[i] - 'A' + 'a';
}

class Compare {

public:
    bool operator() (pair<string, int> s1, pair<string, int> s2) {
        if (s1.second < s2.second)
            return true;
        if (s1.second > s2.second)
            return false;
        if (s1.first < s2.first)
            return false;
        return true;
    }
};

int main () {

    string sir, sir2;
    map<string, int> mapa;
    int i, j;
    getline (fin, sir);
    i = 0;
    j = 0;
    upperCase (sir);
    int l = sir.length ();
    while (i <= l) {
        if (sir[j] != ' ' && sir[j] != ',' && sir[j] != '?' && sir[j] != '!' && sir[j] != '.' && sir[j] != NULL) {
            while (sir[j] != ' ' && sir[j] != ',' && sir[j] != '?' && sir[j] != '!' && sir[j] != '.' && sir[j] != NULL)
                j++;

            sir2 = sir.substr (i, j - i);

            if (mapa.find (sir2) == mapa.cend ())
                mapa.insert ({sir2, 1});

            else
                mapa[sir2]++;


        } else
            j++, i = j;


    }
    priority_queue<pair<string,int>, vector<pair<string,int>>,Compare> TG;
    for (auto it = mapa.begin (); it != mapa.end (); it++)
        TG.push(pair<string,int>(it->first,it->second));

    while(!TG.empty())
    {

        cout<<TG.top().first<<" => "<<TG.top().second<<endl;
        TG.pop();
    }
    return 0;
}
