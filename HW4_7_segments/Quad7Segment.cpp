#include "Quad7Segment.h"

// 0 means on 1 means off
//http://www.nutsvolts.com/magazine/article/using-seven-segment-displays-part-1

const int Quad7Segment::pattern[10] = { 
  //abcdefg
  0b111111001111, //0
  0b011000001111, //1
  0b110110101111, //2
  0b111100101111, //3
  0b011001101111, //4
  0b101101101111, //5
  0b101111101111, //6
  0b111000001111, //7
  0b111111101111, //8
  0b111101101111 //9
};

//Quad7Segment::Quad7Segment(int ser, int srClk, int rClk, int srClr){
  //implement this
//}

void Quad7Segment::setup(){
  //implement this
}

void Quad7Segment::update(){
  //implement this
  for (int i=0; i<4; i++) {
    shreg.pushn(buffer[i], 12);
    shreg.latch();
  }
}

void Quad7Segment::setNumber(int n){
  //implement this
    buffer[3] = pattern[(n/1000)] & ~8;
    buffer[2] = pattern[(n/100)%10] & ~4;
    buffer[1] = pattern[(n/10)%10] & ~2;
    buffer[0] = pattern[n%10] & ~1;
}
