#pragma once

class Counter {
private:
	int cnt;

public:
	Counter();
	Counter(int cnt);
	void increment();
	void decrement();
	int getCnt();
	void setCnt(int cnt);
};
