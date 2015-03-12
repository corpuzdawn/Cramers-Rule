#include <iostream>
using namespace std;

int main()
{
    int unknown = 0;
    double element2;
    double matrix2[1];

    double element;
    double matrix[6];
    double det = 0;
    double x;
    double y;
    double z;

    double element1;
    double matrix1[12];
    double det1 = 0;


    cout << "How many unknowns do you have 1, 2 or 3?" << endl;
    cin>>unknown;
    if (unknown != 1 && unknown != 2 && unknown != 3) {
    cout<<"ERROR! You must type 1, 2 or 3 only. Not a symbol, letter or other numbers.";
    return 1;
    }
    //if (unknown>=4){
    //    cout<<"the program can only solve 1, 2 or 3 unknowns";
   // }
    else if(unknown==1){
    cout<<"please input elements"<<endl;
    cin>>element2;
    cout<<"x ="<<element2<<endl;

    }
    else if (unknown==2 ){
    //input matrix
    cout<<"please input the elements in this form: x y b " <<endl ;
    for (int i = 0; i<6; i++){
    cin>>element;
    matrix[i]=element;
    }
    //solving for determinants
    det = (matrix[0]*matrix[4])-(matrix[1]*matrix[3]);
    if(det==0){
    cout<<"your matrix can't be solved using Cramer's Rule";
    }
    else if(det!= 0){
    //solving for the unknown
    x=((matrix[2]*matrix[4])-(matrix[1]*matrix[5]))/det;
    y=((matrix[0]*matrix[5])-(matrix[2]*matrix[3]))/det;
    cout<<"x = " << x<<endl;
    cout<<"y = " << y<<endl;
    }
    }

    else if (unknown==3){
    cout<<"please input the elements in this form: x y z b"<<endl;
    //input elements
    for(int i =0; i<12; i++){
    cin>>element1;
    matrix1[i]=element1;
    }
    //solving determinats
    det1=((matrix1[0]*matrix1[5]*matrix1[10])+(matrix1[1]*matrix1[6]*matrix1[8])+(matrix1[2]*matrix1[4]*matrix1[9]))
        -((matrix1[8]*matrix1[5]*matrix1[2])+(matrix1[9]*matrix1[6]*matrix1[0])+(matrix1[10]*matrix1[4]*matrix1[1]));
    if(det1==0){
    cout<<"your matrix can't be solved using Cramer's Rule";
    }
    else if(det1!=0){
    //solving for unknown
    x=(((matrix1[3]*matrix1[5]*matrix1[10])+(matrix1[1]*matrix1[6]*matrix1[11])+(matrix1[2]*matrix1[7]*matrix1[9]))
        -((matrix1[11]*matrix1[5]*matrix1[2])+(matrix1[9]*matrix1[6]*matrix1[3])+(matrix1[10]*matrix1[7]*matrix1[1])))/det1;
    y=(((matrix1[0]*matrix1[7]*matrix1[10])+(matrix1[3]*matrix1[6]*matrix1[8])+(matrix1[2]*matrix1[4]*matrix1[11]))
        -((matrix1[8]*matrix1[7]*matrix1[2])+(matrix1[11]*matrix1[6]*matrix1[0])+(matrix1[10]*matrix1[4]*matrix1[3])))/det1;
    z=(((matrix1[0]*matrix1[5]*matrix1[11])+(matrix1[1]*matrix1[7]*matrix1[8])+(matrix1[3]*matrix1[4]*matrix1[9]))
        -((matrix1[8]*matrix1[5]*matrix1[3])+(matrix1[9]*matrix1[7]*matrix1[0])+(matrix1[11]*matrix1[4]*matrix1[1])))/det1;
    cout<<"x ="<<x<<endl;
    cout<<"y ="<<y<<endl;
    cout<<"z ="<<z<<endl;
    }
    }
    return 1;
    }
