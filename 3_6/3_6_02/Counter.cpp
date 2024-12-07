#include "Counter.h"

Counter::Counter() {
	cnt = 1;
}

Counter::Counter(int cnt) {
	this->cnt = cnt;
}

void Counter::increment() {
	cnt++;
}

void Counter::decrement() {
	cnt--;
}

int Counter::getCnt() {
	return cnt;
}

void Counter::setCnt(int cnt) {
	this->cnt = cnt;
}