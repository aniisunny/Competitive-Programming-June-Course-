class SeatManager {
public:
    priority_queue<int,vector<int>,greater<int>>pq; //create min heap
	SeatManager(int n) {
		for(int i=1;i<=n;++i)
			pq.push(i);
	}

	int reserve() {
		int reserve_seat=pq.top(); //Remove the top element from min heap and reserve the seat
		pq.pop();
		return reserve_seat;
	}

	void unreserve(int seatNumber) {
		pq.push(seatNumber); //push back the unreserve seat into heap
	}
};
