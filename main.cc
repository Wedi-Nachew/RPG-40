//Fill out this comment with your names and which bullet points you did
//Partners: Kerney and Mencarelli
//Bullet Points: 
//Extra Credit: 
//URL to cover art and music: 

#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

void print_map(const vector<vector<char>>& vec) {
	for (auto &row : vec) {
		for (char col : row) {
			cout << col << '\t';
		}
		cout << endl;
	}
}

void set_map(vector<vector<char>>& vec) {
	for (auto &row : vec) {
		for (char &col : row) {
			col = '*';
		}
	}
}

int main() {
	const int ROWS = 5, COLS = 5;
	vector<vector<char>> map(ROWS,vector<char>(COLS)); // Holds map
	set_map(map);
	print_map(map);
}
