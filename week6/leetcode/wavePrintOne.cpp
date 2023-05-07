#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter number of rows : ";
    cin>>m;

    int n;
    cout<<"Enter number of rows : ";
    cin>>n;

    int arr[m][n];


    for(int i = 0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }


    //wave print
  
//     for(int i = 0;i<m;i++){ 
//     if(i%2==0){
//          for(int j=0;j<n;j++){      
//             cout<<arr[i][j]<<" ";
//         }
//     }else{
//          for(int j=n-1;j>=0;j--){      //reverse
//             cout<<arr[i][j]<<" ";
//         }
//     }
       
//         cout<<endl;
//    }


    //variant 1
//      for(int i = 0;i<m;i++){ 
//     if(i%2!=0){
//          for(int j=0;j<n;j++){      
//             cout<<arr[i][j]<<" ";
//         }
//     }else{
//          for(int j=n-1;j>=0;j--){      //reverse
//             cout<<arr[i][j]<<" ";
//         }
//     }
       
//         cout<<endl;
//    }

   //varaint 2
    for(int i = m-1;i>=0;i--){ 
    if(i%2==0){
         for(int j=0;j<n;j++){      
            cout<<arr[i][j]<<" ";
        }
    }else{
         for(int j=n-1;j>=0;j--){      //reverse
            cout<<arr[i][j]<<" ";
        }
    }
       
        cout<<endl;
   }


    return 0;
}