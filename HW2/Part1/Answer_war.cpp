#include <iostream>
using namespace std;

void swap(int &a, int &b){
	int temp = b;
		int size = 0;
		int max;
	b = a;
	a = temp;
}
class heap{
	private:
		long long int *arr;
		long long int size = 0;
		
		void deleteHeap(int save){
			long long int left = 2 * save + 1;
			long long int right = 2 * save + 2;
			long long int largest = save;
			
			if( left < size && arr[left] > arr[largest]) {
				largest=left;
			}
			if( right < size && arr[right] > arr[largest]) {
				largest=right;
			}
			
			if (largest != save){
				swap(arr[largest], arr[save]);
				deleteHeap(largest);
			}
		}
	public:
		heap(long long int maxim){
			arr = new long long int[maxim];
		}
		
		void push(long long int x){
		
			long long int save = size;
			
			arr[save] = x;
			
			size ++;
			while( save != 0){
				long long int f = (save-1)/2 ;
				if( arr[save] > arr[f]){
					swap(arr[save], arr[f]);
					save = f;
				} else{
					break;
				}
			}
		}
		
		void extract()
		{
			long long int i = 0;
			swap(arr[i],arr[size-1]);
			size --;		;	
			deleteHeap(i);
			
		}
		
		void print(){
			for(int i=0; i<size; i++){
				cout<<arr[i]<<endl;
			}
		}
		
	
		long long int getMax(){
			return arr[0];
		}
		
};

int main(){
	long long int solNum, monsPow, maxOp;
	cin >> solNum>> monsPow>> maxOp;
	
	heap x(solNum);
	for(int i = 1; i <= solNum ; i++){
		long long int power;
		cin >> power;
		x.push(power);
	}

    int num = 0;
    
	while(monsPow > 0 && num < maxOp ){
        long long int saving = x.getMax();
        monsPow -= saving;
        num++;
        x.extract();
        x.push(saving / 2);
    }
    
    if(monsPow <= 0){
    	cout << num << endl;
	}else{
		cout << "-1" << endl;
	}
	
	return 0;
}

