//
//  map.cpp
//  
//
//  Created by Bryce Jacobson on 11/29/17.
//
//


#include <iostream>
#include <fstream>

using namespace std;

void chase(string chaser, int &cX, int &cY, int cSpeed, string target, int &tX, int &tY, int steps);
int main(){
    string p1 = "Bryce";
    string p2 = "Dylan";
    int p1X = 4;
    int p1Y = 4;
    int p2X = 9;
    int p2Y = 11;
        
    
    chase(p1, p1X, p1Y, 2, p2, p2X, p2Y, 10);
        
    cout << "DONE" << endl;
    
    return 0;
}
void chase(string chaser, int &cX, int &cY, int cSpeed, string target, int &tX,int &tY, int steps){
    cout << chaser <<  " X = " << cX << " " << chaser << " Y = " << cY << endl;
    cout << target <<  " X = " << tX << " " << target << " Y = " << tY << endl;
    int holderSpeed = cSpeed;
    for(int i=0; i<steps ; i++){
        cout << "Step " << i+1 << ": "<< endl;
        cSpeed = holderSpeed;
        while (cSpeed > 0){
            if(cX < tX){
                cX++;
                cSpeed--;
            }
            else if(cX > tX){
                cX--;
                cSpeed--;
            }
            if(cY < tY){
                cY++;
                cSpeed--;
            }
            else if(cY > tY){
                cY--;
                cSpeed--;
            }
            if (cY == tY && cX == tX){
                cSpeed--;
            }
            cout << chaser <<  " X = " << cX << " " << chaser << " Y = " << cY << endl;
            cout << target <<  " X = " << tX << " " << target << " Y = " << tY << endl;
        }
    }
}
