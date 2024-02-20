#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

const int M = 100;
const int N = 9;
const int L = 30;

int makeDB(char[][N]);
int printRecord(char[], int);
int printTel(char[], int);

int makeDB(char people[][N][L])
{
  int length = 0;
  char line[256];
  ifstream ifs;
  ifs.open("people-100.csv");
  if(!ifs)
  {
    cerr << "Error opening file" << endl;
    exit(0);
  }
  while(ifs.getline(line, 256))
    {
      int i = 0, j = 0;
      int field = 0;
      // cout << line << endl;
      while(line[i] != '\0')
        {
          if(line[i] != ',')
            people[length][field][j++] = line[i];
          else
          {
            people[length][field][j] = '\0'; 
            // cout << people[length][field] << "\t";
            field++;
            j = 0;
          }
          i++;
        }
      length++;
    }
    return length;
}
void printRecord(char people[][N][L], int length)
{
  printf("NO\tID\t\tName\t\t\tEmail\t\tPhone\t\t\tBirthday\t\t\t\tJobtitle\n");
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << people[i][j] << "\t";
        }
        cout << endl;
    }
}
void printEmail(char people[][N][L], int length)
{
    for (int i = 0; i < length; i++)
    {
      cout << people[i][5] << endl;
    }
}
int getNumMale(char people[][N][L], int length)
{
  int cnt = 0;
  for (int i = 0; i < length; i++)
    if (strcmp("Male", people[i][4]) == 0)
      cnt++;

  return cnt;
}

/*******************************
 * Code your program here
 *******************************/