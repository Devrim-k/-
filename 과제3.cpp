#include <iostream>
#include <vector>

using namespace std;

template <typename T>

class SimpleVector {
private :
	T* data;
	int currentSize;
	int currentCapacity;

public:
	SimpleVector() : currentSize(0) , currentCapacity(10) {
		data = num T[currentCapacity];
	}

	SimpleVector(int capacity) : currenSize(0), currentCapacity(capacity) {
		if (capacity <= 0) {
			throw invalid_argument("Capacity must be greater than 0.");
		}
		data = new T[currentCapacity];
	}

	~SimpleVector() {
		delete[] data;
	}

	void push_back(const T& value) {
		if (currentSize == currentCapacity) {
			return;
		}
		data[currentSize++] = value;
	}

	void pop_back() {
		if (currentSize > 0) {
			--currentSize;
		}
	}

	int size() const {
		return currentSize;
	}

	int capacity() const {
		return currentCapacity;
	}
};