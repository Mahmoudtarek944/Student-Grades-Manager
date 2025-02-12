#include <iostream>
#include <bits/stdc++.h>
using namespace std;

  int Get_Num_Student (){  // Function Number Of Student :
    cout << "Enter The Number Of Student To Learn Math Degree : " <<endl ;
    int number_students ;
    cin >> number_students ;
    return number_students ;
  }
  
  void Get_ID_Student (int arr_ID[] ,int size){  // Function ID For All Students :
    cout << "Enter ID for Each Student : "<<endl ;
    for ( int i = 0; i < size ; i++){
      cin >> arr_ID[i] ;
    }
  }
  void Get_Degree (int arr_degree[] , int arr_ID[] , int size){  // Function To Enter The Degree For All Stusent : 
    for (int i = 0; i < size ; i++){
      cout << " The Student Has " << arr_ID[i] << " ID , Has Degree : " << endl ;
      cin >> arr_degree[i] ;
    }
  }
  double Sum(int arr_degree[] ,int size){  // Function Summation The Degree : 
    double sum = 0;
    for (int i = 0 ; i < size ; i++){
      sum += arr_degree[i] ;
    }
    return sum ;
  }
  double Average_Degree(int arr_degree[] , int size ){   // Function The Average Of Degree For All Student : 
    double Average = Sum(arr_degree , size) ;
    return Average  / size ;
  }
  int main(){
    int num_students = Get_Num_Student () ;
  
    int ID_students[num_students] ;
    int Degree_students[num_students] ;
    
    Get_ID_Student(ID_students , num_students);
    Get_Degree(Degree_students , ID_students ,num_students);
  
    int total_degree =Sum(Degree_students , num_students) ;
  
    double average_degree = Average_Degree(Degree_students , num_students) ;
  
     cout << "The Average Math Degree Is : " << endl;
     cout << average_degree ;
    return 0 ; 
  }
