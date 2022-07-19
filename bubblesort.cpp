#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec) {
   int i,j,n;
   n = myVec.size();
   
   for(i = 0; i < n - 1; ++i) {
      for(j = 0; j < n - 1 - i; ++j) {
         if (myVec.at(j) > myVec.at(j + 1)) {
            int temp = myVec.at(j);
            myVec.at(j) = myVec.at(j+1);
            myVec.at(j+1) = temp;
            }
         }
      }
}

int main() {
   int i,j,n;
   cin >> n;
   vector<int> myvec;
   
   for(i = 0; i < n; ++i) {
      cin >> j;
      myvec.push_back(j);
      }
      
   SortVector(myvec);
   
   for (i = 0; i < n; ++i) {
      cout << myvec.at(i) << " ";
      }
   cout << endl;

   return 0;
}
