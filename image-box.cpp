/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 8 Task C

This program draws a white box exactly in the middle of the picture.
*/

#include <iostream>
#include <cassert>
#include <cstdlib>
#include <fstream>

using namespace std;

const int MAX_H = 512;
const int MAX_W = 512;

// Reads a PGM file.
// Notice that: height and width are passed by reference!
void readImage(int image[MAX_H][MAX_W], int &height, int &width) {
	char c;
	int x;
	ifstream instr;
	instr.open("inImage.pgm");

	// read the header P2
	instr >> c;
	assert(c == 'P');
	instr >> c;
	assert(c == '2');

	// skip the comments (if any)
	while ((instr>>ws).peek() == '#') {
		instr.ignore(4096, '\n');
	}

	instr >> width;
	instr >> height;

	assert(width <= MAX_W);
	assert(height <= MAX_H);
	int max;
	instr >> max;
	assert(max == 255);

	for (int row = 0; row < height; row++)
		for (int col = 0; col < width; col++)
			instr >> image[row][col];
	instr.close();
	return;

}


// Writes a PGM file
// Need to provide the array data and the image dimensions
void writeImage(int image[MAX_H][MAX_W], int height, int width) {
	ofstream ostr;
	ostr.open("outImage.pgm");
	if (ostr.fail()) {
		cout << "Unable to write file\n";
		exit(1);
	};

	// print the header
	ostr << "P2" << endl;
	// width, height
	ostr << width << ' ';
	ostr << height << endl;
	ostr << 255 << endl;

	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++) {
			assert(image[row][col] < 256);
			assert(image[row][col] >= 0);
			ostr << image[row][col] << ' '; 
			ostr << endl;
		}
	}
	ostr.close();
	return;

}

void invertimage(int image[MAX_H][MAX_W], int h, int w){

	int center_point= w / 2;

	for(int row = 0; row < h; row++) {
		for(int col = 0; col < w; col++) {

			if( (col >= ((w * 25) / 100)) && (col <= ((w * 75) / 100))&& (row >= ((h * 25) / 100)) && (row <= ((h * 75) / 100))){
				image[row][col] = 255;

			}
		}
	}
	return;
}

int main() {

	int img[MAX_H][MAX_W];
	int h, w;

	readImage(img, h, w);
	invertimage(img, h, w);
	writeImage(img, h, w);
    return 0;

}
