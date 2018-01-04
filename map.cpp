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
void flee(string fleer, int &fX, int &fY, int fSpeed, string target, int &tX, int &tY, int steps);
int main(){
    string p1 = "Bryce";
    string p2 = "Dylan";
    int p1X = 4;
    int p1Y = 4;
    int p2X = 9;
    int p2Y = 11;
    int p1Speed = 2;
    int p2Speed = 1;
    
    for(int i = 0; i<10 ; i++){
        chase(p2,p2X,p2Y,p2Speed,p1,p1X,p1Y,1);
        flee(p1, p1X, p1Y, p1Speed, p2, p2X, p2Y, 1);
    }
    
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

void flee(string fleer, int &fX, int &fY, int fSpeed, string target, int &tX, int &tY, int steps){
    cout << fleer <<  " X = " << fX << " " << fleer << " Y = " << fY << endl;
    cout << target <<  " X = " << tX << " " << target << " Y = " << tY << endl;
    int holderSpeed = fSpeed;
    for(int i=0; i<steps ; i++){
        cout << "Step " << i+1 << ": "<< endl;
        fSpeed = holderSpeed;
        while (fSpeed > 0){
            if(fX == 0){
                fX++;
                fSpeed--;
            }
            else if(fX == 11){
                fX--;
                fSpeed--;
                
            }
            else if(fY == 0){
                fY++;
                fSpeed--;
            }
            else if(fY == 11){
                fY--;
                fSpeed--;
            }
            else{
                if(fX < tX){
                    if(fX > 0) {
                        fX--;
                        fSpeed--;
                    }
                }
                else if(fX > tX){
                    if(fX < 11) {
                        fX--;
                        fSpeed--;
                    }
                }
                if(fY < tY){
                    if(fY > 0) {
                        fY--;
                        fSpeed--;
                    }
                }
                else if(fY > tY){
                    if(fY < 11) {
                        fY--;
                        fSpeed--;
                    }
                }
                fSpeed--;
            }
        }
        cout << fleer <<  " X = " << fX << " " << fleer << " Y = " << fY << endl;
        cout << target <<  " X = " << tX << " " << target << " Y = " << tY << endl;
    }
}
