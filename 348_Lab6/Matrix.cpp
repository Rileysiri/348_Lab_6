#include <iostream>
#include <fstream>
#include "stdio.h"

const int max = 100;

int main(){
    char filename[100];
    std::cout << "Enter the file name: ";
    std::cin >> filename;
    std::ifstream file(filename);
    int size;
    file >> size;
    int matrixA[max][max];
    int matrixB[max][max];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            file >> matrixA[i][j];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            file >> matrixB[i][j];
        }   
    }
    file.close();
    std::cout << "Name: Riley Sirimongkhon-Dyck\nLab 6: Matrix Manipulation\n";
    std::cout << "\nMatrix A:\n";
    for (int i =0; i < size; i++){
        for (int j=0; j < size; j++){
            std::cout<< matrixA[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Matrix B:\n";
    for (int i =0; i < size; i++){
        for (int j=0; j < size; j++){
            std::cout<< matrixB[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "Matrix Sum (A + B):\n";
    int sum[max][max];
    for(int i=0; i < size; i++){
        for (int j=0; j < size; j++){
            sum[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    for (int i =0; i < size; i++){
        for (int j=0; j < size; j++){
            printf("%2d ", sum[i][j]);
        }
        std::cout << "\n";
    }
    std::cout << "Matrix Product (A * B):\n";
    int multi[max][max];
    for (int i=0; i< size; i++){
        for (int j=0; j < size; j++){
            multi[i][j] = 0;
            for (int k=0; k < size; k++){
                multi[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }
    for (int i =0; i < size; i++) {
        for (int j=0; j < size; j++){
            printf("%3d ", multi[i][j]);
        }
        std::cout << "\n";
    }
    std::cout << "Matrix Difference (A - B):\n";
    int dif[max][max];

    for (int i =0; i < size; i++){
        for (int i = 0; i < size; i++){
            for (int j=0; j< size; j++){
                dif[i][j] = matrixA[i][j] - matrixB[i][j];
            }
        }
        for (int j=0; j < size; j++){
            std::cout<< dif[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}