#include <iostream>
#include <queue>
#include <assert.h>

using namespace std;

int n, m;

bool matrix[2001][2001];

struct Location {
	int x;
	int y;	
};

queue<Location> q;

bool intact(Location l) {
	return l.x >= 1 && l.y >= 1 && l.x <= n && l.y <= m && matrix[l.x][l.y] == true;
}

void burn(Location l){
	assert(intact(l));
	matrix[l.x][l.y] = false;
	q.push(l);
}

void process(Location lo){	
	Location w, n, s, e;
	w.x = lo.x - 1;
	w.y = lo.y;
	
	n.x = lo.x;
	n.y = lo.y + 1;
	
	s.y = lo.y - 1;
	s.x = lo.x;
	
	e.y = lo.y;
	e.x = lo.x + 1;
	
	if (intact(w)) burn(w);
	if (intact(s)) burn(s);
	if (intact(e)) burn(e);
	if (intact(n)) burn(n);
			
}

int main() {
	cin>> n>> m;
	
	for(int i=1 ; i<= n; i++){
		for(int j = 1; j<= m; j++){
			matrix[i][j] = true;
		}
	}
	
	int k;
	cin>> k;
	
	for(int i=0; i<k; i++) {
		Location l;
		cin>> l.x>> l.y;
		burn(l);
	}
	
	int ans=0;
	
	while (!q.empty()) {
		int save = q.size();
		
		for(int i=0; i<save; i++){
			Location lo;
			lo = q.front();
			q.pop();
			process(lo);
	    }
	   
	    ans++;
	}
	
	cout<< ans;
	
}
