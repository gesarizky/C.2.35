/**********************************************************
*  PEMROGRAMAN C++: MUDAH & CEPAT MENJADI MASTER C++      *
*                                                         *
*  Oleh    : Budi Raharjo                                 *
*  Email   : mbraharjo@gmail.com                          *
*                                                         *
*  Website : www.best-informatic.com                      *
*                                                         *
***********************************************************/

#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char S[20];
  char S1[20];
  char S2[20];
  
  //input kata
  cout<<"Masukkan kata: ";
  cin>>S;
  
  // Mengubah string S
  // menjadi huruf besar dan kecil,
  // dan hasilnya ditampung ke variabel S1 dan S2
  for (int i=0; i<strlen(S); i++) {
	S1[i] = (char) toupper((char) S[i]);
  }
  for (int i=0; i<strlen(S); i++) {
	S2[i] = (char) tolower((char) S[i]);
  }
  
  // Memasukkan karakter null
  // di bagian akhir string
  S1[strlen(S1)+1] = '\0';
  S2[strlen(S2)+1] = '\0';
  
  cout<<"Hruruf besar : "<<S1<<endl;
  cout<<"Hruruf kecil : "<<S2<<endl;

  return 0;
}
