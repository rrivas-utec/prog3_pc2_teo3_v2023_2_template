//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_PC2_TEO3_V2023_2_COUNT_DIPHTHONGS_H
#define PROG3_PC2_TEO3_V2023_2_COUNT_DIPHTHONGS_H


template<typename T>
int count_diphthongs(T text, T diphthong) {
  int count = 0;
  typename T::size_type pos = 0;
  
  while ((pos = text.find(diphthong, pos)) != T::npos) {
    count++;
    pos += diphthong.size();
  }
  
  return count;
}

#endif //PROG3_PC2_TEO3_V2023_2_COUNT_DIPHTHONGS_H
