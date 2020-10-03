#include <iostream>
using namespace std;

char kotak[10]={'o','1','2','3','4','5','6','7','8','9'};

int check();
void board();

int main() {
   int pemain = 1,i,pilihan;

   char tanda;
   do
   {
     board();
     pemain=(pemain%2)?1:2;

     cout<<"pemain"<<pemain<<"masukan angka:\n";
     cin >> pilihan;

     tanda=(pemain == 1) ? 'X' : 'O';

     if (pilihan==1 && kotak[1]=='1')
      kotak[1]=tanda;

      else if (pilihan ==2 && kotak[2] =='2')
      kotak[2]=tanda;

      else if (pilihan ==3 && kotak[3] =='3')
      kotak[3]=tanda;

      else if (pilihan ==4 && kotak[4] =='4')
      kotak[4]=tanda;
      
      else if (pilihan ==5 && kotak[5] =='5')
      kotak[5]=tanda;

      else if (pilihan ==6 && kotak[4] =='6')
      kotak[6]=tanda;

      else if (pilihan == 7 && kotak[7] =='7')
      kotak[7]=tanda;

      else if (pilihan == 8 && kotak[8] =='8')
      kotak[8]=tanda;

      else if (pilihan == 9 && kotak[9] =='9')
      kotak[9] = tanda;

      else
        {
          cout<<"invalid move";

          pemain--;
          cin.ignore();
          cin.get();
        }
        i=check();

        pemain++;
   }while(i==-1);
   board();
   if(i==1)
    cout<<"pemain\n"<<--pemain<<"menang";
   else 
    cout<<"seri";

   cin.ignore();
   cin.get();
   return 0;

}

int check(){
  if(kotak[1]==kotak[2] && kotak[2]==kotak[3])
  return 1;

  else if(kotak[4]==kotak[5]&&kotak[5]==kotak[6])
  return 1;

  else if(kotak[7]==kotak[8]&&kotak[8]==kotak[9])
  return 1;

  else if(kotak[1]==kotak[4]&&kotak[4]==kotak[7])
  return 1;

  else if(kotak[2]==kotak[5]&&kotak[5]==kotak[8])
  return 1;

  else if(kotak[3]==kotak[6]&&kotak[6]==kotak[9])
  return 1;

  else if(kotak[1]==kotak[5]&&kotak[5]==kotak[9])
  return 1;

  else if(kotak[3] == kotak[5] && kotak[5] == kotak[7])
  return 1;

  else if(kotak[1]!='1' &&kotak[2]!='2' &&kotak[3]!='3'
          && kotak[4]!='4' &&kotak[5]!='5' &&kotak[6]!='6'
          &&kotak[7]!='7' &&kotak[8]!='8' &&kotak[9]!='9')

    return 0;
  else
    return -1;  
}

void board(){
  system("cls");

  cout<<"tik tak toe";
  cout<<"pemain 1 (x) pemain2(0)"<<endl<<endl;
  cout<<endl;

  cout<<"      |     | "<<endl;
  cout<<" "<<kotak[1]<<" | "<<kotak[2]<<" | "<<kotak[3]<<endl;
  cout<<"______|_____|______"<<endl;
  cout<<"      |     |      "<<endl;

  cout<<" "<<kotak[4]<<" | "<<kotak[5]<<" | "<<kotak[6]<<endl;
  cout<<"______|_____|______"<<endl;
  cout<<"      |     |      "<<endl;

  cout<<" "<<kotak[7]<<" | "<<kotak[8]<<" | "<<kotak[9]<<endl;
  cout<<"      |     |      "<<endl<<endl;

}