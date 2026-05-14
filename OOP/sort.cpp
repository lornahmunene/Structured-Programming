#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr1[]={2,4,7};
    int arr2[]={1,3,5};
    //Already sorted arrays 
    int sortedarrays[6];
    // without using a vector and merge and sort the arrays manually
    int i=0;
    int j=0;
    int k=0;
    while (i<3 && j<3)
    {
        if (arr1[i]<arr2[j])
        {
            sortedarrays[k++]=arr1[i++];
        }
        else
        {
            sortedarrays[k++]=arr2[j++];
        }
    }
    
    while (i<3)
    {
        sortedarrays[k++]=arr1[i++];
    }
    while (j<3)
    {
        sortedarrays[k++]=arr2[j++];
    }
    cout<<"Merged and Sorted Array: ";
    for (int i = 0; i < 6; i++)
    {
        cout<<sortedarrays[i]<<" ";
    }
    cout<<endl;


        
//     int arr1[]={4,2,7};
//     int arr2[]={1,3,5};
//     vector<int> mergedarrays;
//     mergedarrays.insert(mergedarrays.end(), arr1, arr1 + sizeof(arr1)/sizeof(arr1[0]));
//     // 
//     mergedarrays.insert(mergedarrays.end(), arr2, arr2 + sizeof(arr2)/sizeof(arr2[0]));
//     sort(mergedarrays.begin(), mergedarrays.end());
//     cout<<"Merged and Sorted Array: ";
//     for(int i=0; i<mergedarrays.size(); i++){
//         cout<<mergedarrays[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// Unsorted arrays merged and sorted
}