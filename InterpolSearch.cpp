#include <iostream>

using namespace std;

void show(int a[])
{
    for(int i = 0; i<SIZE; i++)
        {
          cout<<a[i]<<" "; 
        };
    cout<<endl;
};

int Interpolation_Search(int *a, int size, int x)
    {
        int il = 0;
        int ir = size-1;
        int mid;
        while((a[il] <= x) && (a[ir] >= x))
        	{
        		mid = il + ((x - a[il]) * (ir - il)) / (a[ir] - a[il]);
                cout<<"mid = "<<mid<<" val = "<<a[mid]<<endl;
        		if(a[mid] > x) ir = mid - 1;
        			else if(a[mid] < x) il = mid + 1;
        					else return mid;
        	};
        if(a[il] == x) return il;
        else return -1;
    };




int main()
{
    int vall;
    cin>>vall;
    int ar[] = {1,6,7,7,8,16,17,23,50,52};
    
    cout<<Interpolation_Search(ar, 10 , vall)<<endl;
    return 0;
}