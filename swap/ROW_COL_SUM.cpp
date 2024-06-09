// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     cout << "enter the row_size of the array" << endl;
//     int row_size;
//     cin >> row_size;
//     cout << "enter the col_size of the array" << endl;

//     int col_size;
//     cin >> col_size;

//     vector<vector<int>> arr(row_size, vector<int>(col_size));

//     cout << "enter the elements of the array" << endl;
//     for(int i = 0; i < row_size; i++) {
//         for(int j = 0; j < col_size; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     cout << "output the elements of the array" << endl;
//     for(int i = 0; i < row_size; i++) {
//         for(int j = 0; j < col_size; j++) {
//             cout << arr[j][i] << " ";
//         }
//         cout << endl;
//     }
//     int col1=0;
//     int total=0;
//     int i=0;
//     while(i<row_size) {
//         for(int j = 0; j < col_size; j++) {
//            col1 +=arr[i][j];
           
//         }cout<<"soln of "<<i<<"th row:"<<" "<<col1<<endl;
//        total +=col1;
//         cout<<"total solution:"<<total<<endl;
//         col1=0;
//         i++;
//         cout<<endl;
//     }
//     return 0;
// }
