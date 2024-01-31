#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

const int M = 100;
const int N = 9;
const int L = 30;

int makeDB(char [][N]);
int printRecord(char [], int);

int makeDB(char people[][N][L])
{
    ifstream ifs;
    char line[256]; 
    int length = 0;
    int i, j, fcnt;

    ifs.open("people-100.csv");
    if ( !ifs ) {
        cerr << "File Open Error\n";
        exit(0);
    }
    while(ifs)
    {
        ifs.getline(line, 256);
        cout << line << endl;
        i = 0;
        fcnt = 0;
        while( line[i] != '\n'){
            j = 0;
            while ( line[i] != ','){ 
                people[length][fcnt][j++] = line[i++];
            }
            people[length][fcnt++][j] = '\0';
        }
        length++;
    }
    return length;
}
void printRecord(char people[][N][L], int length){
    for(int i=0;i < length; i++){
        for(int j=0; j<N; j++){
            cout << people[i][j] << "\t";
        }
        cout << endl;
    }
}

/*******************************
 * Code your program here
 *******************************/