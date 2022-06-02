class MedianFinder {
public:
    priority_queue<int>maxh;
    priority_queue<int,vector<int>,greater<int>>minh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
          if (maxh.empty() or maxh.top() > num) {
			maxh.push(num);
		} else {
			minh.push(num);
		}

		if (maxh.size() > minh.size() + 1) {
			minh.push(maxh.top());
			maxh.pop();
		} else if (minh.size() > maxh.size() + 1) {
			maxh.push(minh.top());
			minh.pop();
		}
    }
    
    double findMedian() {
        if(maxh.size()==0 and minh.size()==0){return 0;}
        if(maxh.size()==minh.size()){
            double avg = (maxh.top() + minh.top()) / 2.0;
				return avg;
        }
        else {
			return maxh.size() > minh.size() ? maxh.top() : minh.top();
		}
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
