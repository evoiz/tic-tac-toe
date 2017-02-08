#include <iostream>
#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
#include <cstdlib>
using namespace std;
char in[9];
class tic{
public:
char win(char m[])
{
    char n=78;
//////////////////////////////////////for safof
    for (int i=0; i<9; i+=3)
    {
      if(m[i]==m[i+1]&&m[i]==m[i+2]&&m[i]!='.')
            {
                return m[i];
            }
    }
/////////////////////////////////////3amod
    for (int i=0; i<3; i++)
    {

      if(m[i]==m[i+3]&&m[i]==m[i+6]&&m[i]!='.')
            {
                return m[i];
            }
    }
///////////////////////////////////////qtr
    if(m[0]==m[4]&&m[0]==m[8]&&m[0]!='.')
    {
        return m[0];
    }
    if(m[2]==m[4]&&m[2]==m[6]&&m[2]!='.')
    {
        return m[2];
    }
        return n;
}

int smart(char m[])
{
  for (int i=0; i<9; i+=3)
    {
      if(m[i]=='.' && m[i+1]!='.' && m[i+2]!='.'){return i;}
      if(m[i]!='.'&&m[i+1]=='.'&&m[i+2]!='.'){return i+1;}
      if(m[i]!='.'&&m[i+1]!='.'&&m[i+2]=='.'){return i+2;}
    }
/////////////////////////////////////3amod
    for (int i=0; i<3; i++)
    {

     if(m[i]=='.' && m[i+3]!='.' && m[i+6]!='.'){return i;}
      if(m[i]!='.'&&m[i+3]=='.'&&m[i+6]!='.'){return i+3;}
      if(m[i]!='.'&&m[i+3]!='.'&&m[i+6]=='.'){return i+6;}
    }
///////////////////////////////////////qtr
{

if(m[0]=='.'&&m[4]!='.'&&m[8]!='.'){return 0;}
if(m[0]!='.'&&m[4]=='.'&&m[8]!='.'){return 4;}
if(m[0]!='.'&&m[4]!='.'&&m[8]=='.'){return 8;}
}
{

if(m[2]=='.'&&m[4]!='.'&&m[6]!='.'){return 2;}
if(m[2]!='.'&&m[4]=='.'&&m[6]!='.'){return 4;}
if(m[2]!='.'&&m[4]!='.'&&m[6]=='.'){return 6;}
}
//////////////////////////////////////
while(1==1){
srand(time(0));
int x=rand()%9;
if(m[x]=='.'&&(m[x+4]!='.')){return x;}
}
}
bool e_nd(char m[])
{
int dot=0;
for(int i=0;i<9;i++){if(m[i]=='.'){dot++;}}
if(dot>0){return 1;}
else
return 0;
}
void print(char m[]){
for(int i=0;i<9;i++){
if(m[i]=='.'){cout<<"   ";}
else
{cout<<" "<<m[i]<<" ";}
if(i==2||i==5){cout<<endl<<"---------------"<<endl;}
else if(i==8){cout<<endl;}
else{cout<<"|";}
}

}
int attack(char m[],char pl){
  for (int i=0; i<9; i+=3)
    {
      if(m[i]=='.' && m[i+1]==pl && m[i+2]==pl){return i;}
      if(m[i]==pl&&m[i+1]=='.'&&m[i+2]==pl){return i+1;}
      if(m[i]==pl&&m[i+1]==pl&&m[i+2]=='.'){return i+2;}
    }
/////////////////////////////////////3amod
    for (int i=0; i<3; i++)
    {

     if(m[i]=='.' && m[i+3]==pl && m[i+6]==pl){return i;}
     if(m[i]==pl&&m[i+3]=='.'&&m[i+6]==pl){return i+3;}
     if(m[i]==pl&&m[i+3]==pl&&m[i+6]=='.'){return i+6;}
    }
///////////////////////////////////////qtr
{

if(m[0]=='.'&&m[4]==pl&&m[8]==pl){return 0;}
if(m[0]==pl&&m[4]=='.'&&m[8]==pl){return 4;}
if(m[0]==pl&&m[4]==pl&&m[8]=='.'){return 8;}
}
{

if(m[2]=='.'&&m[4]==pl&&m[6]==pl){return 2;}
if(m[2]==pl&&m[4]=='.'&&m[6]==pl){return 4;}
if(m[2]==pl&&m[4]==pl&&m[6]=='.'){return 6;}
}
int x=smart(m);
return x;
}
int best(char m[],char com){


  for (int i=0; i<9; i+=3)
    {
      if(m[i]=='.' && m[i+1]==com && m[i+2]==com){return i;}
      if(m[i]==com&&m[i+1]=='.'&&m[i+2]==com){return i+1;}
      if(m[i]==com&&m[i+1]==com&&m[i+2]=='.'){return i+2;}
    }
/////////////////////////////////////3amod
    for (int i=0; i<3; i++)
    {

     if(m[i]=='.' && m[i+3]==com && m[i+6]==com){return i;}
     if(m[i]==com&&m[i+3]=='.'&&m[i+6]==com){return i+3;}
     if(m[i]==com&&m[i+3]==com&&m[i+6]=='.'){return i+6;}
    }
///////////////////////////////////////qtr
{

if(m[0]=='.'&&m[4]==com&&m[8]==com){return 0;}
if(m[0]==com&&m[4]=='.'&&m[8]==com){return 4;}
if(m[0]==com&&m[4]==com&&m[8]=='.'){return 8;}
}
{

if(m[2]=='.'&&m[4]==com&&m[6]==com){return 2;}
if(m[2]==com&&m[4]=='.'&&m[6]==com){return 4;}
if(m[2]==com&&m[4]==com&&m[6]=='.'){return 6;}
}
char pl;
if(com=='x'){pl='o';}
else
{pl='x';}
int x=attack(m,pl);
return x;}
};
int main(){
while(1==1){
    tic tic;
    for(int i=0;i<9;i++){in[i]='.';}
    char player,compu,cc;
    cout<<"chose x or o"<<endl;
    cin>>cc;
    switch(cc){
    case 'x':
    player='x';
    compu='o';
    break;
    case 'o':
    player='o';
    compu='x';
    break;
    default:
     player='x';
    compu='o';
    break;
    }
    while(1==1){
   system("clear");
    tic.print(in);
    while(1==1){
    cout<<"where do you want put ("<<player<<"):";
    int nu;cin>>nu;
    if(in[nu-1]=='.'){in[nu-1]=player;break;}
    }
    if(tic.win(in)==player){system("clear");cout<<"you win"<<endl;tic.print(in);break;}
    if(tic.e_nd(in)==0){system("clear");cout<<"you lose"<<endl;tic.print(in);break;}
    cout<<"computer turn"<<endl;
    int sm=tic.best(in,compu);
    in[sm]=compu;
    //tic.print(in);
     if(tic.win(in)==compu){system("clear");cout<<"you lose"<<endl;tic.print(in);break;}
     if(tic.e_nd(in)==0){system("clear");cout<<"you lose"<<endl;tic.print(in);break;}
}
}
    return 0;
}
