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

// float Ax , Ay ;
//   cin >> Ax >>Ay ;
//   float Bx ,By ;
//   cin >> Bx >> By ;
//   float Cx ,Cy ;
//   cin >> Cx >> Cy ;
//   float r ;
//   cin >> r ;
//   float Mx = (Ax + Bx) / 2;
//   float My = (Ay + By) / 2;
//   float PointX =abs(Mx - Cx) ;
//   float pointY =abs(My - Cy) ;
//   float Distance = sqrt((PointX * PointX) + (pointY * pointY)) ;
//   if (Distance <= r){
//     cout << "Yes" ;
//   }else{
//     cout << "No" ;
//   }
// int l , r ;
//    cin >> l >> r ;
//    int n =0 ;
//    for (int i = l ; i <= r ; i++){
//       n ++ ;
//    }
//    int sum_All =( l + r) * n/2 ;
   
//    int sum_Even = 0 , sum_Odd = 0 ;
//    for ( int i = l ; i <= r ; i++){
//     if (i %2 == 0){
//       sum_Even += i ;
//     }else{
//       sum_Odd +=i ;
//     }
//    }
//    cout << sum_All << " " << sum_Even << " " <<sum_Odd ;


 
  
 
//  int mini = arr[0];
//  for (int i = 0 ; i < size ; i++){
//     if (arr[i] != )
//  }


// int squar(int n ){
//   if (n ==0 ){
//     return 0 ;
//   }
//   cout << n * n <<endl ;
//   return squar (n - 1) ;
// }

// int main (){
//    int x ;
//    cin >> x ;
//    squar (x) ;

//   return 0 ;
// }

// cout << "Enter The Number Students To Give Average In Math : " <<endl ;
//    int num_stud ;
//    cin  >> num_stud ;
//    float arr[num_stud]  ;
//    cout << "Enter The Degree In Math For Evrey Student : " <<endl  ;
//    for (int i = 0 ; i < num_stud ; i++){
//       cin >> arr[i] ;
//    }
//      float sum =0, count , average ;
//    for (int i = 0 ; i < num_stud ; i++){
//     sum += arr[i] ;
//    } 
//    count = num_stud;
//    average = sum / count ;
//    cout << "The Average Degree In Math Is : " << average ;
// int n ;
//   cin >> n ;
//   int x ;
//   for ( int i = n ; i >= 1 ; i*){
//     if (i %2 == 0){
//       i = i /2 ;
//       if ( i % 2 == 0 ){
//         i = i / 2 ;
//       }else{
//         i =( i * 3) + 1 ;
//       }
//     }
//     else if ( i % 2 != 0 ){
//       i =(i * 3) + 1;
//       if ( i % 2 == 0){
//         i = i / 2 ;
//       }else {
//          i =( i * 3) + 1 ;
//       }
//     }
//   }