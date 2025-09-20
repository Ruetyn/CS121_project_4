#ifndef HORSE_H_EXISTS
#define HORSE_H_EXISTS

class Horse {
	private:
		int position;
		int id;
		int trackLength;
	
	public:
		Horse();
		void init(int id, int trackLenght);
		void advance();
		void printLane();
		bool isWinner();
}; // end class def


#endif
