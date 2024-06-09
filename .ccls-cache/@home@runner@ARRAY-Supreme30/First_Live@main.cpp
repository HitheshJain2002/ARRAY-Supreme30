// // #include <iostream>
// // #include <algorithm>

// // using namespace std;
// // pair<int,int> pairnum(int arr[], int size,int target){
// //   pair<int,int>ans=make_pair(-1, -1);
// //   for(int i=0;i<size;i++){
// //     for(int j=i+1;j<size;j++){
      
// //       if(arr[i]+arr[j]==target){
// //         ans.first=arr[i];
// //         ans.second=arr[j];
// //         return ans;
// //       }
// //     }
// //   }
// // return ans;
  
// // }

// // int main() {
  
// //   int arr[]={30,20,40,10,50};
// //   int size=5;
// //   int target=50;
// //  pair<int,int>ans = pairnum(arr,size,target);
// //   if(ans.first==-1){
// //     cout<<"No pair found"<<endl;
// //   }
// //   else{
// //      cout << "Pair found: (" << ans.first << ", " << ans.second << ")" << endl;
// //   }
  
// //   return 0;
  
// // }
// #include <iostream>
// using namespace std;

// void sort012(int arr[], int size)
// {
//     int zeroes = 0;
//     int ones = 0;
//     int twos = 0;
//     for(int i = 0; i < size; i++)
//     {
//         if(arr[i] == 0)
//         {
//             zeroes++;
//         }
//         else if(arr[i] == 1)
//         {
//             ones++;
//         }
//         else
//         {
//             twos++;
//         }
//     }
//     for(int i = 0; i < zeroes; i++)
//     {
//         arr[i] = 0;
//     }
//     for(int i = zeroes; i < zeroes + ones; i++)
//     {
//         arr[i] = 1; // Corrected line
//     }
//     for(int i = zeroes + ones; i < size; i++)
//     {
//         arr[i] = 2;
//     }
//     for(int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int arr[] = {0, 2, 1, 2, 0};
//     int size = 5;
//     sort012(arr, size);
//     return 0;
// }