#include <iostream>
#include <unordered_set>
using namespace std;
 
// Function to find the minimum index of the repeating element
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    // create an empty set to store array elements
    unordered_set<int> set;
 
    // traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // if the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        // if the element is seen for the first time, insert it into the set
        else {
            set.insert(arr[i]);
        }
    }
 
    // invalid input
    if (minIndex == n) {
        cout<<"Invalid Output";
        return 0;
    }
 
    // return minimum index
    return minIndex;
}
 
int main()
{
    int n;
    cout<<"Enter The Size Of Array : "<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter The Elements In Array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
 
    int minIndex = findMinIndex(arr, n);
 
    if(minIndex == 0){
        return 0;
    }
    else if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
   
 
    return 0;
}