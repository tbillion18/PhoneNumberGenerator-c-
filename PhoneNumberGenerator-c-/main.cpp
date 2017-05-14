#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

int file();

int main()
{
    cout << "Hi there! Enter your first name and you will be given a random number...." << endl;
    srand(time(0));
    file();
}

int file (){
    ofstream StoreNum("storedNum.txt");
    if (StoreNum.is_open()){
        cout << "storeNum is open"<< endl;
        int numbering =1;

        for(int x=0; x = numbering; x++){
            string nameList;
            cin >> nameList;
            string ac("1(800)");

            StoreNum << endl << numbering << "    "<< nameList << "    "<< ac;

            int y= 0;
            while(y<3){
                StoreNum << 0+(rand()%9);
                y++;
            }
            StoreNum << "-";
            while (y<7){
                StoreNum << 0+(rand()%9);
                y++;
            }
        ++numbering;
        }
        StoreNum.close();
    }else{cout << "Storenum couldnt be found";}
    return 0;
}
