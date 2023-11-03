//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "count_diphthongs.h"
#include <vector>
#include <string>
using namespace std;

static void test_2_1() {
  std::vector<std::string> documents = {
      "This is a sample text with various ai combinations and ai.",
      "Another example where the ea diphthong is present.",
      "A third document with no specific diphthong focus."
  };
  std::string diphthong = "io";
  int total_count = 0;
  for (const auto &doc : documents) {
    total_count += count_diphthongs(doc, diphthong);
  }
  std::cout << total_count << std::endl;
}

TEST_CASE("Question #2.1") {
    execute_test("test_2_1.in", test_2_1);
}