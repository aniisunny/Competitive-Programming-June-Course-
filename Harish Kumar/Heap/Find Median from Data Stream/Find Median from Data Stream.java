class MedianFinder {
    PriorityQueue<Integer> left;
    PriorityQueue<Integer> right;

    /** initialize your data structure here. */
    public MedianFinder() {
        left = new PriorityQueue<>(Collections.reverseOrder());
        right = new PriorityQueue<>();
    }
    
    public void addNum(int num) {
        if(right.size()>0 && num > right.peek())
        {
            right.add(num);
        }
        else
        {
            left.add(num);
        }
    
        if(right.size()-left.size()>1)
        {
            left.add(right.remove());
        }
    
        if(left.size()-right.size()>1)
        {
            right.add(left.remove());
        }
    }
    
    public double findMedian() {
        
        if(left.size()>right.size())
        {
            double mid1 = left.peek();
            return mid1;
        }
        if(left.size()<right.size())
        {
            double mid2 = right.peek();
            return mid2;
        }
        return (left.peek() + right.peek()) / 2.0;
        
    }
    
}

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder obj = new MedianFinder();
 * obj.addNum(num);
 * double param_2 = obj.findMedian();
 */
