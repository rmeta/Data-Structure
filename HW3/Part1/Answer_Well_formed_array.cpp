#include <iostream>
#include<vector>
#include <cstdlib>
using namespace std;

vector<int> func(vector<int> v){
	int rem;
	rem = v.size() % 2;
	if(rem == 1){
		int save = v.back() + 1;
		v.push_back(save);//zoj shod khunehamun
	}
	
	vector<int> saving(v.size());
	saving.back() = v.back();
	v.pop_back();
	
	for(int i=saving.size()-3; i >= 1; i-=2 ){
		saving[i] = v.back();
		v.pop_back();
		saving[i+1] = v.back();
		v.pop_back();
	}
	
	saving[0] = v.back();
	v.pop_back();
	
	if(rem == 1){
		saving.pop_back();
	}
	return saving;
}

void sortVec(vector<int>& v,int size){
	if(size<2){
		return;
	}
	
  int p = rand() % size;
  
	vector <int> a;
	vector <int> b;
	
	for (int i = 0; i < size; i++) { 
    if (i == p) {
      continue;
    }
    
		if(v[i] < v[p]) a.push_back(v[i]);
		else b.push_back(v[i]);
  }
  
  sortVec(a , a.size());
	sortVec(b, b.size());
  int pivot = v[p];
	
	vector <int> c;
	for (int i = 0; i < a.size(); i++) c.push_back(a[i]);
	c.push_back(pivot);
	
	for (int i = 0; i < b.size(); i++) c.push_back(b[i]);
	
	
	for (int i = 0; i < size; i++){
		v[i] = c[i];
	}
}
int main(){
  
	vector<int> v;
	
	int numIn, input;
	cin>>numIn;
	
	for(int i = 0; i < numIn; i++){
		cin>> input;
		v.push_back(input);
	}
	
	int size = v.size();
	sortVec(v, size);
	
	vector<int> rmita = func(v);
	for(int i=0; i< rmita.size(); i++){
		cout<< rmita[i]<< " ";
	}
	
}


