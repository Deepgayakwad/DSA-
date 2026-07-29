/* The functions which
builds the segment tree */

void buildSegTree(int st[], int i , int l , int r,int arr[]){
        
           if(l == r){
                
                st[i] = arr[l];
                return; 
           }
           
           int mid = l + (r-l) / 2;
           
           buildSegTree(st,2*i+1,l,mid,arr);
           buildSegTree(st,2*i+2,mid+1,r,arr);
           
           st[i] = st[2*i+1] + st[2*i+2];
           
           
   }
   
   int findMinQuery(int st[], int i , int l , int r , int s , int e){
         
           if(r < s || l > e) return INT_MAX;
           
           if(r == l) return st[i];
           
           
           int mid = l + (r - l)/2;
           int left = findMinQuery(st,2*i+1,l,mid,s,e);
           int right = findMinQuery(st,2*i+2,mid+1,r,s,e);
           
           return min(left,right);
   }
int *constructST(int arr[], int n) {
    
     int *st = new int[4 * n];
    buildSegTree(st,0,0,n-1,arr);
    return st;
     
    
}

/* The functions returns the
 min element in the range
 from a and b */
int RMQ(int st[], int n, int a, int b) {
    
    
     int mini = findMinQuery(st,0,0,n-1,a,b);
     return mini;
}