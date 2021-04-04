#include<iostream>
#include<string>
using namespace std;

class list {
private:
	int* arr;
	int* curr;
	int size;
public:
	list() {
		curr = NULL;
		cout << "Enter the size of the array : " << endl;
		cin >> size;
		arr = new int[size];
	}

	void start() {
		curr = arr;
	}

	void tail() {
		start();
		for (int i = 0; i < size; i++) {
			curr++;
		}
	}

	void next() {
		curr++;
	}

	void back() {
		curr--;
	}

	void createlist() {
		start();
		cout << "Enter inputs : " << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> *curr;
			next();
		}

	}
	void print() {
		start();
		cout << "Array : "<< "[ ";
		for (int j = 0; j < size; j++) {
			cout << *curr;
            if(j < size-1){
                cout<<" , ";
            }
			next();
		}
		cout << " ]" << endl;
	}

	void insert(int index, int val) {
		if (index < 0) {
			cout << "Invalid index: " << endl;
			return;
		}
		size++;
		tail();
		for (int i = size; i >= 0; i--) {
			if (i > index) {
				*curr = *(curr - 1); 
			}
			else if (i == index) {
				*curr = val;
				break;
			}
			back();
		}
	}

	void remove(int index) {
		start();
		for (int i = 0; i <= size; i++) {
			if (i >= index) {
				*curr = *(curr + 1);
			}
			next();
		}
		size--;
	}

	bool find(int num) {
		start();
		bool ans = false;//by default we assume the number is not present in an array
		for (int i = 0; i < size; i++) {
			if (*curr == num) {
				ans = true;//if we it then no need of further iteration
				break;
			}
			next();
		}
		return ans;
	}

};
	int main() {
		int val, index, remove, num;
		list obj;

		obj.createlist();
		obj.print();

		cout << "Enter index : " << endl;
		cin >> index;
		cout << "Enter Value : " << endl;
		cin >> val;
		obj.insert(index, val);
		obj.print();
		 
		cout << "Enter index to remove: " << endl;
		cin >> remove;
		obj.remove(remove);
		obj.print();

		cout << "Enter number to check(find) : " << endl;
		cin >> num;
		cout<<"Answer: "<<obj.find(num)<< endl;

		return 0;
	}
