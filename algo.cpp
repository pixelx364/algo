/**
\file algo.cpp\
*/
/**
*Алгоритм быстрой сортировки.
*/
#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;
/**
@function qs
Функция быстрой сортировки массива, состоящая из трех параметров.
@param low - параметр отвечает за наименьший элемент.
@param high - параметр отвечает за наибольший элемент.
@param A - параметр отвечает за количество элементов.
@param x - параметр, являющийся опорным элементов посредине между low и high.
*/
void qs(int* A, int low, int high)
{
      int i = low;                
      int j = high;
      int x = A[(low+high)/2]; 
      do {
          while(A[i] < x) ++i;  
          while(A[j] > x) --j;  
          if(i <= j)
		  {           
              int temp = A[i];
              A[i] = A[j];
              A[j] = temp;
              i++; j--;
          }
      } while(i < j);
      if(low < j) qs(A, low, j);
      if(i < high) qs(A, i, high);
}
/**
@functin main
Главная функция.
*/
int main()
{
	int mas[5]={5,2,4,5,1};
	qs(mas,0,4);
	for (int i=0;i<5;i++)
	{
		cout << mas[i] << " ";
	}
	system("pause");
	return 0;
}

