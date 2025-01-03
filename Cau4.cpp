#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

struct DonHang{
    char* ID;
    char* name; 
    char* add; 
    char* sdt;
    double klg ; 
};
void readlist(DonHang donhang[100], istream&is) {
    char* temp = new char[100] ; 
    int cnt =0 ; 
    while(is.getline(temp,100)) {
        char* token = strtok(temp, "|") ; 
        donhang[cnt].ID = new char[18];
        strcpy(donhang[cnt].ID, token) ; 
        token = strtok(NULL, "|") ; 
        donhang[cnt].name = new char[16];
        strcpy(donhang[cnt].name, token);
        token = strtok(NULL, "|"); 
        donhang[cnt].add = new char[51] ; 
        strcpy(donhang[cnt].add, token) ;
        token = strtok(NULL, "|") ; 
        donhang[cnt].sdt = new char[11] ; 
        strcpy(donhang[cnt].sdt, token);
        token = strtok(NULL, "|"); 
        donhang[cnt].klg = atof(token) ;    
        cnt ++ ; 
    }

}
void Caucuoi(DonHang donhang[], const char* quan, ostream &os){

}
int main() {
    DonHang donhang[100] ; 
    ifstream FIn("input.txt") ; 
    ofstream FOut("output.txt"); 
    readlist(donhang, FIn); 
    char* deliveryDist = new char[100] ; 
    

}