int main()
{
    int N = 8; 
    //size of the array

    int A[] = {-2, -3, 4, -1, -2, 1, 5, -3};

    int curSum = 0; 
    int mxSum = 0;

    for(int i = 0; i < N; i++)
    {
        curSum += A[i];
        // add current element to 'curSum'

        mxSum = max(curSum, mxSum); 
        // update the ‘mxSum’ to get the 
        // maximum of all ‘curSum’ at every index.

        if(curSum < 0)curSum = 0; 
        // start a new subarray from here, 
        // because the previous sum was negative.
    }
    cout<<mxSum<<"\n"; 
    // output = Subarray sum from index (0 based index) 
    // 2 to 6 = 4 + (-1) + (-2) + 1 + 5 = 7  
    return 0;
}
