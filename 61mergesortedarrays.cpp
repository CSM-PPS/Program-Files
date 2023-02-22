void merge(vector<int>& nums1, int m, vector<int>& nums2, int n,vector<int>& nums3)
{
    int i , j,k;
    while(i < m && j < n)
    {
            i = 0, j = 0,k=0;
            if(nums1[i] <= nums2[j])
            {
                nums3[k] = nums1[i];
                i++;
                k++;
                
            }
            else if(nums2[j] < nums1[i])
            {
                nums3[k] = nums2[i];
                j++;
                k++;
            }
        else if(i < m)
        {
            nums3[k] = nums1[i]   ;
            i++;
            k++;
        }
        else{
            nums3[k] = nums2[i];
            j++;
            k++;
        }
    }
    
}
void printarray(int nums3[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<nums3[i]<<" ";
    }
}

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        merge(vector<int>& nums1, int m, vector<int>& nums2, int n,vector<int>& nums3;
        printarray(arr3,n);
    }
};  