#include <iostream>
#include <vector>
using namespace std;

class Matrix{
    private:
        vector<vector<int>> mat;
        int row , col;
        
    public:
     //cTor 
     Matrix(int r , int c):row(r),col(c){
         mat.resize(row, vector<int>(col, 0));
     }
     
     //take input(getter)
     void input(){
         cout<<"Enter elements : "<<endl;
         for(int i=0;i<row;i++){
             for(int j=0; j<col;j++){
                 cin>>mat[i][j];
             }
         }
     }
     
     
     //display matrix
      void display() const {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
      }
     
    //operator '*' overloading
    Matrix operator *(const Matrix&other){
        //check for invalid case
        if (col != other.row) {
            throw invalid_argument("Matrix multiplication not possible!");
        }
        
        Matrix result(row, other.col);
        //multipication calculation
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < other.col; j++) {
                for (int k = 0; k < col; k++) {
                    result.mat[i][j] += mat[i][k] * other.mat[k][j];
                }
            }
        }
        return result;
    }
};



int main() {
    //Matrix 1
    int r1,c1;
    cout<<"Enter Dimensions of Matrix 1:"<<endl;
    cin>>r1>>c1;
    Matrix A(r1, c1);
    A.input();
    
    //Matrix 2
    int r2,c2;
    cout<<"Enter Dimensions of Matrix 2:"<<endl;
    cin>>r2>>c2;
    Matrix B(r2, c2);
    B.input();
    
    try {
        // Multiply matrices
        Matrix C = A * B;
        cout << "Resultant Matrix (A * B):" << endl;
        C.display();
    } 
    catch (const invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;
}
