//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_diphthongs.h"
#include <vector>
#include <string>
using namespace std;

static void test_2_2() {
  std::vector<std::string> words = {
      "creation", "beautiful", "train", "plane", "good"};
  
  for (const auto &word : words) {
    int count = count_diphthongs(word, "ai"s);
    std::cout << count << std::endl;
  }
  
}

TEST_CASE("Question #2.2") {
    execute_test("test_2_2.in", test_2_2);
}