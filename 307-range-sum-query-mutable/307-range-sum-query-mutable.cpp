class NumArray {
    inline static int n;
    int* segTree;
public:
    NumArray(vector<int>& nums) {
        n = size(nums);
        segTree = (int*)malloc(4 * n * sizeof(int));
        build(nums, 1, 0, n - 1);
    }
    
    void build(vector<int>& nums, int segIdx, int l, int r) {
        if(l == r) segTree[segIdx] = nums[l];  
        else {
            int mid = (l + r) / 2; 
            build(nums, 2*segIdx, l, mid);      
            build(nums, 2*segIdx + 1, mid + 1, r); 
            segTree[segIdx] = segTree[2*segIdx] + segTree[2*segIdx + 1];  
        }
    }
    
    void update(int index, int val, int segIdx = 1, int l = 0, int r = n - 1) {
        if(l == r) segTree[segIdx] = val; 
        else {
            int mid = (l + r) / 2;
            if (index <= mid) update(index, val, 2*segIdx, l, mid);   
            else update(index, val, 2*segIdx + 1, mid + 1, r);       
            segTree[segIdx] = segTree[2*segIdx] + segTree[2*segIdx + 1];  
        }
    }
    
    int sumRange(int left, int right, int segIdx = 1, int l = 0, int r = n - 1) {
        if(left > right) return 0;   
        if(l == left && r == right) return segTree[segIdx];  // case - 1
        int mid = (l + r) / 2;
        return  sumRange(left, min(right, mid), 2*segIdx, l, mid) + 
                sumRange(max(left, mid + 1), right, 2*segIdx + 1, mid + 1, r);
    }
};